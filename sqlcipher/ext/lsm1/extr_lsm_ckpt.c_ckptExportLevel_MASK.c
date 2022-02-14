
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {int flags; scalar_t__ nRight; int * aRhs; int lhs; scalar_t__ iAge; TYPE_3__* pMerge; } ;
struct TYPE_7__ {scalar_t__ iCell; int iPg; } ;
struct TYPE_8__ {int nInput; scalar_t__ nSkip; int iCurrentPtr; TYPE_2__ splitkey; TYPE_1__* aInput; } ;
struct TYPE_6__ {scalar_t__ iCell; int iPg; } ;
typedef TYPE_3__ Merge ;
typedef TYPE_4__ Level ;
typedef int CkptBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int ,int*) ;
 int FUNC_2 (int *,int *,int*,int*) ;
 int FUNC_3 (int *,int ,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_4(
  Level *VAR_0,
  CkptBuffer *VAR_1,
  int *VAR_2,
  int *VAR_3
){
  int VAR_4 = *VAR_2;
  Merge *VAR_5;

  VAR_5 = VAR_0->pMerge;
  FUNC_3(VAR_1, VAR_4++, (u32)VAR_0->iAge + (u32)(VAR_0->flags<<16), VAR_3);
  FUNC_3(VAR_1, VAR_4++, VAR_0->nRight, VAR_3);
  FUNC_2(&VAR_0->lhs, VAR_1, &VAR_4, VAR_3);

  FUNC_0( (VAR_0->nRight>0)==(VAR_5!=0) );
  if( VAR_5 ){
    int VAR_6;
    for(VAR_6=0; VAR_6<VAR_0->nRight; VAR_6++){
      FUNC_2(&VAR_0->aRhs[VAR_6], VAR_1, &VAR_4, VAR_3);
    }
    FUNC_0( VAR_5->nInput==VAR_0->nRight
         || VAR_5->nInput==VAR_0->nRight+1
    );
    FUNC_3(VAR_1, VAR_4++, VAR_5->nInput, VAR_3);
    FUNC_3(VAR_1, VAR_4++, VAR_5->nSkip, VAR_3);
    for(VAR_6=0; VAR_6<VAR_5->nInput; VAR_6++){
      FUNC_1(VAR_1, &VAR_4, VAR_5->aInput[VAR_6].iPg, VAR_3);
      FUNC_3(VAR_1, VAR_4++, VAR_5->aInput[VAR_6].iCell, VAR_3);
    }
    FUNC_1(VAR_1, &VAR_4, VAR_5->splitkey.iPg, VAR_3);
    FUNC_3(VAR_1, VAR_4++, VAR_5->splitkey.iCell, VAR_3);
    FUNC_1(VAR_1, &VAR_4, VAR_5->iCurrentPtr, VAR_3);
  }

  *VAR_2 = VAR_4;
}
