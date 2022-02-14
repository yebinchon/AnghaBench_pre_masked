
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int iFirst; int bTermEq; } ;
struct TYPE_6__ {int nSeg; int bRev; TYPE_1__* aSeg; TYPE_3__* aFirst; } ;
struct TYPE_5__ {scalar_t__ pLeaf; scalar_t__ iRowid; int bDel; int term; } ;
typedef TYPE_1__ Fts5SegIter ;
typedef TYPE_2__ Fts5Iter ;
typedef TYPE_3__ Fts5CResult ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(Fts5Iter *VAR_0, int VAR_1){
  int VAR_2;
  int VAR_3;
  int VAR_4;
  Fts5SegIter *VAR_5;
  Fts5SegIter *VAR_6;
  Fts5CResult *VAR_7 = &VAR_0->aFirst[VAR_1];

  FUNC_0( VAR_1<VAR_0->nSeg && VAR_1>0 );
  FUNC_0( VAR_0->bRev==0 || VAR_0->bRev==1 );

  if( VAR_1>=(VAR_0->nSeg/2) ){
    VAR_2 = (VAR_1 - VAR_0->nSeg/2) * 2;
    VAR_3 = VAR_2 + 1;
  }else{
    VAR_2 = VAR_0->aFirst[VAR_1*2].iFirst;
    VAR_3 = VAR_0->aFirst[VAR_1*2+1].iFirst;
  }
  VAR_5 = &VAR_0->aSeg[VAR_2];
  VAR_6 = &VAR_0->aSeg[VAR_3];

  VAR_7->bTermEq = 0;
  if( VAR_5->pLeaf==0 ){
    VAR_4 = VAR_3;
  }else if( VAR_6->pLeaf==0 ){
    VAR_4 = VAR_2;
  }else{
    int VAR_8 = FUNC_2(&VAR_5->term, &VAR_6->term);
    if( VAR_8==0 ){
      FUNC_1( VAR_3>VAR_2 );
      FUNC_1( VAR_3!=0 );
      VAR_7->bTermEq = 1;
      if( VAR_5->iRowid==VAR_6->iRowid ){
        VAR_5->bDel = VAR_6->bDel;
        return VAR_3;
      }
      VAR_8 = ((VAR_5->iRowid > VAR_6->iRowid)==VAR_0->bRev) ? -1 : +1;
    }
    FUNC_0( VAR_8!=0 );
    if( VAR_8<0 ){
      VAR_4 = VAR_2;
    }else{
      VAR_4 = VAR_3;
    }
  }

  VAR_7->iFirst = (u16)VAR_4;
  return 0;
}
