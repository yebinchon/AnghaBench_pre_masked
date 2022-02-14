
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int,int **,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(sqlite3 *VAR_3, const char *VAR_4){
  sqlite3_stmt *VAR_5;
  int VAR_6;

  FUNC_3("%s;\n", VAR_4);
  VAR_6 = FUNC_6(VAR_3, VAR_4, -1, &VAR_5, 0);
  if( VAR_6!=VAR_0 ){
    FUNC_2(VAR_2, "Error: %s\n", FUNC_5(VAR_3));
    FUNC_1(1);
  }
  while( VAR_1==FUNC_7(VAR_5) ){
    FUNC_0(VAR_3, (char*)FUNC_4(VAR_5, 0));
  }
  FUNC_8(VAR_5);
}
