
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char const*,int ,int ,int **) ;
 int FUNC_2 (int **) ;

void FUNC_3(TestDb **VAR_0, int *VAR_1){
  if( *VAR_1==0 ){
    const char *VAR_2;
    VAR_2 = FUNC_0(*VAR_0);
    FUNC_2(VAR_0);
    *VAR_1 = FUNC_1(VAR_2, 0, 0, VAR_0);
  }
}
