
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dbMain; int * dbRbu; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3 ;



sqlite3 *FUNC_0(sqlite3rbu *VAR_0, int VAR_1){
  sqlite3 *VAR_2 = 0;
  if( VAR_0 ){
    VAR_2 = (VAR_1 ? VAR_0->dbRbu : VAR_0->dbMain);
  }
  return VAR_2;
}
