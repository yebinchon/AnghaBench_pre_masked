
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IEnumWorkItems_iface; } ;
typedef TYPE_1__ IEnumWorkItems ;
typedef int HRESULT ;
typedef TYPE_2__ EnumWorkItemsImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(IEnumWorkItems **VAR_4)
{
    EnumWorkItemsImpl *VAR_5;

    *VAR_4 = ((void*)0);

    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_5));
    if (!VAR_5)
        return VAR_0;

    VAR_5->IEnumWorkItems_iface.lpVtbl = &VAR_1;
    VAR_5->ref = 1;

    *VAR_4 = &VAR_5->IEnumWorkItems_iface;
    FUNC_2(&VAR_3);
    return VAR_2;
}
