
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; int * current; int links; TYPE_1__ IHlinkBrowseContext_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HlinkBCImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(IUnknown *VAR_4, REFIID VAR_5, void **VAR_6)
{
    HlinkBCImpl * VAR_7;

    FUNC_0("unkOut=%p riid=%s\n", VAR_4, FUNC_1(VAR_5));
    *VAR_6 = ((void*)0);

    if (VAR_4)
        return VAR_0;

    VAR_7 = FUNC_2(sizeof(HlinkBCImpl));
    if (!VAR_7)
        return VAR_1;

    VAR_7->ref = 1;
    VAR_7->IHlinkBrowseContext_iface.lpVtbl = &VAR_3;
    FUNC_3(&VAR_7->links);
    VAR_7->current = ((void*)0);

    *VAR_6 = VAR_7;
    return VAR_2;
}
