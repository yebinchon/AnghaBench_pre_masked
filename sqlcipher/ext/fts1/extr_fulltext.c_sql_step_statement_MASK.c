
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {int ** pFulltextStatements; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef size_t fulltext_statement ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(fulltext_vtab *VAR_7, fulltext_statement VAR_8,
                              sqlite3_stmt **VAR_9){
  int VAR_10;
  sqlite3_stmt *VAR_11 = *VAR_9;
  FUNC_0( VAR_8<VAR_0 );
  FUNC_0( VAR_11==VAR_7->pFulltextStatements[VAR_8] );

  while( (VAR_10=FUNC_4(VAR_11))!=VAR_2 && VAR_10!=VAR_5 ){
    sqlite3_stmt *VAR_12;

    if( VAR_10==VAR_1 ) continue;
    if( VAR_10!=VAR_3 ) return VAR_10;

    VAR_10 = FUNC_3(VAR_11);
    if( VAR_10!=VAR_6 ) return VAR_3;

    VAR_7->pFulltextStatements[VAR_8] = ((void*)0);
    VAR_10 = FUNC_1(VAR_7, VAR_8, &VAR_12);
    if( VAR_10!=VAR_4 ) goto err;
    *VAR_9 = VAR_12;

    VAR_10 = FUNC_5(VAR_11, VAR_12);
    if( VAR_10!=VAR_4 ) goto err;

    VAR_10 = FUNC_2(VAR_11);
    if( VAR_10!=VAR_4 ) return VAR_10;
    VAR_11 = VAR_12;
  }
  return VAR_10;

 err:
  FUNC_2(VAR_11);
  return VAR_10;
}
