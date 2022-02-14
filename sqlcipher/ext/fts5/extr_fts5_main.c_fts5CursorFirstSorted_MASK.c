
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_16__ {int zName; int zDb; } ;
struct TYPE_15__ {char* zRank; char* zRankArgs; TYPE_2__* pSorter; int pExpr; } ;
struct TYPE_12__ {TYPE_5__* pConfig; } ;
struct TYPE_14__ {TYPE_4__* pSortCsr; TYPE_1__ p; } ;
struct TYPE_13__ {int nIdx; int pStmt; } ;
typedef TYPE_2__ Fts5Sorter ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;
typedef TYPE_5__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_5__*,char*,int ,int ,char const*,int ,char*,char const*,char*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,int ,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(
  Fts5FullTable *VAR_2,
  Fts5Cursor *VAR_3,
  int VAR_4
){
  Fts5Config *VAR_5 = VAR_2->p.pConfig;
  Fts5Sorter *VAR_6;
  int VAR_7;
  sqlite3_int64 VAR_8;
  int VAR_9;
  const char *VAR_10 = VAR_3->zRank;
  const char *VAR_11 = VAR_3->zRankArgs;

  VAR_7 = FUNC_4(VAR_3->pExpr);
  VAR_8 = sizeof(Fts5Sorter) + sizeof(int) * (VAR_7-1);
  VAR_6 = (Fts5Sorter*)FUNC_7(VAR_8);
  if( VAR_6==0 ) return VAR_0;
  FUNC_3(VAR_6, 0, (size_t)VAR_8);
  VAR_6->nIdx = VAR_7;
  VAR_9 = FUNC_1(&VAR_6->pStmt, VAR_5,
      "SELECT rowid, rank FROM %Q.%Q ORDER BY %s(%s%s%s) %s",
      VAR_5->zDb, VAR_5->zName, VAR_10, VAR_5->zName,
      (VAR_11 ? ", " : ""),
      (VAR_11 ? VAR_11 : ""),
      VAR_4 ? "DESC" : "ASC"
  );

  VAR_3->pSorter = VAR_6;
  if( VAR_9==VAR_1 ){
    FUNC_0( VAR_2->pSortCsr==0 );
    VAR_2->pSortCsr = VAR_3;
    VAR_9 = FUNC_2(VAR_3);
    VAR_2->pSortCsr = 0;
  }

  if( VAR_9!=VAR_1 ){
    FUNC_5(VAR_6->pStmt);
    FUNC_6(VAR_6);
    VAR_3->pSorter = 0;
  }

  return VAR_9;
}
