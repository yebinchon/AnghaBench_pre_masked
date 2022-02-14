
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nscontext {int entry; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_2__ IMXNamespaceManager_iface; int override; int ctxts; TYPE_1__ IVBMXNamespaceManager_iface; int dispex; } ;
typedef TYPE_3__ namespacemanager ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct nscontext* FUNC_1 () ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

HRESULT FUNC_7(void **VAR_6)
{
    namespacemanager *VAR_7;
    struct nscontext *VAR_8;

    FUNC_0("(%p)\n", VAR_6);

    VAR_7 = FUNC_2( sizeof (*VAR_7) );
    if( !VAR_7 )
        return VAR_0;

    VAR_7->IMXNamespaceManager_iface.lpVtbl = &VAR_1;
    VAR_7->IVBMXNamespaceManager_iface.lpVtbl = &VAR_4;
    VAR_7->ref = 1;
    FUNC_4(&VAR_7->dispex, (IUnknown*)&VAR_7->IVBMXNamespaceManager_iface, &VAR_5);

    FUNC_6(&VAR_7->ctxts);
    VAR_8 = FUNC_1();
    if (!VAR_8)
    {
        FUNC_3(VAR_7);
        return VAR_0;
    }

    FUNC_5(&VAR_7->ctxts, &VAR_8->entry);

    VAR_7->override = VAR_3;

    *VAR_6 = &VAR_7->IMXNamespaceManager_iface;

    FUNC_0("returning iface %p\n", *VAR_6);

    return VAR_2;
}
