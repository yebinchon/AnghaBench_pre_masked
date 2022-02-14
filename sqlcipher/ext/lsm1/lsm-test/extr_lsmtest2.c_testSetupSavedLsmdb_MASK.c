
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;
typedef int Datasource ;


 int FUNC_0 (char const*,char const*,int,int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int *,int ,int,int*) ;

void FUNC_4(
  const char *VAR_0,
  const char *VAR_1,
  Datasource *VAR_2,
  int VAR_3,
  int *VAR_4
){
  if( *VAR_4==0 ){
    int VAR_5;
    TestDb *VAR_6;
    VAR_5 = FUNC_0(VAR_0, VAR_1, 1, &VAR_6);
    if( VAR_5==0 ){
      FUNC_3(VAR_6, VAR_2, 0, VAR_3, &VAR_5);
      FUNC_1(&VAR_6);
      if( VAR_5==0 ) FUNC_2(VAR_1, "log");
    }
    *VAR_4 = VAR_5;
  }
}
