
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {int ** pFulltextStatements; int zName; int zDb; int db; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef size_t fulltext_statement ;




 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*) ;
 char const** VAR_2 ;
 int FUNC_4 (int ,int ,int ,int **,char const*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(fulltext_vtab *VAR_3, fulltext_statement VAR_4,
                             sqlite3_stmt **VAR_5){
  FUNC_0( VAR_4<VAR_0 );
  if( VAR_3->pFulltextStatements[VAR_4]==((void*)0) ){
    const char *VAR_6;
    int VAR_7;
    switch( VAR_4 ){
      case 129:
        VAR_6 = FUNC_1(VAR_3); break;
      case 128:
        VAR_6 = FUNC_2(VAR_3); break;
      default:
        VAR_6 = VAR_2[VAR_4];
    }
    VAR_7 = FUNC_4(VAR_3->db, VAR_3->zDb, VAR_3->zName, &VAR_3->pFulltextStatements[VAR_4],
                         VAR_6);
    if( VAR_6 != VAR_2[VAR_4]) FUNC_3((void *) VAR_6);
    if( VAR_7!=VAR_1 ) return VAR_7;
  } else {
    int VAR_8 = FUNC_5(VAR_3->pFulltextStatements[VAR_4]);
    if( VAR_8!=VAR_1 ) return VAR_8;
  }

  *VAR_5 = VAR_3->pFulltextStatements[VAR_4];
  return VAR_1;
}
