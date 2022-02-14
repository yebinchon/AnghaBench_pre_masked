
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {scalar_t__* aStmt; } ;
typedef TYPE_1__ Fts5Storage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(
  Fts5Storage *VAR_3,
  int VAR_4,
  sqlite3_stmt *VAR_5
){
  FUNC_0( VAR_4==VAR_1
       || VAR_4==VAR_2
       || VAR_4==VAR_0
  );
  if( VAR_3->aStmt[VAR_4]==0 ){
    FUNC_2(VAR_5);
    VAR_3->aStmt[VAR_4] = VAR_5;
  }else{
    FUNC_1(VAR_5);
  }
}
