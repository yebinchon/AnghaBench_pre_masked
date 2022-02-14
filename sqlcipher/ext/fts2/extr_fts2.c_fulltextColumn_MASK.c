
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_6__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_7__ {int pStmt; } ;
typedef TYPE_2__ fulltext_cursor ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *,TYPE_2__**,int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab_cursor *VAR_2,
                          sqlite3_context *VAR_3, int VAR_4){
  fulltext_cursor *VAR_5 = (fulltext_cursor *) VAR_2;
  fulltext_vtab *VAR_6 = FUNC_0(VAR_5);

  if( VAR_4<VAR_6->nColumn ){
    sqlite3_value *VAR_7 = FUNC_1(VAR_5->pStmt, VAR_4+1);
    FUNC_3(VAR_3, VAR_7);
  }else if( VAR_4==VAR_6->nColumn ){



    FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5), VAR_1);
  }
  return VAR_0;
}
