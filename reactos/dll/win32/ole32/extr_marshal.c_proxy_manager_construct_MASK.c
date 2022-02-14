
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_14__ {int * psa; int dwAuthnHint; int ipidRemUnknown; int dwTid; int dwPid; } ;
struct proxy_manager {int refs; int entry; int * dest_context_data; int dest_context; int * remunk; int sorflags; void* oid; void* oxid; TYPE_5__* parent; int cs; int interfaces; TYPE_3__ IClientSecurity_iface; TYPE_2__ IMarshal_iface; TYPE_1__ IMultiQI_iface; int remoting_mutex; TYPE_8__ oxid_info; } ;
typedef int ULONG ;
struct TYPE_13__ {int cs; int proxies; } ;
struct TYPE_12__ {int dwAuthnHint; int ipidRemUnknown; int dwTid; int dwPid; } ;
typedef TYPE_4__ OXID_INFO ;
typedef void* OXID ;
typedef void* OID ;
typedef int HRESULT ;
typedef TYPE_5__ APARTMENT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 struct proxy_manager* FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,struct proxy_manager*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (void*,TYPE_8__*) ;
 int VAR_6 ;
 int FUNC_13 (char*,struct proxy_manager*,int ,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (void*) ;

__attribute__((used)) static HRESULT FUNC_17(
    APARTMENT * VAR_7, ULONG VAR_8, OXID VAR_9, OID VAR_10,
    const OXID_INFO *VAR_11, struct proxy_manager ** VAR_12)
{
    struct proxy_manager * VAR_13 = FUNC_8(FUNC_6(), 0, sizeof(*VAR_13));
    if (!VAR_13) return VAR_1;

    VAR_13->remoting_mutex = FUNC_1(((void*)0), VAR_2, ((void*)0));
    if (!VAR_13->remoting_mutex)
    {
        FUNC_9(FUNC_6(), 0, VAR_13);
        return FUNC_7(FUNC_5());
    }

    if (VAR_11)
    {
        VAR_13->oxid_info.dwPid = VAR_11->dwPid;
        VAR_13->oxid_info.dwTid = VAR_11->dwTid;
        VAR_13->oxid_info.ipidRemUnknown = VAR_11->ipidRemUnknown;
        VAR_13->oxid_info.dwAuthnHint = VAR_11->dwAuthnHint;
        VAR_13->oxid_info.psa = ((void*)0) ;
    }
    else
    {
        HRESULT VAR_14 = FUNC_12(VAR_9, &VAR_13->oxid_info);
        if (FUNC_4(VAR_14))
        {
            FUNC_0(VAR_13->remoting_mutex);
            FUNC_9(FUNC_6(), 0, VAR_13);
            return VAR_14;
        }
    }

    VAR_13->IMultiQI_iface.lpVtbl = &VAR_0;
    VAR_13->IMarshal_iface.lpVtbl = &VAR_5;
    VAR_13->IClientSecurity_iface.lpVtbl = &VAR_4;

    FUNC_15(&VAR_13->entry);
    FUNC_15(&VAR_13->interfaces);

    FUNC_10(&VAR_13->cs);
    FUNC_2(&VAR_13->cs, "proxy_manager");


    VAR_13->parent = VAR_7;


    VAR_13->oxid = VAR_9;
    VAR_13->oid = VAR_10;

    VAR_13->refs = 1;




    VAR_13->sorflags = VAR_8;


    VAR_13->remunk = ((void*)0);



    VAR_13->dest_context = VAR_3;
    VAR_13->dest_context_data = ((void*)0);

    FUNC_3(&VAR_7->cs);





    FUNC_14(&VAR_7->proxies, &VAR_13->entry);
    FUNC_11(&VAR_7->cs);

    FUNC_13("%p created for OXID %s, OID %s\n", VAR_13,
        FUNC_16(VAR_9), FUNC_16(VAR_10));

    *VAR_12 = VAR_13;
    return VAR_6;
}
