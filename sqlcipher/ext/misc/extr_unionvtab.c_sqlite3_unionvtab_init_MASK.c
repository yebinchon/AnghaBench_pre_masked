
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_api_routines ;
typedef int sqlite3 ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(
  sqlite3 *VAR_1,
  char **VAR_2,
  const sqlite3_api_routines *VAR_3
){
  int VAR_4 = VAR_0;
  FUNC_0(VAR_3);
  (void)VAR_2;

  VAR_4 = FUNC_1(VAR_1);

  return VAR_4;
}
