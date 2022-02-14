
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_8__ {int refs; TYPE_3__ IRpcChannelBuffer_iface; void* dest_context_data; int dest_context; } ;
struct TYPE_11__ {TYPE_1__ super; int iid; int * event; int server_pid; int oxid; int bind; } ;
struct TYPE_9__ {int dwPid; } ;
typedef scalar_t__ RPC_STATUS ;
typedef int RPC_BINDING_HANDLE ;
typedef TYPE_2__ OXID_INFO ;
typedef int OXID ;
typedef int LPWSTR ;
typedef TYPE_3__ IRpcChannelBuffer ;
typedef int IPID ;
typedef int IID ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_4__ ClientRpcChannelBuffer ;
typedef int APARTMENT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 TYPE_4__* FUNC_3 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int const*) ;
 int VAR_4 ;

HRESULT FUNC_13(const OXID *VAR_5, const IPID *VAR_6,
                                const OXID_INFO *VAR_7, const IID *VAR_8,
                                DWORD VAR_9, void *VAR_10,
                                IRpcChannelBuffer **VAR_11, APARTMENT *VAR_12)
{
    ClientRpcChannelBuffer *VAR_13;
    WCHAR VAR_14[200];
    RPC_BINDING_HANDLE VAR_15;
    RPC_STATUS VAR_16;
    LPWSTR VAR_17;


    FUNC_12(VAR_14, VAR_5);

    FUNC_9("proxy pipe: connecting to endpoint: %s\n", FUNC_11(VAR_14));

    VAR_16 = FUNC_7(
        ((void*)0),
        VAR_4,
        ((void*)0),
        VAR_14,
        ((void*)0),
        &VAR_17);

    if (VAR_16 == VAR_2)
    {
        VAR_16 = FUNC_5(VAR_17, &VAR_15);

        if (VAR_16 == VAR_2)
        {
            IPID VAR_18 = *VAR_6;
            VAR_16 = FUNC_6(VAR_15, &VAR_18);
            if (VAR_16 != VAR_2)
                FUNC_4(&VAR_15);
        }

        FUNC_8(&VAR_17);
    }

    if (VAR_16 != VAR_2)
    {
        FUNC_0("Couldn't get binding for endpoint %s, status = %d\n", FUNC_11(VAR_14), VAR_16);
        return FUNC_2(VAR_16);
    }

    VAR_13 = FUNC_3(FUNC_1(), 0, sizeof(*VAR_13));
    if (!VAR_13)
    {
        FUNC_4(&VAR_15);
        return VAR_1;
    }

    VAR_13->super.IRpcChannelBuffer_iface.lpVtbl = &VAR_0;
    VAR_13->super.refs = 1;
    VAR_13->super.dest_context = VAR_9;
    VAR_13->super.dest_context_data = VAR_10;
    VAR_13->bind = VAR_15;
    FUNC_10(VAR_12, &VAR_13->oxid);
    VAR_13->server_pid = VAR_7->dwPid;
    VAR_13->event = ((void*)0);
    VAR_13->iid = *VAR_8;

    *VAR_11 = &VAR_13->super.IRpcChannelBuffer_iface;

    return VAR_3;
}
