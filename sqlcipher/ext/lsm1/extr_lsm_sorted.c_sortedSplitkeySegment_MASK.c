
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int nRight; int * aRhs; TYPE_2__* pNext; TYPE_4__* pMerge; } ;
struct TYPE_9__ {scalar_t__ iPg; } ;
struct TYPE_10__ {int nInput; TYPE_1__* aInput; TYPE_3__ splitkey; } ;
struct TYPE_8__ {int lhs; } ;
struct TYPE_7__ {scalar_t__ iPg; } ;
typedef int Segment ;
typedef TYPE_3__ MergeInput ;
typedef TYPE_4__ Merge ;
typedef TYPE_5__ Level ;



__attribute__((used)) static Segment *FUNC_0(Level *VAR_0){
  Merge *VAR_1 = VAR_0->pMerge;
  MergeInput *VAR_2 = &VAR_1->splitkey;
  Segment *VAR_3;
  int VAR_4;

  for(VAR_4=0; VAR_4<VAR_1->nInput; VAR_4++){
    if( VAR_2->iPg==VAR_1->aInput[VAR_4].iPg ) break;
  }
  if( VAR_1->nInput==(VAR_0->nRight+1) && VAR_4>=(VAR_1->nInput-1) ){
    VAR_3 = &VAR_0->pNext->lhs;
  }else{
    VAR_3 = &VAR_0->aRhs[VAR_4];
  }

  return VAR_3;
}
