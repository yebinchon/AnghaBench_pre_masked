
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char const*,int,int **,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(sqlite3 *VAR_2, const char *VAR_3){
  sqlite3_stmt *VAR_4;
  if( !VAR_3 ){
    FUNC_1(VAR_1, "out of memory!\n");
    FUNC_0(1);
  }
  FUNC_2("%s;\n", VAR_3);
  if( VAR_0!=FUNC_4(VAR_2, VAR_3, -1, &VAR_4, 0) ){
    FUNC_1(VAR_1, "Error: %s\n", FUNC_3(VAR_2));
    FUNC_0(1);
  }
  FUNC_5(VAR_4);
  FUNC_6(VAR_4);
}
