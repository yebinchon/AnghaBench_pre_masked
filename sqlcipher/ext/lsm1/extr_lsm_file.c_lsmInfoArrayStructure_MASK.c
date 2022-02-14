
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int pEnv; int * pFS; int * pWorker; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_13__ {char* z; } ;
struct TYPE_12__ {int iFirst; int iLastPg; } ;
typedef int Snapshot ;
typedef TYPE_2__ Segment ;
typedef TYPE_3__ LsmString ;
typedef int LsmPgno ;
typedef int FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int,int*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int*) ;
 int FUNC_7 (TYPE_3__*,char*,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;

int FUNC_9(
  lsm_db *VAR_3,
  int VAR_4,
  LsmPgno VAR_5,
  char **VAR_6
){
  int VAR_7 = VAR_2;
  Snapshot *VAR_8;
  Segment *VAR_9 = 0;
  int VAR_10 = 0;

  *VAR_6 = 0;
  if( VAR_5==0 ) return VAR_1;


  VAR_8 = VAR_3->pWorker;
  if( !VAR_8 ){
    VAR_7 = FUNC_5(VAR_3);
    if( VAR_7!=VAR_2 ) return VAR_7;
    VAR_8 = VAR_3->pWorker;
    VAR_10 = 1;
  }


  VAR_9 = FUNC_0(VAR_8, VAR_5);

  if( VAR_9==0 ){

    VAR_7 = VAR_1;
  }else{
    FileSystem *VAR_11 = VAR_3->pFS;
    LsmString VAR_12;
    int VAR_13;
    int VAR_14;

    VAR_13 = FUNC_4(VAR_11, VAR_9->iFirst);
    VAR_14 = FUNC_4(VAR_11, VAR_9->iLastPg);

    FUNC_8(&VAR_12, VAR_3->pEnv);
    if( VAR_4 ){
      FUNC_7(&VAR_12, "%d", VAR_13);
      while( VAR_13!=VAR_14 ){
        FUNC_1(VAR_11, VAR_9, VAR_13, &VAR_13);
        FUNC_7(&VAR_12, " %d", VAR_13);
      }
    }else{
      FUNC_7(&VAR_12, "%d", VAR_9->iFirst);
      while( VAR_13!=VAR_14 ){
        FUNC_7(&VAR_12, " %d", FUNC_3(VAR_11, VAR_13));
        FUNC_1(VAR_11, VAR_9, VAR_13, &VAR_13);
        FUNC_7(&VAR_12, " %d", FUNC_2(VAR_11, VAR_13));
      }
      FUNC_7(&VAR_12, " %d", VAR_9->iLastPg);
    }

    *VAR_6 = VAR_12.z;
  }

  if( VAR_10 ){
    int VAR_15 = VAR_0;
    FUNC_6(VAR_3, 0, &VAR_15);
  }
  return VAR_7;
}
