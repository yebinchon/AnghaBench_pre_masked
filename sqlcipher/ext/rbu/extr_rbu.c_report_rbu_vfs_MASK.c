
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3rbu ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,char*,int ,char**) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int ) ;
 int VAR_1 ;

void FUNC_4(sqlite3rbu *VAR_2){
  sqlite3 *VAR_3 = FUNC_3(VAR_2, 0);
  if( VAR_3 ){
    char *VAR_4 = 0;
    FUNC_1(VAR_3, "main", VAR_0, &VAR_4);
    if( VAR_4 ){
      FUNC_0(VAR_1, "using vfs \"%s\"\n", VAR_4);
    }else{
      FUNC_0(VAR_1, "vfs name not available\n");
    }
    FUNC_2(VAR_4);
  }
}
