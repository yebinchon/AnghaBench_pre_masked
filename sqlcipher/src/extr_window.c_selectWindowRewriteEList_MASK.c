
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pRewrite; } ;
struct TYPE_7__ {int * pSub; TYPE_1__ u; int xSelectCallback; int xExprCallback; int * pParse; int * pSrc; int * pWin; } ;
typedef TYPE_2__ WindowRewrite ;
typedef int Window ;
typedef TYPE_2__ Walker ;
typedef int SrcList ;
typedef int Parse ;
typedef int ExprList ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(
  Parse *VAR_2,
  Window *VAR_3,
  SrcList *VAR_4,
  ExprList *VAR_5,
  ExprList **VAR_6
){
  Walker VAR_7;
  WindowRewrite VAR_8;

  FUNC_0(&VAR_7, 0, sizeof(Walker));
  FUNC_0(&VAR_8, 0, sizeof(WindowRewrite));

  VAR_8.pSub = *VAR_6;
  VAR_8.pWin = VAR_3;
  VAR_8.pSrc = VAR_4;

  VAR_7.pParse = VAR_2;
  VAR_7.xExprCallback = VAR_0;
  VAR_7.xSelectCallback = VAR_1;
  VAR_7.u.pRewrite = &VAR_8;

  (void)FUNC_1(&VAR_7, VAR_5);

  *VAR_6 = VAR_8.pSub;
}
