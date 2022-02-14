
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int lsm_env ;
struct TYPE_15__ {scalar_t__ apHier; int nHier; } ;
struct TYPE_14__ {TYPE_3__* aSave; TYPE_2__* pDb; TYPE_6__ hier; TYPE_1__* pLevel; } ;
struct TYPE_13__ {scalar_t__ iRoot; } ;
struct TYPE_12__ {scalar_t__ iPgno; } ;
struct TYPE_11__ {int * pEnv; int * pFS; } ;
struct TYPE_10__ {TYPE_4__ lhs; } ;
typedef TYPE_4__ Segment ;
typedef int Page ;
typedef TYPE_5__ MergeWorker ;
typedef TYPE_6__ Hierarchy ;
typedef int FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,TYPE_4__*,int,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **,int) ;
 int FUNC_5 (int **,int **,int) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(MergeWorker *VAR_3){
  int VAR_4 = VAR_1;
  Segment *VAR_5;
  Hierarchy *VAR_6;

  VAR_5 = &VAR_3->pLevel->lhs;
  VAR_6 = &VAR_3->hier;

  if( VAR_6->apHier==0 && VAR_5->iRoot!=0 ){
    FileSystem *VAR_7 = VAR_3->pDb->pFS;
    lsm_env *VAR_8 = VAR_3->pDb->pEnv;
    Page **VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11 = (int)VAR_5->iRoot;

    do {
      Page *VAR_12 = 0;
      u8 *VAR_13;
      int VAR_14;
      int VAR_15;

      VAR_4 = FUNC_2(VAR_7, VAR_5, VAR_11, &VAR_12);
      if( VAR_4!=VAR_1 ) break;

      VAR_13 = FUNC_0(VAR_12, &VAR_14);
      VAR_15 = FUNC_7(VAR_13, VAR_14);
      if( VAR_15&VAR_2 ){
        Page **VAR_16 = (Page **)FUNC_4(
            VAR_8, VAR_9, sizeof(Page *)*(VAR_10+1)
        );
        if( VAR_16==0 ){
          VAR_4 = VAR_0;
          break;
        }
        VAR_9 = VAR_16;
        FUNC_5(&VAR_9[1], &VAR_9[0], sizeof(Page *) * VAR_10);
        VAR_10++;

        VAR_9[0] = VAR_12;
        VAR_11 = (int)FUNC_8(VAR_13, VAR_14);
      }else{
        FUNC_3(VAR_12);
        break;
      }
    }while( 1 );

    if( VAR_4==VAR_1 ){
      u8 *VAR_17;
      int VAR_18;
      VAR_17 = FUNC_0(VAR_9[0], &VAR_18);
      VAR_3->aSave[0].iPgno = FUNC_8(VAR_17, VAR_18);
      VAR_6->nHier = VAR_10;
      VAR_6->apHier = VAR_9;
      VAR_4 = FUNC_6(VAR_3, 0);
    }else{
      int VAR_19;
      for(VAR_19=0; VAR_19<VAR_10; VAR_19++){
        FUNC_3(VAR_9[VAR_19]);
      }
      FUNC_1(VAR_8, VAR_9);
    }
  }

  return VAR_4;
}
