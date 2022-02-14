
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {int iCursorType; int eof; int pStmt; int result; } ;
typedef TYPE_1__ fulltext_cursor ;





 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab_cursor *VAR_2){
  fulltext_cursor *VAR_3 = (fulltext_cursor *) VAR_2;
  sqlite_int64 VAR_4;
  int VAR_5;

  switch( VAR_3->iCursorType ){
    case 130:

      VAR_5 = FUNC_5(VAR_3->pStmt);
      switch( VAR_5 ){
        case 128:
          VAR_3->eof = 0;
          return VAR_1;
        case 129:
          VAR_3->eof = 1;
          return VAR_1;
        default:
          VAR_3->eof = 1;
          return VAR_5;
      }
    case 131:
      VAR_5 = FUNC_4(VAR_3->pStmt);
      if( VAR_5!=VAR_1 ) return VAR_5;

      if( FUNC_2(&VAR_3->result)){
        VAR_3->eof = 1;
        return VAR_1;
      }
      VAR_4 = FUNC_1(&VAR_3->result);
      VAR_5 = FUNC_3(VAR_3->pStmt, 1, VAR_4);
      if( VAR_5!=VAR_1 ) return VAR_5;

      VAR_5 = FUNC_5(VAR_3->pStmt);
      if( VAR_5==128 ){
        VAR_3->eof = 0;
        return VAR_1;
      }

      return VAR_5==129 ? VAR_0 : VAR_5;
    default:
      FUNC_0( 0 );
      return VAR_0;
  }
}
