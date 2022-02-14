
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int pEnv; int pWorker; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_12__ {scalar_t__ iRoot; } ;
struct TYPE_14__ {scalar_t__ nRight; int flags; scalar_t__ pMerge; TYPE_2__ lhs; struct TYPE_14__* pNext; TYPE_2__* aRhs; scalar_t__ iAge; } ;
struct TYPE_13__ {int nInput; int * aInput; } ;
typedef TYPE_2__ Segment ;
typedef int MergeInput ;
typedef TYPE_3__ Merge ;
typedef TYPE_4__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(
  lsm_db *VAR_2,
  Level *VAR_3,
  int VAR_4,
  Level **VAR_5
){
  int VAR_6 = VAR_1;
  Level *VAR_7;
  int VAR_8 = 0;
  Merge *VAR_9;
  int VAR_10;
  VAR_7 = (Level *)FUNC_3(VAR_2->pEnv, sizeof(Level), &VAR_6);
  if( VAR_7 ){
    VAR_7->aRhs = (Segment *)FUNC_3(VAR_2->pEnv,
                                        VAR_4 * sizeof(Segment), &VAR_6);
  }


  if( VAR_6==VAR_1 ){
    Level *VAR_11 = 0;
    int VAR_12;
    int VAR_13 = 1;
    Level *VAR_14;
    Level *VAR_15 = VAR_3;
    Level **VAR_16;
    VAR_7->nRight = VAR_4;
    VAR_7->iAge = VAR_3->iAge+1;
    for(VAR_12=0; VAR_12<VAR_4; VAR_12++){
      FUNC_0( VAR_15->nRight==0 );
      VAR_11 = VAR_15->pNext;
      VAR_7->aRhs[VAR_12] = VAR_15->lhs;
      if( (VAR_15->flags & VAR_0)==0 ) VAR_13 = 0;
      FUNC_4(VAR_2->pEnv, VAR_15);
      VAR_15 = VAR_11;
    }

    if( VAR_13 ) VAR_7->flags |= VAR_0;


    VAR_14 = FUNC_1(VAR_2->pWorker);
    VAR_7->pNext = VAR_15;
    for(VAR_16=&VAR_14; *VAR_16!=VAR_3; VAR_16=&((*VAR_16)->pNext));
    *VAR_16 = VAR_7;
    FUNC_2(VAR_2->pWorker, VAR_14);


    if( VAR_11 && VAR_11->pMerge==0 && VAR_11->lhs.iRoot && VAR_11
     && (VAR_13==0 || (VAR_11->flags & VAR_0))
    ){
      VAR_8 = 1;
    }
  }


  VAR_10 = sizeof(Merge) + sizeof(MergeInput) * (VAR_4 + VAR_8);
  VAR_9 = (Merge *)FUNC_3(VAR_2->pEnv, VAR_10, &VAR_6);
  if( VAR_9 ){
    VAR_9->aInput = (MergeInput *)&VAR_9[1];
    VAR_9->nInput = VAR_4 + VAR_8;
    VAR_7->pMerge = VAR_9;
  }

  *VAR_5 = VAR_7;
  return VAR_6;
}
