
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int pWorker; int pFS; int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_7__ {int nHier; int ** apHier; } ;
struct TYPE_6__ {int pLevel; TYPE_1__* pDb; TYPE_3__ hier; } ;
typedef int Page ;
typedef TYPE_2__ MergeWorker ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_3__ Hierarchy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int* FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ,int,int **) ;
 int FUNC_12 (int*,int ) ;
 int FUNC_13 (int*,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int **,int) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int*,int) ;
 int FUNC_17 (int*,void*,int) ;
 int FUNC_18 (int*,int ,int) ;
 int FUNC_19 (int*,int) ;
 int FUNC_20 (int*,int) ;

__attribute__((used)) static int FUNC_21(
  MergeWorker *VAR_3,
  u8 VAR_4,
  LsmPgno VAR_5,
  LsmPgno VAR_6,
  void *VAR_7,
  int VAR_8
){
  Hierarchy *VAR_9 = &VAR_3->hier;
  lsm_db *VAR_10 = VAR_3->pDb;
  int VAR_11 = VAR_1;
  int VAR_12;
  int VAR_13;
  u8 *VAR_14;
  int VAR_15;
  int VAR_16;



  FUNC_5( (VAR_4==0)==(VAR_6!=0) );
  for(VAR_12=0; VAR_12<=VAR_9->nHier; VAR_12++){
    int VAR_17;

    if( VAR_12==VAR_9->nHier ){

      Page **VAR_18;
      VAR_18 = (Page **)FUNC_14(
          VAR_3->pDb->pEnv, VAR_9->apHier, sizeof(Page *)*(VAR_9->nHier+1)
      );
      if( !VAR_18 ){
        return VAR_0;
      }
      VAR_9->apHier = VAR_18;
    }else{
      Page *VAR_19;
      int VAR_20;



      VAR_19 = VAR_9->apHier[VAR_12];
      FUNC_5( FUNC_10(VAR_19) );
      VAR_14 = FUNC_6(VAR_19, &VAR_13);
      if( VAR_4==0 ){
        VAR_17 = 2 + 1 + FUNC_15((int)VAR_5) + FUNC_15((int)VAR_6);
      }else{
        VAR_17 = 2 + 1 + FUNC_15((int)VAR_5) + FUNC_15(VAR_8) + VAR_8;
      }
      VAR_16 = FUNC_20(VAR_14, VAR_13);
      VAR_20 = FUNC_1(VAR_13, VAR_16) - FUNC_19(VAR_14, VAR_13);
      if( VAR_17<=VAR_20 ) break;



      FUNC_13(&VAR_14[FUNC_4(VAR_13)], VAR_5);
      FUNC_5( FUNC_7(VAR_19)==0 );
      VAR_11 = FUNC_8(VAR_19);
      if( VAR_11==VAR_1 ){
        VAR_5 = FUNC_7(VAR_19);
        FUNC_9(VAR_19);
      }
    }


    VAR_9->apHier[VAR_12] = 0;
    if( VAR_11==VAR_1 ){
      VAR_11 = FUNC_11(
          VAR_10->pFS, VAR_10->pWorker, VAR_3->pLevel, 1, &VAR_9->apHier[VAR_12]
      );
    }
    if( VAR_11!=VAR_1 ) return VAR_11;

    VAR_14 = FUNC_6(VAR_9->apHier[VAR_12], &VAR_13);
    FUNC_18(VAR_14, 0, VAR_13);
    FUNC_12(&VAR_14[FUNC_2(VAR_13)], VAR_2);
    FUNC_12(&VAR_14[FUNC_3(VAR_13)], 0);

    if( VAR_12==VAR_9->nHier ){
      VAR_9->nHier++;
      break;
    }
  }


  VAR_14 = FUNC_6(VAR_9->apHier[VAR_12], &VAR_13);
  VAR_15 = FUNC_19(VAR_14, VAR_13);
  VAR_16 = FUNC_20(VAR_14, VAR_13);
  FUNC_12(&VAR_14[FUNC_0(VAR_13, VAR_16)], (u16)VAR_15);
  FUNC_12(&VAR_14[FUNC_3(VAR_13)], (u16)(VAR_16+1));
  if( VAR_4==0 ){
    VAR_14[VAR_15++] = 0x00;
    VAR_15 += FUNC_16(&VAR_14[VAR_15], (int)VAR_5);
    VAR_15 += FUNC_16(&VAR_14[VAR_15], (int)VAR_6);
  }else{
    VAR_14[VAR_15++] = VAR_4;
    VAR_15 += FUNC_16(&VAR_14[VAR_15], (int)VAR_5);
    VAR_15 += FUNC_16(&VAR_14[VAR_15], VAR_8);
    FUNC_17(&VAR_14[VAR_15], VAR_7, VAR_8);
  }

  return VAR_11;
}
