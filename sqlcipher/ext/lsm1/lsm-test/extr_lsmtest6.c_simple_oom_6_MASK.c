
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int OomTest ;
typedef int Datasource ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int,int*) ;
 int FUNC_4 (int *,int ,int **,int*) ;
 int FUNC_5 (int *,int *,int *,int,int*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(OomTest *VAR_2){
  Datasource *VAR_3 = FUNC_0();
  int VAR_4 = VAR_1;
  lsm_db *VAR_5;

  FUNC_6(VAR_0, "log");
  FUNC_4(VAR_2, VAR_0, &VAR_5, &VAR_4);

  FUNC_5(VAR_2, VAR_5, VAR_3, 5000, &VAR_4);
  FUNC_5(VAR_2, VAR_5, VAR_3, 5001, &VAR_4);
  FUNC_5(VAR_2, VAR_5, VAR_3, 5002, &VAR_4);
  FUNC_3(VAR_2, VAR_5, VAR_3, 5001, &VAR_4);
  FUNC_3(VAR_2, VAR_5, VAR_3, 1234, &VAR_4);

  FUNC_1(VAR_5);
  FUNC_2(VAR_3);
}
