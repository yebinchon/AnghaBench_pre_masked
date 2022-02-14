
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {struct TYPE_3__* zAfterKey; struct TYPE_3__* zIdxName; int pStmt; } ;
typedef TYPE_1__ CidxCursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  CidxCursor *VAR_2 = (CidxCursor*)VAR_1;
  FUNC_0(VAR_2->pStmt);
  FUNC_1(VAR_2->zIdxName);
  FUNC_1(VAR_2->zAfterKey);
  FUNC_1(VAR_2);
  return VAR_0;
}
