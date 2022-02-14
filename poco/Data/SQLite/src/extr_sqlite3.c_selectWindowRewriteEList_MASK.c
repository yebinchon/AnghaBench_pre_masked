
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pRewrite; } ;
struct TYPE_7__ {int * pSub; TYPE_1__ u; int xSelectCallback; int xExprCallback; int * pParse; int * pTab; int * pSrc; int * pWin; } ;
typedef TYPE_2__ WindowRewrite ;
typedef int Window ;
typedef TYPE_2__ Walker ;
typedef int Table ;
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
  Table *VAR_6,
  ExprList **VAR_7
){
  Walker VAR_8;
  WindowRewrite VAR_9;

  FUNC_0(&VAR_8, 0, sizeof(Walker));
  FUNC_0(&VAR_9, 0, sizeof(WindowRewrite));

  VAR_9.pSub = *VAR_7;
  VAR_9.pWin = VAR_3;
  VAR_9.pSrc = VAR_4;
  VAR_9.pTab = VAR_6;

  VAR_8.pParse = VAR_2;
  VAR_8.xExprCallback = VAR_0;
  VAR_8.xSelectCallback = VAR_1;
  VAR_8.u.pRewrite = &VAR_9;

  (void)FUNC_1(&VAR_8, VAR_5);

  *VAR_7 = VAR_9.pSub;
}
