
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {int mutex; scalar_t__ pVdbe; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_5__ {scalar_t__ pNext; } ;
typedef TYPE_2__ Vdbe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

sqlite3_stmt *FUNC_2(sqlite3 *VAR_0, sqlite3_stmt *VAR_1){
  sqlite3_stmt *VAR_2;
  FUNC_0(VAR_0->mutex);
  if( VAR_1==0 ){
    VAR_2 = (sqlite3_stmt*)VAR_0->pVdbe;
  }else{
    VAR_2 = (sqlite3_stmt*)((Vdbe*)VAR_1)->pNext;
  }
  FUNC_1(VAR_0->mutex);
  return VAR_2;
}
