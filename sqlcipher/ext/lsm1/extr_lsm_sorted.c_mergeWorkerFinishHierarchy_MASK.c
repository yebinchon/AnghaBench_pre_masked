
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int nHier; int ** apHier; } ;
struct TYPE_13__ {TYPE_5__ hier; TYPE_4__* pDb; TYPE_3__* pLevel; TYPE_1__* aSave; } ;
struct TYPE_11__ {int pEnv; } ;
struct TYPE_9__ {int iRoot; } ;
struct TYPE_10__ {TYPE_2__ lhs; } ;
struct TYPE_8__ {int iPgno; } ;
typedef int Page ;
typedef TYPE_6__ MergeWorker ;
typedef int LsmPgno ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int * FUNC_1 (int *,int*) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(
  MergeWorker *VAR_1
){
  int VAR_2;
  int VAR_3 = VAR_0;
  LsmPgno VAR_4;

  VAR_4 = VAR_1->aSave[0].iPgno;
  for(VAR_2=0; VAR_2<VAR_1->hier.nHier && VAR_3==VAR_0; VAR_2++){
    Page *VAR_5 = VAR_1->hier.apHier[VAR_2];
    int VAR_6;
    u8 *VAR_7;

    VAR_7 = FUNC_1(VAR_5, &VAR_6);
    FUNC_6(&VAR_7[FUNC_0(VAR_6)], VAR_4);

    VAR_3 = FUNC_4(VAR_5);
    VAR_4 = FUNC_3(VAR_5);
    FUNC_5(VAR_5);
  }

  if( VAR_1->hier.nHier ){
    VAR_1->pLevel->lhs.iRoot = VAR_4;
    FUNC_2(VAR_1->pDb->pEnv, VAR_1->hier.apHier);
    VAR_1->hier.apHier = 0;
    VAR_1->hier.nHier = 0;
  }

  return VAR_3;
}
