
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ op; } ;
typedef int Parse ;
typedef TYPE_1__ Expr ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(Parse *VAR_1, Expr *VAR_2, int *VAR_3){
  int VAR_4;
  VAR_2 = FUNC_4(VAR_2);
  if( FUNC_0(VAR_1)
   && VAR_2->op!=VAR_0
   && FUNC_3(VAR_2)
  ){
    *VAR_3 = 0;
    VAR_4 = FUNC_1(VAR_1, VAR_2, -1);
  }else{
    int VAR_5 = FUNC_5(VAR_1);
    VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_5);
    if( VAR_4==VAR_5 ){
      *VAR_3 = VAR_5;
    }else{
      FUNC_6(VAR_1, VAR_5);
      *VAR_3 = 0;
    }
  }
  return VAR_4;
}
