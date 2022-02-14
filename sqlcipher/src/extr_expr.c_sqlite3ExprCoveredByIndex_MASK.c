
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int w ;
struct IdxCover {int iCur; int * pIdx; } ;
struct TYPE_5__ {struct IdxCover* pIdxCover; } ;
struct TYPE_6__ {int eCode; TYPE_1__ u; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Index ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;

int FUNC_2(
  Expr *VAR_1,
  int VAR_2,
  Index *VAR_3
){
  Walker VAR_4;
  struct IdxCover VAR_5;
  FUNC_0(&VAR_4, 0, sizeof(VAR_4));
  VAR_5.iCur = VAR_2;
  VAR_5.pIdx = VAR_3;
  VAR_4.xExprCallback = VAR_0;
  VAR_4.u.pIdxCover = &VAR_5;
  FUNC_1(&VAR_4, VAR_1);
  return !VAR_4.eCode;
}
