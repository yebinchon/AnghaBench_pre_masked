
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {int pStmt; } ;
typedef TYPE_1__ UnionCsr ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab_cursor *VAR_1,
  sqlite3_context *VAR_2,
  int VAR_3
){
  UnionCsr *VAR_4 = (UnionCsr*)VAR_1;
  FUNC_1(VAR_2, FUNC_0(VAR_4->pStmt, VAR_3+1));
  return VAR_0;
}
