
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_25__ {scalar_t__ rc; } ;
struct TYPE_21__ {scalar_t__ bEof; } ;
struct TYPE_24__ {scalar_t__ bSkipEmpty; int (* xSetOutputs ) (TYPE_4__*,TYPE_3__*) ;TYPE_2__* aFirst; TYPE_3__* aSeg; TYPE_1__ base; } ;
struct TYPE_23__ {scalar_t__ pLeaf; scalar_t__ nPos; int (* xNext ) (TYPE_5__*,TYPE_3__*,int*) ;scalar_t__ pDlidx; } ;
struct TYPE_22__ {int iFirst; } ;
typedef TYPE_3__ Fts5SegIter ;
typedef TYPE_4__ Fts5Iter ;
typedef TYPE_5__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,TYPE_3__**) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_3__*,int*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(
  Fts5Index *VAR_1,
  Fts5Iter *VAR_2,
  int VAR_3,
  i64 VAR_4
){
  int VAR_5 = VAR_3;
  FUNC_0( VAR_2->base.bEof==0 );
  while( VAR_1->rc==VAR_0 ){
    int VAR_6 = VAR_2->aFirst[1].iFirst;
    int VAR_7 = 0;
    Fts5SegIter *VAR_8 = &VAR_2->aSeg[VAR_6];
    FUNC_0( VAR_1->rc==VAR_0 );
    if( VAR_5 && VAR_8->pDlidx ){
      FUNC_5(VAR_1, VAR_8, VAR_4);
    }else{
      VAR_8->xNext(VAR_1, VAR_8, &VAR_7);
    }

    if( VAR_8->pLeaf==0 || VAR_7
     || FUNC_2(VAR_2, VAR_6, &VAR_8)
    ){
      FUNC_3(VAR_1, VAR_2, VAR_6, 1);
      FUNC_4(VAR_2);
      VAR_8 = &VAR_2->aSeg[VAR_2->aFirst[1].iFirst];
      if( VAR_8->pLeaf==0 ) return;
    }

    FUNC_1(VAR_1, VAR_2);
    FUNC_0( VAR_8==&VAR_2->aSeg[VAR_2->aFirst[1].iFirst] && VAR_8->pLeaf );
    if( VAR_2->bSkipEmpty==0 || VAR_8->nPos ){
      VAR_2->xSetOutputs(VAR_2, VAR_8);
      return;
    }
    VAR_5 = 0;
  }
}
