
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static lsm_db *FUNC_4(
  const char *VAR_2,
  int VAR_3,
  int VAR_4,
  int *VAR_5
){
  lsm_db *VAR_6 = 0;
  if( *VAR_5==0 ){
    int VAR_7 = VAR_3;
    int VAR_8 = VAR_4;
    *VAR_5 = FUNC_1(FUNC_3(), &VAR_6);
    if( *VAR_5==0 ){
      if( VAR_7 ) FUNC_0(VAR_6, VAR_1, &VAR_7);
      if( VAR_8 ) FUNC_0(VAR_6, VAR_0, &VAR_8);
      *VAR_5 = FUNC_2(VAR_6, "testdb.lsm");
    }
  }
  return VAR_6;
}
