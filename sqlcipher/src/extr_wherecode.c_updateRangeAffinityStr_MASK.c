
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Expr ;


 char VAR_0 ;
 char FUNC_0 (int *,char) ;
 scalar_t__ FUNC_1 (int *,char) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(
  Expr *VAR_1,
  int VAR_2,
  char *VAR_3
){
  int VAR_4;
  for(VAR_4=0; VAR_4<VAR_2; VAR_4++){
    Expr *VAR_5 = FUNC_2(VAR_1, VAR_4);
    if( FUNC_0(VAR_5, VAR_3[VAR_4])==VAR_0
     || FUNC_1(VAR_5, VAR_3[VAR_4])
    ){
      VAR_3[VAR_4] = VAR_0;
    }
  }
}
