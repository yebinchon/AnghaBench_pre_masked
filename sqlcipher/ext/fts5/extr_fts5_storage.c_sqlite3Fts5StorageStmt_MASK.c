
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {int ** aStmt; } ;
typedef TYPE_1__ Fts5Storage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int **,char**) ;

int FUNC_2(
  Fts5Storage *VAR_4,
  int VAR_5,
  sqlite3_stmt **VAR_6,
  char **VAR_7
){
  int VAR_8;
  FUNC_0( VAR_5==VAR_1
       || VAR_5==VAR_2
       || VAR_5==VAR_0
  );
  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
  if( VAR_8==VAR_3 ){
    FUNC_0( VAR_4->aStmt[VAR_5]==*VAR_6 );
    VAR_4->aStmt[VAR_5] = 0;
  }
  return VAR_8;
}
