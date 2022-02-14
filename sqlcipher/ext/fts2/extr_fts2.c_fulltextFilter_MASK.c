
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_9__ {int nColumn; int zName; int zDb; int db; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_11__ {int nData; int pData; } ;
struct TYPE_10__ {int iCursorType; TYPE_4__ result; int reader; int q; int * pStmt; } ;
typedef TYPE_2__ fulltext_cursor ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ,char const*,int,TYPE_4__*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,int **,char*) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (char*,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(
  sqlite3_vtab_cursor *VAR_3,
  int VAR_4, const char *VAR_5,
  int VAR_6, sqlite3_value **VAR_7
){
  fulltext_cursor *VAR_8 = (fulltext_cursor *) VAR_3;
  fulltext_vtab *VAR_9 = FUNC_2(VAR_8);
  int VAR_10;

  FUNC_0(("FTS2 Filter %p\n",VAR_3));






  if( VAR_8->pStmt && VAR_8->iCursorType!=VAR_4 ){
    FUNC_12(VAR_8->pStmt);
    VAR_8->pStmt = ((void*)0);
  }
  if( !VAR_8->pStmt ){
    char *VAR_11 = FUNC_14("select rowid, * from %%_content %s",
                                 VAR_4==129 ? "" : "where rowid=?");
    VAR_10 = FUNC_10(VAR_9->db, VAR_9->zDb, VAR_9->zName, &VAR_8->pStmt, VAR_11);
    FUNC_13(VAR_11);
    if( VAR_10!=VAR_2 ) return VAR_10;
    VAR_8->iCursorType = VAR_4;
  }else{
    FUNC_15(VAR_8->pStmt);
    FUNC_1( VAR_8->iCursorType==VAR_4 );
  }

  switch( VAR_4 ){
    case 129:
      break;

    case 128:
      VAR_10 = FUNC_11(VAR_8->pStmt, 1, FUNC_16(VAR_7[0]));
      if( VAR_10!=VAR_2 ) return VAR_10;
      break;

    default:
    {
      const char *VAR_12 = (const char *)FUNC_17(VAR_7[0]);
      FUNC_1( VAR_4<=VAR_1+VAR_9->nColumn);
      FUNC_1( VAR_6==1 );
      FUNC_9(&VAR_8->q);
      if( VAR_8->result.nData!=0 ){

        FUNC_5(&VAR_8->reader);
        FUNC_4(&VAR_8->result);
      }else{
        FUNC_3(&VAR_8->result, 0);
      }
      VAR_10 = FUNC_8(VAR_9, VAR_4-VAR_1, VAR_12, -1, &VAR_8->result, &VAR_8->q);
      if( VAR_10!=VAR_2 ) return VAR_10;
      if( VAR_8->result.nData!=0 ){
        FUNC_6(&VAR_8->reader, VAR_0, VAR_8->result.pData, VAR_8->result.nData);
      }
      break;
    }
  }

  return FUNC_7(VAR_3);
}
