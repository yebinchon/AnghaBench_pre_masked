
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_5__ {int db; int zTableName; int zDbName; } ;
typedef TYPE_1__ spellfix1_vtab ;
struct TYPE_6__ {int idxNum; int nRow; int iRow; int pFullScan; TYPE_1__* pVTab; } ;
typedef TYPE_2__ spellfix1_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ,int ,char*) ;
 int FUNC_5 (int ,char*,int,int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(
  spellfix1_cursor *VAR_4,
  int VAR_5,
  sqlite3_value **VAR_6
){
  int VAR_7 = VAR_2;
  int VAR_8 = VAR_4->idxNum;
  char *VAR_9;
  spellfix1_vtab *VAR_10 = VAR_4->pVTab;
  FUNC_1(VAR_4);
  FUNC_0( VAR_8==0 || VAR_8==64 );
  VAR_9 = FUNC_4(
     "SELECT word, rank, NULL, langid, id FROM \"%w\".\"%w_vocab\"%s",
     VAR_10->zDbName, VAR_10->zTableName,
     ((VAR_8 & 64) ? " WHERE rowid=?" : "")
  );
  if( VAR_9==0 ) return VAR_1;
  VAR_7 = FUNC_5(VAR_10->db, VAR_9, -1, &VAR_4->pFullScan, 0);
  FUNC_3(VAR_9);
  if( VAR_7==VAR_2 && (VAR_8 & 64) ){
    FUNC_0( VAR_5==1 );
    VAR_7 = FUNC_2(VAR_4->pFullScan, 1, VAR_6[0]);
  }
  VAR_4->nRow = VAR_4->iRow = 0;
  if( VAR_7==VAR_2 ){
    VAR_7 = FUNC_6(VAR_4->pFullScan);
    if( VAR_7==VAR_3 ){ VAR_4->iRow = -1; VAR_7 = VAR_2; }
    if( VAR_7==VAR_0 ){ VAR_7 = VAR_2; }
  }else{
    VAR_4->iRow = 0;
  }
  return VAR_7;
}
