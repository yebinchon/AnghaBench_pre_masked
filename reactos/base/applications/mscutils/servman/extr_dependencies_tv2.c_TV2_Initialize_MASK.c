
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * hDependsImageList; int hDependsTreeView2; int hDependsWnd; } ;
typedef TYPE_1__* PDEPENDDATA ;
typedef int LPWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int ) ;

BOOL
FUNC_4(PDEPENDDATA VAR_3,
               LPWSTR VAR_4)
{
    BOOL VAR_5 = VAR_0;


    VAR_3->hDependsTreeView2 = FUNC_0(VAR_3->hDependsWnd, VAR_1);
    if (!VAR_3->hDependsTreeView2)
    {
        FUNC_1(VAR_3->hDependsImageList);
        VAR_3->hDependsImageList = ((void*)0);
        return VAR_0;
    }
    (void)FUNC_3(VAR_3->hDependsTreeView2,
                                VAR_3->hDependsImageList,
                                VAR_2);


    FUNC_2(VAR_3, ((void*)0), VAR_4);

    return VAR_5;
}
