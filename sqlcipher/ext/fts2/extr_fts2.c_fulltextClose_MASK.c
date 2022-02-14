
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_5__ {scalar_t__ nData; } ;
struct TYPE_4__ {TYPE_3__ result; int reader; int snippet; int q; int pStmt; } ;
typedef TYPE_1__ fulltext_cursor ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(sqlite3_vtab_cursor *VAR_1){
  fulltext_cursor *VAR_2 = (fulltext_cursor *) VAR_1;
  FUNC_0(("FTS2 Close %p\n", VAR_2));
  FUNC_5(VAR_2->pStmt);
  FUNC_3(&VAR_2->q);
  FUNC_4(&VAR_2->snippet);
  if( VAR_2->result.nData!=0 ) FUNC_2(&VAR_2->reader);
  FUNC_1(&VAR_2->result);
  FUNC_6(VAR_2);
  return VAR_0;
}
