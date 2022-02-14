
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
struct TYPE_10__ {int data; } ;
struct TYPE_13__ {size_t sessionsLen; TYPE_3__* sessions; TYPE_2__ impl; TYPE_1__* transport; int cs; } ;
struct TYPE_12__ {size_t ncb_lsn; int ncb_callname; int ncb_name; } ;
struct TYPE_11__ {scalar_t__ state; scalar_t__ inUse; int data; int remote_name; int local_name; } ;
struct TYPE_9__ {size_t (* call ) (int ,TYPE_4__*,int *) ;} ;
typedef TYPE_4__* PNCB ;
typedef TYPE_5__ NetBIOSAdapter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,int ,int ) ;
 size_t FUNC_4 (int ,TYPE_4__*,int *) ;

__attribute__((used)) static UCHAR FUNC_5(NetBIOSAdapter *VAR_11, PNCB VAR_12)
{
    UCHAR VAR_13, VAR_14;

    FUNC_2(": adapter %p, NCB %p\n", VAR_11, VAR_12);

    if (!VAR_11) return VAR_3;
    if (VAR_11->sessionsLen == 0) return VAR_4;
    if (!VAR_11->transport->call) return VAR_6;
    if (!VAR_12) return VAR_7;

    FUNC_0(&VAR_11->cs);
    for (VAR_14 = 0; VAR_14 < VAR_11->sessionsLen && VAR_11->sessions[VAR_14].inUse; VAR_14++)
        ;
    if (VAR_14 < VAR_11->sessionsLen)
    {
        VAR_11->sessions[VAR_14].inUse = VAR_10;
        VAR_11->sessions[VAR_14].state = VAR_0;
        FUNC_3(VAR_11->sessions[VAR_14].local_name, VAR_12->ncb_name, VAR_2);
        FUNC_3(VAR_11->sessions[VAR_14].remote_name, VAR_12->ncb_callname, VAR_2);
        VAR_13 = VAR_5;
    }
    else
        VAR_13 = VAR_8;
    FUNC_1(&VAR_11->cs);

    if (VAR_13 == VAR_5)
    {
        VAR_13 = VAR_11->transport->call(VAR_11->impl.data, VAR_12,
         &VAR_11->sessions[VAR_14].data);
        if (VAR_13 == VAR_5)
        {
            VAR_12->ncb_lsn = VAR_14;
            VAR_11->sessions[VAR_14].state = VAR_9;
        }
        else
        {
            VAR_11->sessions[VAR_14].inUse = VAR_1;
            VAR_11->sessions[VAR_14].state = 0;
        }
    }
    FUNC_2("returning 0x%02x\n", VAR_13);
    return VAR_13;
}
