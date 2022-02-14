
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int ,int ,char**) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(sqlite3 *VAR_3, const char *VAR_4){
  char *VAR_5 = 0;
  int VAR_6;
  VAR_1 = 0;
  VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_0, 0, &VAR_5);
  if( VAR_5 ){
    FUNC_1(VAR_2, "SQL error: %s\n", VAR_5);
    FUNC_0(1);
  }
  if( VAR_6 ){
    FUNC_1(VAR_2, "SQL error: %s\n", FUNC_2(VAR_3));
    FUNC_0(1);
  }
}
