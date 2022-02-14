
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ op; } ;
typedef int NameContext ;
typedef TYPE_1__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(NameContext *VAR_3, Expr *VAR_4)
{
  int VAR_5 = VAR_0;
  if( VAR_4 ){
    if( VAR_4->op!=VAR_1 ){
      VAR_5 = FUNC_0(VAR_3, VAR_4);
    }else{
      VAR_4->op = VAR_2;
    }
  }
  return VAR_5;
}
