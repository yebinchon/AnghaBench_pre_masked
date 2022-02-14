
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {TYPE_2__* pDlgInfo; int hDependsImageList; } ;
struct TYPE_8__ {TYPE_1__* pService; } ;
struct TYPE_7__ {int lpServiceName; } ;
typedef TYPE_3__* PDEPENDDATA ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static VOID
FUNC_4(PDEPENDDATA VAR_4)
{

    VAR_4->hDependsImageList = FUNC_1(VAR_1,
                                                   VAR_0,
                                                   FUNC_0(VAR_3),
                                                   FUNC_0(VAR_3),
                                                   VAR_2);


    FUNC_2(VAR_4, VAR_4->pDlgInfo->pService->lpServiceName);


    FUNC_3(VAR_4, VAR_4->pDlgInfo->pService->lpServiceName);
}
