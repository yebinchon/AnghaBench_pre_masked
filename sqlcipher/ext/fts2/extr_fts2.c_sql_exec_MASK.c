
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int *,int ,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_4(sqlite3 *VAR_0, const char *VAR_1, const char *VAR_2,
                    const char *VAR_3){
  char *VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_2);
  int VAR_5;
  FUNC_0(("FTS2 sql: %s\n", VAR_4));
  VAR_5 = FUNC_1(VAR_0, VAR_4, ((void*)0), 0, ((void*)0));
  FUNC_2(VAR_4);
  return VAR_5;
}
