
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int ** pFulltextStatements; int zName; int db; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef size_t fulltext_statement ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ,int **,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_3, fulltext_statement VAR_4,
                             sqlite3_stmt **VAR_5){
  FUNC_0( VAR_4<VAR_0 );
  if( VAR_3->pFulltextStatements[VAR_4]==((void*)0) ){
    int VAR_6 = FUNC_1(VAR_3->db, VAR_3->zName, &VAR_3->pFulltextStatements[VAR_4],
                         VAR_2[VAR_4]);
    if( VAR_6!=VAR_1 ) return VAR_6;
  } else {
    int VAR_7 = FUNC_2(VAR_3->pFulltextStatements[VAR_4]);
    if( VAR_7!=VAR_1 ) return VAR_7;
  }

  *VAR_5 = VAR_3->pFulltextStatements[VAR_4];
  return VAR_1;
}
