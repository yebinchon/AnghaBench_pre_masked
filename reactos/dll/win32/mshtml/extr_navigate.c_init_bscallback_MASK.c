
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; int * mon; int entry; int bom; int bindf; int const* vtbl; TYPE_3__ IInternetBindInfo_iface; TYPE_2__ IHttpNegotiate2_iface; TYPE_1__ IServiceProvider_iface; TYPE_4__ IBindStatusCallback_iface; } ;
typedef int IMoniker ;
typedef int DWORD ;
typedef int BSCallbackVtbl ;
typedef TYPE_5__ BSCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;

void FUNC_2(BSCallback *VAR_5, const BSCallbackVtbl *VAR_6, IMoniker *VAR_7, DWORD VAR_8)
{
    VAR_5->IBindStatusCallback_iface.lpVtbl = &VAR_1;
    VAR_5->IServiceProvider_iface.lpVtbl = &VAR_4;
    VAR_5->IHttpNegotiate2_iface.lpVtbl = &VAR_2;
    VAR_5->IInternetBindInfo_iface.lpVtbl = &VAR_3;
    VAR_5->vtbl = VAR_6;
    VAR_5->ref = 1;
    VAR_5->bindf = VAR_8;
    VAR_5->bom = VAR_0;

    FUNC_1(&VAR_5->entry);

    if(VAR_7)
        FUNC_0(VAR_7);
    VAR_5->mon = VAR_7;
}
