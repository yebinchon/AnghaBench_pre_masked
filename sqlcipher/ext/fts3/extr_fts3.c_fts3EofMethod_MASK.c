
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {int isEof; } ;
typedef TYPE_1__ Fts3Cursor ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_0){
  Fts3Cursor *VAR_1 = (Fts3Cursor*)VAR_0;
  if( VAR_1->isEof ){
    FUNC_0(VAR_1);
    VAR_1->isEof = 1;
  }
  return VAR_1->isEof;
}
