
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bEof; } ;
struct TYPE_9__ {int iSwitchRowid; TYPE_2__ base; TYPE_1__* aFirst; TYPE_3__* aSeg; } ;
struct TYPE_8__ {scalar_t__ pLeaf; int iRowid; } ;
struct TYPE_6__ {size_t iFirst; } ;
typedef TYPE_3__ Fts5SegIter ;
typedef TYPE_4__ Fts5Iter ;



__attribute__((used)) static void FUNC_0(Fts5Iter *VAR_0){
  Fts5SegIter *VAR_1 = &VAR_0->aSeg[ VAR_0->aFirst[1].iFirst ];
  VAR_0->base.bEof = VAR_1->pLeaf==0;
  VAR_0->iSwitchRowid = VAR_1->iRowid;
}
