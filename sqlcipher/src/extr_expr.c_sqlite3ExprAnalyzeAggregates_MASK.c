
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* pNC; } ;
struct TYPE_7__ {scalar_t__ pParse; TYPE_1__ u; scalar_t__ walkerDepth; int xSelectCallback2; int xSelectCallback; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
struct TYPE_8__ {scalar_t__ pSrcList; } ;
typedef TYPE_3__ NameContext ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *) ;

void FUNC_2(NameContext *VAR_3, Expr *VAR_4){
  Walker VAR_5;
  VAR_5.xExprCallback = VAR_0;
  VAR_5.xSelectCallback = VAR_1;
  VAR_5.xSelectCallback2 = VAR_2;
  VAR_5.walkerDepth = 0;
  VAR_5.u.pNC = VAR_3;
  VAR_5.pParse = 0;
  FUNC_0( VAR_3->pSrcList!=0 );
  FUNC_1(&VAR_5, VAR_4);
}
