
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IHTMLFiltersCollection_iface; int dispex; } ;
typedef int IUnknown ;
typedef TYPE_1__ IHTMLFiltersCollection ;
typedef TYPE_2__ HTMLFiltersCollection ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static IHTMLFiltersCollection *FUNC_2(void)
{
    HTMLFiltersCollection *VAR_2 = FUNC_0(sizeof(HTMLFiltersCollection));

    VAR_2->IHTMLFiltersCollection_iface.lpVtbl = &VAR_0;
    VAR_2->ref = 1;

    FUNC_1(&VAR_2->dispex, (IUnknown*)&VAR_2->IHTMLFiltersCollection_iface,
            &VAR_1);

    return &VAR_2->IHTMLFiltersCollection_iface;
}
