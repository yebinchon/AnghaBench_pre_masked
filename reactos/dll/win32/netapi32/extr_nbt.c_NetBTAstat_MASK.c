
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_15__ {scalar_t__ dwType; int bPhysAddr; int dwPhysAddrLen; int dwIndex; } ;
struct TYPE_11__ {int dwIndex; } ;
struct TYPE_14__ {int recv_success; int xmit_success; TYPE_1__ ipr; } ;
struct TYPE_13__ {int rev_major; int adapter_type; int max_sess_pkt_size; int recv_success; int xmit_success; int adapter_address; } ;
struct TYPE_12__ {int ncb_length; char* ncb_callname; int ncb_buffer; } ;
typedef TYPE_2__* PNCB ;
typedef TYPE_3__* PADAPTER_STATUS ;
typedef TYPE_4__ NetBTAdapter ;
typedef TYPE_5__ MIB_IFROW ;
typedef scalar_t__ DWORD ;
typedef int ADAPTER_STATUS ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_2 (char*,void*,...) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static UCHAR FUNC_6(void *VAR_8, PNCB VAR_9)
{
    NetBTAdapter *VAR_10 = VAR_8;
    UCHAR VAR_11;

    FUNC_2("adapt %p, NCB %p\n", VAR_8, VAR_9);

    if (!VAR_10) return VAR_5;
    if (!VAR_9) return VAR_7;
    if (!VAR_9->ncb_buffer) return VAR_2;
    if (VAR_9->ncb_length < sizeof(ADAPTER_STATUS)) return VAR_4;

    if (VAR_9->ncb_callname[0] == '*')
    {
        DWORD VAR_12;
        MIB_IFROW VAR_13;
        PADAPTER_STATUS VAR_14 = (PADAPTER_STATUS)VAR_9->ncb_buffer;

        FUNC_4(VAR_14, 0, sizeof(ADAPTER_STATUS));
        VAR_14->rev_major = 3;
        VAR_13.dwIndex = VAR_10->ipr.dwIndex;
        if (FUNC_0(&VAR_13) != VAR_1)
            VAR_11 = VAR_3;
        else
        {
            VAR_12 = FUNC_5(VAR_13.dwPhysAddrLen, 6);
            if (VAR_12 > 0)
                FUNC_3(VAR_14->adapter_address, VAR_13.bPhysAddr, VAR_12);

            if (VAR_13.dwType == VAR_0)
                VAR_14->adapter_type = 0xff;
            else
                VAR_14->adapter_type = 0xfe;
            VAR_14->max_sess_pkt_size = 0xffff;
            VAR_14->xmit_success = VAR_10->xmit_success;
            VAR_14->recv_success = VAR_10->recv_success;
            VAR_11 = VAR_6;
        }
    }
    else
        VAR_11 = FUNC_1(VAR_10, VAR_9);
    FUNC_2("returning 0x%02x\n", VAR_11);
    return VAR_11;
}
