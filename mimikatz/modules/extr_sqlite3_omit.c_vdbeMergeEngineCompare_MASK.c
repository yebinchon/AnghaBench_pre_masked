
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nTree; int* aTree; TYPE_1__* pTask; TYPE_2__* aReadr; } ;
struct TYPE_7__ {scalar_t__ pFd; int nKey; int aKey; } ;
struct TYPE_6__ {scalar_t__ pUnpacked; int (* xCompare ) (TYPE_1__*,int*,int ,int ,int ,int ) ;} ;
typedef TYPE_1__ SortSubtask ;
typedef TYPE_2__ PmaReader ;
typedef TYPE_3__ MergeEngine ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(
  MergeEngine *VAR_0,
  int VAR_1
){
  int VAR_2;
  int VAR_3;
  int VAR_4;
  PmaReader *VAR_5;
  PmaReader *VAR_6;

  FUNC_0( VAR_1<VAR_0->nTree && VAR_1>0 );

  if( VAR_1>=(VAR_0->nTree/2) ){
    VAR_2 = (VAR_1 - VAR_0->nTree/2) * 2;
    VAR_3 = VAR_2 + 1;
  }else{
    VAR_2 = VAR_0->aTree[VAR_1*2];
    VAR_3 = VAR_0->aTree[VAR_1*2+1];
  }

  VAR_5 = &VAR_0->aReadr[VAR_2];
  VAR_6 = &VAR_0->aReadr[VAR_3];

  if( VAR_5->pFd==0 ){
    VAR_4 = VAR_3;
  }else if( VAR_6->pFd==0 ){
    VAR_4 = VAR_2;
  }else{
    SortSubtask *VAR_7 = VAR_0->pTask;
    int VAR_8 = 0;
    int VAR_9;
    FUNC_0( VAR_7->pUnpacked!=0 );
    VAR_9 = VAR_7->xCompare(
        VAR_7, &VAR_8, VAR_5->aKey, VAR_5->nKey, VAR_6->aKey, VAR_6->nKey
    );
    if( VAR_9<=0 ){
      VAR_4 = VAR_2;
    }else{
      VAR_4 = VAR_3;
    }
  }

  VAR_0->aTree[VAR_1] = VAR_4;
}
