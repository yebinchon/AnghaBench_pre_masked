
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int refCount; TYPE_2__ IEnumFilters_iface; int Version; int * pVersionSource; int *** pppFilters; int * pNumFilters; scalar_t__ uIndex; } ;
typedef int LONG ;
typedef int IGraphVersion ;
typedef TYPE_1__ IEnumFiltersImpl ;
typedef TYPE_2__ IEnumFilters ;
typedef int IBaseFilter ;
typedef scalar_t__ HRESULT ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,int ***,int *,TYPE_2__**) ;

HRESULT FUNC_4(IGraphVersion * VAR_3, IBaseFilter *** VAR_4, ULONG * VAR_5, IEnumFilters ** VAR_6)
{


    IEnumFiltersImpl * VAR_7 = FUNC_0(sizeof(IEnumFiltersImpl));
    HRESULT VAR_8;
    LONG VAR_9;

    FUNC_3("(%p, %p, %p)\n", VAR_4, VAR_5, VAR_6);

    *VAR_6 = ((void*)0);

    if (!VAR_7)
    {
        return VAR_0;
    }

    VAR_7->IEnumFilters_iface.lpVtbl = &VAR_1;
    VAR_7->refCount = 1;
    VAR_7->uIndex = 0;
    VAR_7->pNumFilters = VAR_5;
    VAR_7->pppFilters = VAR_4;
    FUNC_1(VAR_3);
    VAR_7->pVersionSource = VAR_3;


    VAR_8 = FUNC_2(VAR_3, &VAR_9);
    VAR_7->Version = (VAR_8==VAR_2) ? VAR_9 : 0;

    *VAR_6 = &VAR_7->IEnumFilters_iface;
    return VAR_2;
}
