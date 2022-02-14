
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {int pEnv; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_12__ {TYPE_4__* pMerge; } ;
struct TYPE_8__ {int iCell; void* iPg; } ;
struct TYPE_11__ {int nInput; int iOutputOff; int nSkip; void* iCurrentPtr; TYPE_1__ splitkey; TYPE_3__* aInput; } ;
struct TYPE_10__ {int iCell; void* iPg; } ;
typedef TYPE_3__ MergeInput ;
typedef TYPE_4__ Merge ;
typedef TYPE_5__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__*,int*) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(lsm_db *VAR_2, u32 *VAR_3, int *VAR_4, Level *VAR_5){
  Merge *VAR_6;
  int VAR_7;
  int VAR_8 = *VAR_4;
  int VAR_9;
  int VAR_10;


  VAR_7 = (int)VAR_3[VAR_8++];
  VAR_10 = sizeof(Merge) + sizeof(MergeInput) * VAR_7;
  VAR_6 = (Merge *)FUNC_1(VAR_2->pEnv, VAR_10);
  if( !VAR_6 ) return VAR_0;
  VAR_5->pMerge = VAR_6;


  VAR_6->aInput = (MergeInput *)&VAR_6[1];
  VAR_6->nInput = VAR_7;
  VAR_6->iOutputOff = -1;
  VAR_6->nSkip = (int)VAR_3[VAR_8++];
  for(VAR_9=0; VAR_9<VAR_7; VAR_9++){
    VAR_6->aInput[VAR_9].iPg = FUNC_0(VAR_3, &VAR_8);
    VAR_6->aInput[VAR_9].iCell = (int)VAR_3[VAR_8++];
  }
  VAR_6->splitkey.iPg = FUNC_0(VAR_3, &VAR_8);
  VAR_6->splitkey.iCell = (int)VAR_3[VAR_8++];
  VAR_6->iCurrentPtr = FUNC_0(VAR_3, &VAR_8);


  *VAR_4 = VAR_8;
  return VAR_1;
}
