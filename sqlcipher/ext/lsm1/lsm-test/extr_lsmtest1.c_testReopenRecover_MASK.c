
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;


 char* FUNC_0 (char const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int ,int **) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (char const*,char const*) ;

void FUNC_5(TestDb **VAR_0, int *VAR_1){
  if( *VAR_1==0 ){
    const char *VAR_2 = FUNC_1(*VAR_0);
    const char *VAR_3 = FUNC_0(VAR_2);
    FUNC_4(VAR_3, "bak.db");
    FUNC_3(VAR_0);
    FUNC_4("bak.db", VAR_3);
    *VAR_1 = FUNC_2(VAR_2, 0, 0, VAR_0);
  }
}
