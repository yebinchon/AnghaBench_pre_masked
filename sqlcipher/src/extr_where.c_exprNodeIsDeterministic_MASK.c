
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eCode; } ;
typedef TYPE_1__ Walker ;
struct TYPE_7__ {scalar_t__ op; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(Walker *VAR_4, Expr *VAR_5){
  if( VAR_5->op==VAR_1 && FUNC_0(VAR_5, VAR_0)==0 ){
    VAR_4->eCode = 0;
    return VAR_2;
  }
  return VAR_3;
}
