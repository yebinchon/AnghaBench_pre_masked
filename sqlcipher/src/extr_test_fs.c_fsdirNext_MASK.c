
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {scalar_t__ pEntry; int iRowid; scalar_t__ pDir; } ;
typedef TYPE_1__ FsdirCsr ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  FsdirCsr *VAR_2 = (FsdirCsr*)VAR_1;

  if( VAR_2->pDir ){
    VAR_2->pEntry = FUNC_1(VAR_2->pDir);
    if( VAR_2->pEntry==0 ){
      FUNC_0(VAR_2->pDir);
      VAR_2->pDir = 0;
    }
    VAR_2->iRowid++;
  }

  return VAR_0;
}
