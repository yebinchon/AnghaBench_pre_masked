
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int echo_vtab ;
struct TYPE_5__ {scalar_t__ pStmt; } ;
typedef TYPE_2__ echo_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_3){
  int VAR_4 = VAR_1;
  echo_cursor *VAR_5 = (echo_cursor *)VAR_3;

  if( FUNC_0((echo_vtab *)(VAR_3->pVtab), "xNext") ){
    return VAR_0;
  }

  if( VAR_5->pStmt ){
    VAR_4 = FUNC_2(VAR_5->pStmt);
    if( VAR_4==VAR_2 ){
      VAR_4 = VAR_1;
    }else{
      VAR_4 = FUNC_1(VAR_5->pStmt);
      VAR_5->pStmt = 0;
    }
  }

  return VAR_4;
}
