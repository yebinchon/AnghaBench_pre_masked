
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3rbu ;


 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int * FUNC_1 (int ,char const*,char const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (char const*) ;

sqlite3rbu *FUNC_4(
  const char *VAR_0,
  const char *VAR_1
){
  if( VAR_0==0 ){ return FUNC_2(); }
  if( VAR_1 ){
    int VAR_2 = FUNC_3(VAR_1);
    if( VAR_2>=7 && 0==FUNC_0("-vactmp", &VAR_1[VAR_2-7], 7) ){
      return FUNC_2();
    }
  }

  return FUNC_1(0, VAR_0, VAR_1);
}
