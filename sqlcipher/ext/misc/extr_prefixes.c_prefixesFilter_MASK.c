
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_2__ {int nStr; scalar_t__ iRowid; scalar_t__ zStr; } ;
typedef TYPE_1__ prefixes_cursor ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  prefixes_cursor *VAR_6 = (prefixes_cursor *)VAR_1;
  FUNC_0(VAR_6->zStr);
  if( VAR_4>0 ){
    VAR_6->zStr = FUNC_1("%s", FUNC_2(VAR_5[0]));
    VAR_6->nStr = VAR_6->zStr ? (int)FUNC_3(VAR_6->zStr) : 0;
  }else{
    VAR_6->zStr = 0;
    VAR_6->nStr = 0;
  }
  VAR_6->iRowid = 0;
  return VAR_0;
}
