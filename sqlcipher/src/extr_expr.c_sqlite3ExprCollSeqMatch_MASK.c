
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zName; } ;
typedef int Parse ;
typedef int Expr ;
typedef TYPE_1__ CollSeq ;


 TYPE_1__* FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(Parse *VAR_0, Expr *VAR_1, Expr *VAR_2){
  CollSeq *VAR_3 = FUNC_0(VAR_0, VAR_1);
  CollSeq *VAR_4 = FUNC_0(VAR_0, VAR_2);
  return FUNC_1(VAR_3->zName, VAR_4->zName)==0;
}
