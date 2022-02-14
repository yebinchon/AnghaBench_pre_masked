
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_stmt ;
typedef int sqlite3_context ;
typedef int echo_vtab ;
struct TYPE_5__ {int * pStmt; } ;
typedef TYPE_2__ echo_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab_cursor *VAR_2, sqlite3_context *VAR_3, int VAR_4){
  int VAR_5 = VAR_4 + 1;
  sqlite3_stmt *VAR_6 = ((echo_cursor *)VAR_2)->pStmt;

  if( FUNC_1((echo_vtab *)(VAR_2->pVtab), "xColumn") ){
    return VAR_0;
  }

  if( !VAR_6 ){
    FUNC_4(VAR_3);
  }else{
    FUNC_0( FUNC_3(VAR_6)>VAR_5 );
    FUNC_5(VAR_3, FUNC_2(VAR_6, VAR_5));
  }
  return VAR_1;
}
