
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iCur; } ;
struct TYPE_5__ {int eCode; TYPE_1__ u; int xSelectCallback2; int xSelectCallback; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(Expr *VAR_3, int VAR_4, int VAR_5){
  Walker VAR_6;
  VAR_6.eCode = VAR_4;
  VAR_6.xExprCallback = VAR_0;
  VAR_6.xSelectCallback = VAR_2;



  VAR_6.u.iCur = VAR_5;
  FUNC_0(&VAR_6, VAR_3);
  return VAR_6.eCode;
}
