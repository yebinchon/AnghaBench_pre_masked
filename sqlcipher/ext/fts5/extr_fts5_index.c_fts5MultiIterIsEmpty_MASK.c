
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ rc; } ;
struct TYPE_9__ {TYPE_1__* aFirst; TYPE_2__* aSeg; } ;
struct TYPE_8__ {scalar_t__ nPos; scalar_t__ pLeaf; } ;
struct TYPE_7__ {size_t iFirst; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Iter ;
typedef TYPE_4__ Fts5Index ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(Fts5Index *VAR_1, Fts5Iter *VAR_2){
  Fts5SegIter *VAR_3 = &VAR_2->aSeg[VAR_2->aFirst[1].iFirst];
  return (VAR_1->rc==VAR_0 && VAR_3->pLeaf && VAR_3->nPos==0);
}
