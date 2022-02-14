
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


struct TYPE_15__ {scalar_t__ rc; } ;
struct TYPE_12__ {int bEof; } ;
struct TYPE_14__ {TYPE_6__* pIndex; TYPE_3__ base; TYPE_1__* aFirst; TYPE_4__* aSeg; } ;
struct TYPE_11__ {scalar_t__* p; } ;
struct TYPE_13__ {scalar_t__ pLeaf; TYPE_2__ term; } ;
struct TYPE_10__ {size_t iFirst; } ;
typedef TYPE_4__ Fts5SegIter ;
typedef TYPE_5__ Fts5Iter ;
typedef int Fts5IndexIter ;
typedef TYPE_6__ Fts5Index ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int ,int ) ;

int FUNC_4(Fts5IndexIter *VAR_2){
  Fts5Iter *VAR_3 = (Fts5Iter*)VAR_2;
  Fts5Index *VAR_4 = VAR_3->pIndex;

  FUNC_0( VAR_3->pIndex->rc==VAR_1 );

  FUNC_3(VAR_4, VAR_3, 0, 0);
  if( VAR_4->rc==VAR_1 ){
    Fts5SegIter *VAR_5 = &VAR_3->aSeg[ VAR_3->aFirst[1].iFirst ];
    if( VAR_5->pLeaf && VAR_5->term.p[0]!=VAR_0 ){
      FUNC_1(VAR_5->pLeaf);
      VAR_5->pLeaf = 0;
      VAR_3->base.bEof = 1;
    }
  }

  return FUNC_2(VAR_3->pIndex);
}
