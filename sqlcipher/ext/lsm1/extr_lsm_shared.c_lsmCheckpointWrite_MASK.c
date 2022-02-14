
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_9__ {scalar_t__ pWorker; scalar_t__ pClient; scalar_t__ eSafety; scalar_t__* aSnapshot; int pFS; TYPE_2__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
typedef scalar_t__ i64 ;
struct TYPE_10__ {int iMetaPage; } ;
typedef TYPE_2__ ShmHeader ;
typedef int MetaPage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int * FUNC_6 (int *,int*) ;
 int FUNC_7 (int ,int ,int,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_1__*,int ,char*,int) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int ) ;

int FUNC_13(lsm_db *VAR_6, u32 *VAR_7){
  int VAR_8;
  u32 VAR_9 = 0;

  FUNC_0( VAR_6->pWorker==0 );
  FUNC_0( 1 || VAR_6->pClient==0 );
  FUNC_0( FUNC_11(VAR_6, VAR_3, VAR_2) );

  VAR_8 = FUNC_12(VAR_6, VAR_0, VAR_1, 0);
  if( VAR_8!=VAR_4 ) return VAR_8;

  VAR_8 = FUNC_2(VAR_6, 0);
  if( VAR_8==VAR_4 ){
    int VAR_10 = FUNC_3(VAR_6->aSnapshot);
    ShmHeader *VAR_11 = VAR_6->pShmhdr;
    int VAR_12 = 0;



    if( VAR_11->iMetaPage ){
      MetaPage *VAR_13;
      u8 *VAR_14;
      int VAR_15;
      i64 VAR_16;
      i64 VAR_17 = 0;
      VAR_16 = FUNC_1(VAR_6->aSnapshot, 0);
      VAR_8 = FUNC_7(VAR_6->pFS, 0, VAR_11->iMetaPage, &VAR_13);
      if( VAR_8==VAR_4 ){
        VAR_14 = FUNC_6(VAR_13, &VAR_15);
        VAR_17 = FUNC_1((u32 *)VAR_14, 1);
        VAR_9 = FUNC_4((u32 *)VAR_14, 1);
        FUNC_8(VAR_13);
      }
      VAR_12 = (VAR_17>=VAR_16);
    }

    if( VAR_8==VAR_4 && VAR_12==0 ){
      int VAR_18 = (VAR_11->iMetaPage % 2) + 1;
      if( VAR_6->eSafety!=VAR_5 ){
        VAR_8 = FUNC_9(VAR_6->pFS, VAR_10);
      }
      if( VAR_8==VAR_4 ) VAR_8 = FUNC_5(VAR_6, VAR_18);
      if( VAR_8==VAR_4 && VAR_6->eSafety!=VAR_5){
        VAR_8 = FUNC_9(VAR_6->pFS, 0);
      }
      if( VAR_8==VAR_4 ){
        VAR_11->iMetaPage = VAR_18;
        VAR_9 = FUNC_4(VAR_6->aSnapshot, 0) - VAR_9;
      }





    }
  }

  FUNC_12(VAR_6, VAR_0, VAR_2, 0);
  if( VAR_7 && VAR_8==VAR_4 ) *VAR_7 = VAR_9;
  return VAR_8;
}
