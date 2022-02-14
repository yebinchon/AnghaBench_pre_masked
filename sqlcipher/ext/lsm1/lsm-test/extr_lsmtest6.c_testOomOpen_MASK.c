
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int OomTest ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(
  OomTest *VAR_1,
  const char *VAR_2,
  lsm_db **VAR_3,
  int *VAR_4
){
  if( *VAR_4==VAR_0 ){
    int VAR_5;
    VAR_5 = FUNC_0(FUNC_2(), VAR_3);
    if( VAR_5==VAR_0 ) VAR_5 = FUNC_1(*VAR_3, VAR_2);
    FUNC_3(VAR_1, VAR_5);
    *VAR_4 = VAR_5;
  }
}
