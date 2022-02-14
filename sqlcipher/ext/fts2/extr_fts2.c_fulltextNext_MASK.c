
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {scalar_t__ nData; } ;
struct TYPE_4__ {scalar_t__ iCursorType; int eof; int pStmt; int reader; TYPE_1__ result; int snippet; } ;
typedef TYPE_2__ fulltext_cursor ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(sqlite3_vtab_cursor *VAR_3){
  fulltext_cursor *VAR_4 = (fulltext_cursor *) VAR_3;
  int VAR_5;

  FUNC_0(("FTS2 Next %p\n", VAR_3));
  FUNC_4(&VAR_4->snippet);
  if( VAR_4->iCursorType < VAR_0 ){

    VAR_5 = FUNC_7(VAR_4->pStmt);
    switch( VAR_5 ){
      case 128:
        VAR_4->eof = 0;
        return VAR_2;
      case 129:
        VAR_4->eof = 1;
        return VAR_2;
      default:
        VAR_4->eof = 1;
        return VAR_5;
    }
  } else {
    VAR_5 = FUNC_6(VAR_4->pStmt);
    if( VAR_5!=VAR_2 ) return VAR_5;

    if( VAR_4->result.nData==0 || FUNC_1(&VAR_4->reader) ){
      VAR_4->eof = 1;
      return VAR_2;
    }
    VAR_5 = FUNC_5(VAR_4->pStmt, 1, FUNC_2(&VAR_4->reader));
    FUNC_3(&VAR_4->reader);
    if( VAR_5!=VAR_2 ) return VAR_5;

    VAR_5 = FUNC_7(VAR_4->pStmt);
    if( VAR_5==128 ){
      VAR_4->eof = 0;
      return VAR_2;
    }

    return VAR_5==129 ? VAR_1 : VAR_5;
  }
}
