
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {scalar_t__ pPragma; int iRowid; } ;
typedef TYPE_1__ PragmaVtabCursor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab_cursor *VAR_2){
  PragmaVtabCursor *VAR_3 = (PragmaVtabCursor*)VAR_2;
  int VAR_4 = VAR_0;


  VAR_3->iRowid++;
  FUNC_0( VAR_3->pPragma );
  if( VAR_1!=FUNC_3(VAR_3->pPragma) ){
    VAR_4 = FUNC_2(VAR_3->pPragma);
    VAR_3->pPragma = 0;
    FUNC_1(VAR_3);
  }
  return VAR_4;
}
