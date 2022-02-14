
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {int nStr; int zStr; scalar_t__ iRowid; } ;
typedef TYPE_1__ prefixes_cursor ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_1,
  sqlite3_context *VAR_2,
  int VAR_3
){
  prefixes_cursor *VAR_4 = (prefixes_cursor*)VAR_1;
  switch( VAR_3 ){
    case 0:
      FUNC_0(VAR_2, VAR_4->zStr, VAR_4->nStr - (int)VAR_4->iRowid,
                          0);
      break;
    default:
      FUNC_0(VAR_2, VAR_4->zStr, VAR_4->nStr, 0);
      break;
  }
  return VAR_0;
}
