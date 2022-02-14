
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,int,int ,int **,void const**) ;

int FUNC_2(
  sqlite3 *VAR_1,
  const void *VAR_2,
  int VAR_3,
  sqlite3_stmt **VAR_4,
  const void **VAR_5
){
  int VAR_6;
  VAR_6 = FUNC_1(VAR_1,VAR_2,VAR_3,0,VAR_4,VAR_5);
  FUNC_0( VAR_6==VAR_0 || VAR_4==0 || *VAR_4==0 );
  return VAR_6;
}
