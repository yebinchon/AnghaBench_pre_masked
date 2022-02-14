
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;
typedef int SetupStep ;
typedef int Datasource ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int const*,int*) ;

__attribute__((used)) static void FUNC_2(
  TestDb *VAR_0,
  Datasource *VAR_1,
  const SetupStep *VAR_2,
  int VAR_3
){
  int VAR_4;
  for(VAR_4=0; VAR_4<VAR_3; VAR_4++){
    int VAR_5 = 0;
    FUNC_1(VAR_0, VAR_1, &VAR_2[VAR_4], &VAR_5);
    FUNC_0( VAR_5==0 );
  }
}
