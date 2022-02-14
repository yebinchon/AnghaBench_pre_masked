
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iValue; int mxValue; } ;
typedef TYPE_1__ wholenumber_cursor ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef void* sqlite3_int64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  wholenumber_cursor *VAR_6 = (wholenumber_cursor *)VAR_1;
  sqlite3_int64 VAR_7;
  int VAR_8 = 0;
  VAR_6->iValue = 1;
  VAR_6->mxValue = 0xffffffff;
  if( VAR_2 & 3 ){
    VAR_7 = FUNC_0(VAR_5[0]) + (VAR_2&1);
    if( VAR_7>VAR_6->iValue && VAR_7<=VAR_6->mxValue ) VAR_6->iValue = VAR_7;
    VAR_8++;
  }
  if( VAR_2 & 12 ){
    VAR_7 = FUNC_0(VAR_5[VAR_8]) - ((VAR_2>>2)&1);
    if( VAR_7>=VAR_6->iValue && VAR_7<VAR_6->mxValue ) VAR_6->mxValue = VAR_7;
  }
  return VAR_0;
}
