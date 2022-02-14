
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {scalar_t__ iCursorType; int eof; int pStmt; int result; int snippet; } ;
typedef TYPE_1__ fulltext_cursor ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab_cursor *VAR_3){
  fulltext_cursor *VAR_4 = (fulltext_cursor *) VAR_3;
  sqlite_int64 VAR_5;
  int VAR_6;

  FUNC_0(("FTS1 Next %p\n", VAR_3));
  FUNC_2(&VAR_4->snippet);
  if( VAR_4->iCursorType < VAR_0 ){

    VAR_6 = FUNC_5(VAR_4->pStmt);
    switch( VAR_6 ){
      case 128:
        VAR_4->eof = 0;
        return VAR_2;
      case 129:
        VAR_4->eof = 1;
        return VAR_2;
      default:
        VAR_4->eof = 1;
        return VAR_6;
    }
  } else {
    VAR_6 = FUNC_4(VAR_4->pStmt);
    if( VAR_6!=VAR_2 ) return VAR_6;

    VAR_5 = FUNC_1(&VAR_4->result);
    if( VAR_5==0 ){
      VAR_4->eof = 1;
      return VAR_2;
    }
    VAR_6 = FUNC_3(VAR_4->pStmt, 1, VAR_5);
    if( VAR_6!=VAR_2 ) return VAR_6;

    VAR_6 = FUNC_5(VAR_4->pStmt);
    if( VAR_6==128 ){
      VAR_4->eof = 0;
      return VAR_2;
    }

    return VAR_6==129 ? VAR_1 : VAR_6;
  }
}
