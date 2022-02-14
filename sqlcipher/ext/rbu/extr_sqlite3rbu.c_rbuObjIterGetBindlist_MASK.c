
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3rbu ;
typedef int sqlite3_int64 ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static char *FUNC_1(sqlite3rbu *VAR_0, int VAR_1){
  char *VAR_2 = 0;
  sqlite3_int64 VAR_3 = 2*(sqlite3_int64)VAR_1 + 1;

  VAR_2 = (char*)FUNC_0(VAR_0, VAR_3);
  if( VAR_2 ){
    int VAR_4;
    for(VAR_4=0; VAR_4<VAR_1; VAR_4++){
      VAR_2[VAR_4*2] = '?';
      VAR_2[VAR_4*2+1] = (VAR_4+1==VAR_1) ? '\0' : ',';
    }
  }
  return VAR_2;
}
