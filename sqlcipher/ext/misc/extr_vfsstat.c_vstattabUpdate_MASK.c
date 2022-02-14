
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab *VAR_6,
  int VAR_7, sqlite3_value **VAR_8,
  sqlite3_int64 *VAR_9
){
  sqlite3_int64 VAR_10, VAR_11;
  if( VAR_7==1 ) return VAR_0;
  if( FUNC_1(VAR_8[0])!=VAR_1 ) return VAR_0;
  VAR_10 = FUNC_0(VAR_8[0]);
  if( VAR_10!=FUNC_0(VAR_8[1]) ) return VAR_0;
  if( VAR_10<0 || VAR_10>=VAR_3 ) return VAR_0;
  if( FUNC_1(VAR_8[VAR_4+2])!=VAR_1 ){
    return VAR_0;
  }
  VAR_11 = FUNC_0(VAR_8[VAR_4+2]);
  if( VAR_11<0 ) return VAR_0;
  VAR_5[VAR_10] = VAR_11;
  return VAR_2;
}
