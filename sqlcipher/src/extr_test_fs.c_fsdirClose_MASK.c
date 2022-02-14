
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {struct TYPE_3__* zDir; scalar_t__ pDir; } ;
typedef TYPE_1__ FsdirCsr ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  FsdirCsr *VAR_2 = (FsdirCsr*)VAR_1;
  if( VAR_2->pDir ) FUNC_0(VAR_2->pDir);
  FUNC_1(VAR_2->zDir);
  FUNC_1(VAR_2);
  return VAR_0;
}
