
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int nMonikerCount; TYPE_1__ IEnumMoniker_iface; scalar_t__ index; void* ppMoniker; } ;
typedef int IMoniker ;
typedef TYPE_1__ IEnumMoniker ;
typedef int HRESULT ;
typedef TYPE_2__ EnumMonikerImpl ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int **,int,TYPE_1__**) ;
 int FUNC_2 (void*,int **,int) ;

HRESULT FUNC_3(IMoniker ** VAR_3, ULONG VAR_4, IEnumMoniker ** VAR_5)
{



    EnumMonikerImpl * VAR_6 = FUNC_0(sizeof(EnumMonikerImpl));

    FUNC_1("(%p, %d, %p)\n", VAR_3, VAR_4, VAR_5);

    *VAR_5 = ((void*)0);

    if (!VAR_6)
        return VAR_0;

    VAR_6->IEnumMoniker_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;
    VAR_6->ppMoniker = FUNC_0(VAR_4 * sizeof(IMoniker*));
    FUNC_2(VAR_6->ppMoniker, VAR_3, VAR_4*sizeof(IMoniker*));
    VAR_6->nMonikerCount = VAR_4;
    VAR_6->index = 0;

    *VAR_5 = &VAR_6->IEnumMoniker_iface;

    return VAR_2;
}
