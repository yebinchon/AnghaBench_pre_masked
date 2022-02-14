
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_3__ {char* zIdxName; char* zAfterKey; int pStmt; } ;
typedef TYPE_1__ CidxCursor ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,char*,char**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (int *,char const*,int,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(
  sqlite3_vtab_cursor *VAR_5,
  sqlite3_context *VAR_6,
  int VAR_7
){
  CidxCursor *VAR_8 = (CidxCursor*)VAR_5;
  FUNC_0( VAR_7>=130 && VAR_7<=128 );
  switch( VAR_7 ){
    case 130: {
      const char *VAR_9 = 0;
      if( FUNC_3(VAR_8->pStmt, 0)==VAR_0 ){
        if( FUNC_2(VAR_8->pStmt, 0)==0 ){
          VAR_9 = "row data mismatch";
        }
      }else{
        VAR_9 = "row missing";
      }
      FUNC_5(VAR_6, VAR_9, -1, VAR_2);
      break;
    }
    case 131: {
      FUNC_6(VAR_6, FUNC_4(VAR_8->pStmt, 1));
      break;
    }
    case 129: {
      FUNC_5(VAR_6, VAR_8->zIdxName, -1, VAR_3);
      break;
    }
    case 132: {
      FUNC_5(VAR_6, VAR_8->zAfterKey, -1, VAR_3);
      break;
    }
    case 128: {
      char *VAR_10 = 0;
      FUNC_1(VAR_8, VAR_8->zIdxName, VAR_8->zAfterKey, &VAR_10);
      FUNC_5(VAR_6, VAR_10, -1, VAR_4);
      break;
    }
  }
  return VAR_1;
}
