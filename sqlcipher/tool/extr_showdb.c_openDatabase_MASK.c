
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char const*,char const*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char const*,int **,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static sqlite3 *FUNC_5(const char *VAR_4, const char *VAR_5){
  sqlite3 *VAR_6 = 0;
  int VAR_7 = VAR_1 | VAR_2;
  int VAR_8 = FUNC_4(VAR_5, &VAR_6, VAR_7, 0);
  if( VAR_8!=VAR_0 ){
    const char *VAR_9 = FUNC_3(VAR_6);
    FUNC_1(VAR_3, "%s: can't open %s (%s)\n", VAR_4, VAR_5, VAR_9);
    FUNC_2(VAR_6);
    FUNC_0(1);
  }
  return VAR_6;
}
