
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char const*,int **) ;
 int VAR_0 ;

__attribute__((used)) static sqlite3 *FUNC_5(const char *VAR_1){
  int VAR_2;
  sqlite3 *VAR_3;
  VAR_2 = FUNC_4(VAR_1, &VAR_3);
  if( VAR_2 ){
    FUNC_1(VAR_0, "Cannot open \"%s\": %s\n",
            VAR_1, FUNC_3(VAR_3));
    FUNC_2(VAR_3);
    FUNC_0(1);
  }
  return VAR_3;
}
