
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Expr ;




 char FUNC_0 (int *) ;
 int FUNC_1 (char) ;

int FUNC_2(Expr *VAR_0, char VAR_1){
  char VAR_2 = FUNC_0(VAR_0);
  switch( VAR_2 ){
    case 129:
      return 1;
    case 128:
      return VAR_1==128;
    default:
      return FUNC_1(VAR_1);
  }
}
