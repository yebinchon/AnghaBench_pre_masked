
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;
typedef int Datasource ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int*) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (char*,char*,int,int **) ;
 int FUNC_3 (int *,int,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int const,int ,int*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int *,int ,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int const,int const,int*) ;

__attribute__((used)) static void FUNC_11(int *VAR_1){
  const int VAR_2 = 2000;
  const int VAR_3 = 10;
  const int VAR_4 = 20000;
  int VAR_5 = 0;
  TestDb *VAR_6 = 0;
  Datasource *VAR_7 = 0;

  VAR_5 = FUNC_2("autowork=0", "testdb.lsm", 1, &VAR_6);
  if( VAR_5==0 ){
    int VAR_8 = 0;
    char VAR_9[VAR_0];
    int VAR_10;
    FUNC_1(VAR_6, &VAR_7);
    FUNC_6(VAR_6, VAR_9);
    FUNC_3(VAR_6, 2, &VAR_5);
    for(VAR_10=0; VAR_5==0 && VAR_10<VAR_2; VAR_10+=VAR_3){
      FUNC_5(VAR_10, VAR_2, FUNC_4(), &VAR_8);
      FUNC_10(VAR_6, VAR_7, VAR_4+VAR_10, VAR_3, &VAR_5);
      FUNC_0("testdb.lsm", VAR_9, &VAR_5);
    }
  }
  FUNC_8(VAR_6, 0, &VAR_5);
  FUNC_7(&VAR_6);
  FUNC_9(VAR_7);
  *VAR_1 = VAR_5;
}
