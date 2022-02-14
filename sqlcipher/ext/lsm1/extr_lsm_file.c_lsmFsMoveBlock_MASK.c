
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ i64 ;
struct TYPE_13__ {scalar_t__ nBlocksize; scalar_t__ nMapLimit; int nPagesize; int pEnv; int fdDb; scalar_t__ pMap; TYPE_1__* pDb; } ;
struct TYPE_12__ {int iRoot; int iLastPg; int iFirst; } ;
struct TYPE_11__ {int * aiAppend; } ;
struct TYPE_10__ {TYPE_2__* pWorker; } ;
typedef TYPE_2__ Snapshot ;
typedef TYPE_3__ Segment ;
typedef TYPE_4__ FileSystem ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int*) ;
 int FUNC_3 (TYPE_4__*,int,int,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,int *,int) ;
 int FUNC_5 (int ,int ,scalar_t__,int *,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (int ,int,int*) ;
 int FUNC_9 (int *,int *,int) ;

int FUNC_10(FileSystem *VAR_2, Segment *VAR_3, int VAR_4, int VAR_5){
  Snapshot *VAR_6 = VAR_2->pDb->pWorker;
  int VAR_7 = VAR_1;
  int VAR_8;
  i64 VAR_9;

  i64 VAR_10 = (i64)(VAR_5-1) * VAR_2->nBlocksize;
  i64 VAR_11 = (i64)(VAR_4-1) * VAR_2->nBlocksize;

  FUNC_1( VAR_4!=1 );
  FUNC_1( VAR_5>VAR_4 );


  VAR_9 = FUNC_0(VAR_2->nMapLimit, (i64)VAR_5 * VAR_2->nBlocksize);
  FUNC_2(VAR_2, VAR_9, &VAR_7);

  if( VAR_7==VAR_1 ){
    const int VAR_12 = (VAR_2->nBlocksize / VAR_2->nPagesize);
    int VAR_13 = VAR_2->nPagesize;
    u8 *VAR_14 = 0;
    u8 *VAR_15 = 0;

    for(VAR_8=0; VAR_7==VAR_1 && VAR_8<VAR_12; VAR_8++){
      i64 VAR_16 = VAR_10 + VAR_8*VAR_13;


      if( (VAR_16+VAR_13)<=VAR_2->nMapLimit ){
        u8 *VAR_17 = (u8 *)(VAR_2->pMap);
        VAR_15 = &VAR_17[VAR_16];
      }else{
        if( VAR_14==0 ){
          VAR_14 = (u8 *)FUNC_8(VAR_2->pEnv, VAR_13, &VAR_7);
          if( VAR_14==0 ) break;
        }
        VAR_15 = VAR_14;
        VAR_7 = FUNC_4(VAR_2->pEnv, VAR_2->fdDb, VAR_16, VAR_15, VAR_13);
      }


      if( VAR_7==VAR_1 ){
        VAR_16 = VAR_11 + VAR_8*VAR_13;
        if( (VAR_16+VAR_13)<=VAR_2->nMapLimit ){
          u8 *VAR_18 = (u8 *)(VAR_2->pMap);
          FUNC_9(&VAR_18[VAR_16], VAR_15, VAR_13);
        }else{
          VAR_7 = FUNC_5(VAR_2->pEnv, VAR_2->fdDb, VAR_16, VAR_15, VAR_13);
        }
      }
    }
    FUNC_6(VAR_2->pEnv, VAR_14);
    FUNC_7(VAR_2);
  }


  for(VAR_8=0; VAR_8<VAR_0; VAR_8++){
    FUNC_3(VAR_2, VAR_4, VAR_5, &VAR_6->aiAppend[VAR_8]);
  }


  FUNC_3(VAR_2, VAR_4, VAR_5, &VAR_3->iFirst);
  FUNC_3(VAR_2, VAR_4, VAR_5, &VAR_3->iLastPg);
  FUNC_3(VAR_2, VAR_4, VAR_5, &VAR_3->iRoot);

  return VAR_7;
}
