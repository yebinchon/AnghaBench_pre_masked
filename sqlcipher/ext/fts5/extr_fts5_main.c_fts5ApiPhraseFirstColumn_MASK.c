
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


struct TYPE_15__ {scalar_t__ eDetail; } ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_14__ {int pExpr; TYPE_3__* pSorter; TYPE_1__ base; } ;
struct TYPE_13__ {int* a; int* b; } ;
struct TYPE_12__ {int* aIdx; int* aPoslist; } ;
struct TYPE_11__ {TYPE_6__* pConfig; } ;
typedef TYPE_2__ Fts5Table ;
typedef TYPE_3__ Fts5Sorter ;
typedef TYPE_4__ Fts5PhraseIter ;
typedef TYPE_5__ Fts5Cursor ;
typedef int Fts5Context ;
typedef TYPE_6__ Fts5Config ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_4__*,int*) ;
 int FUNC_1 (TYPE_5__*,int,int**,int*) ;
 scalar_t__ FUNC_2 (int*,int) ;
 int FUNC_3 (int ,int,int**,int*) ;

__attribute__((used)) static int FUNC_4(
  Fts5Context *VAR_2,
  int VAR_3,
  Fts5PhraseIter *VAR_4,
  int *VAR_5
){
  int VAR_6 = VAR_1;
  Fts5Cursor *VAR_7 = (Fts5Cursor*)VAR_2;
  Fts5Config *VAR_8 = ((Fts5Table*)(VAR_7->base.pVtab))->pConfig;

  if( VAR_8->eDetail==VAR_0 ){
    Fts5Sorter *VAR_9 = VAR_7->pSorter;
    int VAR_10;
    if( VAR_9 ){
      int VAR_11 = (VAR_3==0 ? 0 : VAR_9->aIdx[VAR_3-1]);
      VAR_10 = VAR_9->aIdx[VAR_3] - VAR_11;
      VAR_4->a = &VAR_9->aPoslist[VAR_11];
    }else{
      VAR_6 = FUNC_3(VAR_7->pExpr, VAR_3, &VAR_4->a, &VAR_10);
    }
    if( VAR_6==VAR_1 ){
      VAR_4->b = &VAR_4->a[VAR_10];
      *VAR_5 = 0;
      FUNC_0(VAR_2, VAR_4, VAR_5);
    }
  }else{
    int VAR_12;
    VAR_6 = FUNC_1(VAR_7, VAR_3, &VAR_4->a, &VAR_12);
    if( VAR_6==VAR_1 ){
      VAR_4->b = &VAR_4->a[VAR_12];
      if( VAR_12<=0 ){
        *VAR_5 = -1;
      }else if( VAR_4->a[0]==0x01 ){
        VAR_4->a += 1 + FUNC_2(&VAR_4->a[1], *VAR_5);
      }else{
        *VAR_5 = 0;
      }
    }
  }

  return VAR_6;
}
