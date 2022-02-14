
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_blob ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {int pStmt; TYPE_1__* db; } ;
typedef TYPE_2__ Incrblob ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(sqlite3_blob *VAR_1){
  Incrblob *VAR_2 = (Incrblob *)VAR_1;
  int VAR_3;
  sqlite3 *VAR_4;

  if( VAR_2 ){
    VAR_4 = VAR_2->db;
    FUNC_2(VAR_4->mutex);
    VAR_3 = FUNC_1(VAR_2->pStmt);
    FUNC_0(VAR_4, VAR_2);
    FUNC_3(VAR_4->mutex);
  }else{
    VAR_3 = VAR_0;
  }
  return VAR_3;
}
