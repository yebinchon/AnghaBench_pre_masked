
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ op; TYPE_1__* pLeft; } ;
struct TYPE_4__ {scalar_t__ op; } ;
typedef TYPE_2__ Expr ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(Expr *VAR_3){
  if( VAR_3->op==VAR_2 ){
    VAR_3->op = VAR_1;
  }else if( VAR_3->op==VAR_0 && VAR_3->pLeft->op==VAR_2 ){
    VAR_3->pLeft->op = VAR_1;
  }
}
