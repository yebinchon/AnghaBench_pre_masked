
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;
typedef int Parse ;
typedef int Expr ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (int *,char*) ;

Expr *FUNC_3(Parse *VAR_0, Expr *VAR_1, const char *VAR_2){
  Token VAR_3;
  FUNC_0( VAR_2!=0 );
  FUNC_2(&VAR_3, (char*)VAR_2);
  return FUNC_1(VAR_0, VAR_1, &VAR_3, 0);
}
