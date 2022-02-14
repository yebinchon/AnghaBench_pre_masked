
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {scalar_t__ pStmt; int fd; } ;
typedef TYPE_1__ FstreeCsr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab_cursor *VAR_3){
  FstreeCsr *VAR_4 = (FstreeCsr*)VAR_3;
  int VAR_5;

  FUNC_0(VAR_4);
  VAR_5 = FUNC_4(VAR_4->pStmt);
  if( VAR_5!=VAR_2 ){
    VAR_5 = FUNC_3(VAR_4->pStmt);
    VAR_4->pStmt = 0;
  }else{
    VAR_5 = VAR_1;
    VAR_4->fd = FUNC_1((const char*)FUNC_2(VAR_4->pStmt, 0), VAR_0);
  }

  return VAR_5;
}
