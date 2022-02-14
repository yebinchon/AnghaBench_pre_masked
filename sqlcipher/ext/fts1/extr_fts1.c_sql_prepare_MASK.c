
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int,int **,int *) ;
 char* FUNC_3 (char const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_4(sqlite3 *VAR_0, const char *VAR_1, const char *VAR_2,
                       sqlite3_stmt **VAR_3, const char *VAR_4){
  char *VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_2);
  int VAR_6;
  FUNC_0(("FTS1 prepare: %s\n", VAR_5));
  VAR_6 = FUNC_2(VAR_0, VAR_5, -1, VAR_3, ((void*)0));
  FUNC_1(VAR_5);
  return VAR_6;
}
