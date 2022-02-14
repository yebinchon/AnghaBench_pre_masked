
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_api_routines ;
typedef int sqlite3 ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int,int ,int ,int ,int ,int ) ;

int FUNC_2(
  sqlite3 *VAR_4,
  char **VAR_5,
  const sqlite3_api_routines *VAR_6
){
  int VAR_7 = VAR_0;
  FUNC_0(VAR_6);
  (void)VAR_5;
  VAR_7 = FUNC_1(VAR_4, "sqlar_compress", 1, VAR_1, 0,
                               VAR_2, 0, 0);
  if( VAR_7==VAR_0 ){
    VAR_7 = FUNC_1(VAR_4, "sqlar_uncompress", 2, VAR_1, 0,
                                 VAR_3, 0, 0);
  }
  return VAR_7;
}
