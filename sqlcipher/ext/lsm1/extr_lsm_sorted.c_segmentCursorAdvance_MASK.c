
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ nRight; int lhs; int * aRhs; } ;
struct TYPE_14__ {scalar_t__ nPtr; int nTree; TYPE_1__* aPtr; } ;
struct TYPE_13__ {scalar_t__ pPg; int * pSeg; TYPE_3__* pLevel; } ;
typedef TYPE_1__ SegmentPtr ;
typedef TYPE_2__ MultiCursor ;
typedef TYPE_3__ Level ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(
  MultiCursor *VAR_1,
  int VAR_2,
  int VAR_3
){
  int VAR_4;
  SegmentPtr *VAR_5 = &VAR_1->aPtr[VAR_2];
  Level *VAR_6 = VAR_5->pLevel;
  int VAR_7;


  VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_3);
  if( VAR_4!=VAR_0 ) return VAR_4;

  VAR_7 = (VAR_6->nRight>0 && VAR_1->nPtr>VAR_6->nRight);
  if( VAR_7 && VAR_5->pPg==0 ){
    int VAR_8 = 0;
    if( (VAR_3==0)==(VAR_5->pSeg==&VAR_6->lhs) ){
      int VAR_9;
      if( VAR_3 ){
        SegmentPtr *VAR_10 = &VAR_1->aPtr[VAR_2 - 1 - (VAR_5->pSeg - VAR_6->aRhs)];
        for(VAR_9=0; VAR_9<VAR_6->nRight; VAR_9++){
          if( VAR_10[VAR_9+1].pPg ) break;
        }
        if( VAR_9==VAR_6->nRight ){
          VAR_8 = 1;
          VAR_4 = FUNC_2(VAR_1, VAR_10, 1);
        }
      }else{
        VAR_8 = 1;
        for(VAR_9=0; VAR_4==VAR_0 && VAR_9<VAR_6->nRight; VAR_9++){
          VAR_4 = FUNC_3(VAR_1, VAR_6, &VAR_1->aPtr[VAR_2+1+VAR_9]);
        }
      }
    }

    if( VAR_8 ){
      int VAR_11;
      for(VAR_11=VAR_1->nTree-1; VAR_11>0; VAR_11--){
        FUNC_0(VAR_1, VAR_11, VAR_3);
      }
    }
  }
  return VAR_4;
}
