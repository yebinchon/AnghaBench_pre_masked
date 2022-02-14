
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int OomTest ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(OomTest *VAR_1){
  int VAR_2;
  lsm_db *VAR_3;

  VAR_2 = FUNC_1(FUNC_3(), &VAR_3);
  if( VAR_2==VAR_0 ){
    VAR_2 = FUNC_2(VAR_3, "testdb.lsm");
  }
  FUNC_4(VAR_1, VAR_2);

  FUNC_0(VAR_3);
}
