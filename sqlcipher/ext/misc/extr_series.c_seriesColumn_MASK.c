
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_2__ {int iValue; int iStep; int mxValue; int mnValue; } ;
typedef TYPE_1__ series_cursor ;





 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_1,
  sqlite3_context *VAR_2,
  int VAR_3
){
  series_cursor *VAR_4 = (series_cursor*)VAR_1;
  sqlite3_int64 VAR_5 = 0;
  switch( VAR_3 ){
    case 130: VAR_5 = VAR_4->mnValue; break;
    case 128: VAR_5 = VAR_4->mxValue; break;
    case 129: VAR_5 = VAR_4->iStep; break;
    default: VAR_5 = VAR_4->iValue; break;
  }
  FUNC_0(VAR_2, VAR_5);
  return VAR_0;
}
