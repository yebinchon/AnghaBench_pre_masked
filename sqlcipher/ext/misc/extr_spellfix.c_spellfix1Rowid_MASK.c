
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_4__ {size_t iRow; TYPE_1__* a; scalar_t__ pFullScan; } ;
typedef TYPE_2__ spellfix1_cursor ;
struct TYPE_3__ {int iRowid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_1, sqlite_int64 *VAR_2){
  spellfix1_cursor *VAR_3 = (spellfix1_cursor*)VAR_1;
  if( VAR_3->pFullScan ){
    *VAR_2 = FUNC_0(VAR_3->pFullScan, 4);
  }else{
    *VAR_2 = VAR_3->a[VAR_3->iRow].iRowid;
  }
  return VAR_0;
}
