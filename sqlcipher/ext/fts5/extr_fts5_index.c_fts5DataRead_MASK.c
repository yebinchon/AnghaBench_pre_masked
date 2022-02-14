
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_blob ;
typedef int i64 ;
struct TYPE_10__ {int zDb; int db; } ;
struct TYPE_9__ {int nn; int* p; int szLeaf; } ;
struct TYPE_8__ {int rc; int nRead; int * pReader; int zDataTbl; TYPE_3__* pConfig; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Data ;
typedef TYPE_3__ Fts5Config ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,char*,int ,int ,int **) ;
 int FUNC_5 (int *,int*,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static Fts5Data *FUNC_9(Fts5Index *VAR_6, i64 VAR_7){
  Fts5Data *VAR_8 = 0;
  if( VAR_6->rc==VAR_5 ){
    int VAR_9 = VAR_5;

    if( VAR_6->pReader ){



      sqlite3_blob *VAR_10 = VAR_6->pReader;
      VAR_6->pReader = 0;
      VAR_9 = FUNC_6(VAR_10, VAR_7);
      FUNC_0( VAR_6->pReader==0 );
      VAR_6->pReader = VAR_10;
      if( VAR_9!=VAR_5 ){
        FUNC_1(VAR_6);
      }
      if( VAR_9==VAR_2 ) VAR_9 = VAR_5;
    }



    if( VAR_6->pReader==0 && VAR_9==VAR_5 ){
      Fts5Config *VAR_11 = VAR_6->pConfig;
      VAR_9 = FUNC_4(VAR_11->db,
          VAR_11->zDb, VAR_6->zDataTbl, "block", VAR_7, 0, &VAR_6->pReader
      );
    }






    if( VAR_9==VAR_3 ) VAR_9 = VAR_0;

    if( VAR_9==VAR_5 ){
      u8 *VAR_12 = 0;
      int VAR_13 = FUNC_3(VAR_6->pReader);
      sqlite3_int64 VAR_14 = sizeof(Fts5Data) + VAR_13 + VAR_1;
      VAR_8 = (Fts5Data*)FUNC_8(VAR_14);
      if( VAR_8 ){
        VAR_8->nn = VAR_13;
        VAR_12 = VAR_8->p = (u8*)&VAR_8[1];
      }else{
        VAR_9 = VAR_4;
      }

      if( VAR_9==VAR_5 ){
        VAR_9 = FUNC_5(VAR_6->pReader, VAR_12, VAR_13, 0);
      }
      if( VAR_9!=VAR_5 ){
        FUNC_7(VAR_8);
        VAR_8 = 0;
      }else{

        VAR_8->p[VAR_13] = 0x00;
        VAR_8->szLeaf = FUNC_2(&VAR_8->p[2]);
      }
    }
    VAR_6->rc = VAR_9;
    VAR_6->nRead++;
  }

  FUNC_0( (VAR_8==0)==(VAR_6->rc!=VAR_5) );
  return VAR_8;
}
