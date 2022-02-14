
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,char const*,int ,int ,char**) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(sqlite3 *VAR_1, const char *VAR_2){
  int VAR_3;
  char *VAR_4 = 0;
  VAR_3 = FUNC_2(VAR_1, VAR_2, 0, 0, &VAR_4);
  if( VAR_3 || VAR_4 ){
    FUNC_1(VAR_0, "SQL failed: rc=%d zErr=[%s]\n", VAR_3, VAR_4);
    FUNC_1(VAR_0, "SQL: [%s]\n", VAR_2);
    FUNC_0(1);
  }
}
