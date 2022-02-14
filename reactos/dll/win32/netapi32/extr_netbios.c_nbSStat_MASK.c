
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_13__ {scalar_t__ sessionsLen; int cs; TYPE_1__* sessions; } ;
struct TYPE_12__ {int ncb_length; char* ncb_name; scalar_t__ ncb_buffer; } ;
struct TYPE_11__ {size_t lsn; scalar_t__ sends_outstanding; scalar_t__ rcvs_outstanding; int remote_name; int local_name; int state; } ;
struct TYPE_10__ {size_t num_sess; } ;
struct TYPE_9__ {int remote_name; int local_name; int state; scalar_t__ inUse; } ;
typedef int SESSION_HEADER ;
typedef int SESSION_BUFFER ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_2__* PSESSION_HEADER ;
typedef TYPE_3__* PSESSION_BUFFER ;
typedef TYPE_4__* PNCB ;
typedef TYPE_5__ NetBIOSAdapter ;


 int EnterCriticalSection (int *) ;
 int LeaveCriticalSection (int *) ;
 int NCBNAMSZ ;
 size_t NRC_BADDR ;
 size_t NRC_BUFLEN ;
 size_t NRC_ENVNOTDEF ;
 size_t NRC_GOODRET ;
 size_t NRC_INVADDRESS ;
 int TRACE (char*,...) ;
 int memcmp (char*,int ,int ) ;
 int memcpy (int ,int ,int ) ;
 int memset (TYPE_2__*,int ,int) ;

__attribute__((used)) static UCHAR nbSStat(NetBIOSAdapter *adapter, PNCB ncb)
{
    UCHAR ret, i, spaceFor;
    PSESSION_HEADER sstat;

    TRACE(": adapter %p, NCB %p\n", adapter, ncb);

    if (!adapter) return NRC_BADDR;
    if (adapter->sessionsLen == 0) return NRC_ENVNOTDEF;
    if (!ncb) return NRC_INVADDRESS;
    if (!ncb->ncb_buffer) return NRC_BADDR;
    if (ncb->ncb_length < sizeof(SESSION_HEADER)) return NRC_BUFLEN;

    sstat = (PSESSION_HEADER)ncb->ncb_buffer;
    ret = NRC_GOODRET;
    memset(sstat, 0, sizeof(SESSION_HEADER));
    spaceFor = (ncb->ncb_length - sizeof(SESSION_HEADER)) /
     sizeof(SESSION_BUFFER);
    EnterCriticalSection(&adapter->cs);
    for (i = 0; ret == NRC_GOODRET && i < adapter->sessionsLen; i++)
    {
        if (adapter->sessions[i].inUse && (ncb->ncb_name[0] == '*' ||
         !memcmp(ncb->ncb_name, adapter->sessions[i].local_name, NCBNAMSZ)))
        {
            if (sstat->num_sess < spaceFor)
            {
                PSESSION_BUFFER buf;

                buf = (PSESSION_BUFFER)((PUCHAR)sstat + sizeof(SESSION_HEADER)
                 + sstat->num_sess * sizeof(SESSION_BUFFER));
                buf->lsn = i;
                buf->state = adapter->sessions[i].state;
                memcpy(buf->local_name, adapter->sessions[i].local_name,
                 NCBNAMSZ);
                memcpy(buf->remote_name, adapter->sessions[i].remote_name,
                 NCBNAMSZ);
                buf->rcvs_outstanding = buf->sends_outstanding = 0;
                sstat->num_sess++;
            }
            else
                ret = NRC_BUFLEN;
        }
    }
    LeaveCriticalSection(&adapter->cs);

    TRACE("returning 0x%02x\n", ret);
    return ret;
}
