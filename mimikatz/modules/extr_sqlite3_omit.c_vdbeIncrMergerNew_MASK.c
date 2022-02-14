
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ mxSz; TYPE_3__* pTask; int * pMerger; } ;
struct TYPE_8__ {int iEof; } ;
struct TYPE_9__ {TYPE_2__ file2; TYPE_1__* pSorter; } ;
struct TYPE_7__ {int mxPmaSize; scalar_t__ mxKeysize; } ;
typedef TYPE_3__ SortSubtask ;
typedef int MergeEngine ;
typedef TYPE_4__ IncrMerger ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(
  SortSubtask *VAR_2,
  MergeEngine *VAR_3,
  IncrMerger **VAR_4
){
  int VAR_5 = VAR_1;
  IncrMerger *VAR_6 = *VAR_4 = (IncrMerger*)
       (FUNC_1(100) ? 0 : FUNC_2(sizeof(*VAR_6)));
  if( VAR_6 ){
    VAR_6->pMerger = VAR_3;
    VAR_6->pTask = VAR_2;
    VAR_6->mxSz = FUNC_0(VAR_2->pSorter->mxKeysize+9,VAR_2->pSorter->mxPmaSize/2);
    VAR_2->file2.iEof += VAR_6->mxSz;
  }else{
    FUNC_3(VAR_3);
    VAR_5 = VAR_0;
  }
  return VAR_5;
}
