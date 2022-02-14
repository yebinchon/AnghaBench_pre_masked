
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int pWorker; int pFS; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_5__ {int nHier; int ** apHier; } ;
struct TYPE_7__ {int pLevel; TYPE_1__ hier; TYPE_2__* pDb; } ;
typedef int Page ;
typedef TYPE_3__ MergeWorker ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,int,int **) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static int FUNC_13(
  MergeWorker *VAR_2,
  int VAR_3
){
  lsm_db *VAR_4 = VAR_2->pDb;
  int VAR_5 = VAR_0;
  int VAR_6;
  Page **VAR_7 = VAR_2->hier.apHier;
  int VAR_8 = VAR_2->hier.nHier;

  for(VAR_6=0; VAR_5==VAR_0 && VAR_6<VAR_8; VAR_6++){
    Page *VAR_9 = 0;
    VAR_5 = FUNC_8(VAR_4->pFS, VAR_4->pWorker, VAR_2->pLevel, 1, &VAR_9);
    FUNC_4( VAR_5==VAR_0 );

    if( VAR_5==VAR_0 ){
      u8 *VAR_10; int VAR_11;
      u8 *VAR_12; int VAR_13;

      VAR_10 = FUNC_5(VAR_9, &VAR_11);
      VAR_12 = FUNC_5(VAR_7[VAR_6], &VAR_13);

      FUNC_4( VAR_11==VAR_13 || VAR_11+4==VAR_13 );

      if( VAR_11==VAR_13 ){
        FUNC_11(VAR_10, VAR_12, VAR_13);
      }else{
        int VAR_14 = FUNC_12(VAR_12, VAR_13);
        int VAR_15 = FUNC_0(VAR_11, VAR_14);
        int VAR_16 = FUNC_0(VAR_13, VAR_14);

        FUNC_11(VAR_10, VAR_12, VAR_16 - 4);
        FUNC_11(&VAR_10[VAR_15], &VAR_12[VAR_16], VAR_13 - VAR_16);
      }

      FUNC_6(VAR_7[VAR_6]);
      VAR_7[VAR_6] = VAR_9;
    }
  }







  return VAR_5;
}
