
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_blob ;
struct TYPE_5__ {int zDb; int db; } ;
struct TYPE_4__ {int rc; int zDataTbl; TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int,int **) ;
 int FUNC_4 (int *,int *,int,int ) ;

int FUNC_5(Fts5Index *VAR_2, int VAR_3){
  int VAR_4;
  Fts5Config *VAR_5 = VAR_2->pConfig;
  u8 VAR_6[4];
  sqlite3_blob *VAR_7 = 0;

  FUNC_0( VAR_2->rc==VAR_1 );
  FUNC_1(VAR_6, VAR_3);

  VAR_4 = FUNC_3(VAR_5->db, VAR_5->zDb, VAR_2->zDataTbl,
      "block", VAR_0, 1, &VAR_7
  );
  if( VAR_4==VAR_1 ){
    FUNC_4(VAR_7, VAR_6, 4, 0);
    VAR_4 = FUNC_2(VAR_7);
  }

  return VAR_4;
}
