
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_4__ {int * pDoclist; } ;
struct TYPE_5__ {TYPE_1__ result; int pStmt; } ;
typedef TYPE_2__ fulltext_cursor ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_1){
  fulltext_cursor *VAR_2 = (fulltext_cursor *) VAR_1;
  FUNC_2(VAR_2->pStmt);
  if( VAR_2->result.pDoclist!=((void*)0) ){
    FUNC_0(VAR_2->result.pDoclist);
  }
  FUNC_1(VAR_2);
  return VAR_0;
}
