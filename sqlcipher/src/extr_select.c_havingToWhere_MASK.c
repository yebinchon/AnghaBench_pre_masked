
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sWalker ;
struct TYPE_9__ {TYPE_3__* pSelect; } ;
struct TYPE_10__ {scalar_t__ eCode; TYPE_1__ u; int xExprCallback; int * pParse; } ;
typedef TYPE_2__ Walker ;
struct TYPE_11__ {int pHaving; } ;
typedef TYPE_3__ Select ;
typedef int Parse ;


 int FUNC_0 (int,int *,TYPE_3__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(Parse *VAR_2, Select *VAR_3){
  Walker VAR_4;
  FUNC_1(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.pParse = VAR_2;
  VAR_4.xExprCallback = VAR_0;
  VAR_4.u.pSelect = VAR_3;
  FUNC_3(&VAR_4, VAR_3->pHaving);






}
