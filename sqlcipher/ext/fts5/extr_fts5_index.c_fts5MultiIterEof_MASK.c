
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ rc; } ;
struct TYPE_10__ {int bEof; } ;
struct TYPE_11__ {TYPE_3__ base; TYPE_2__* aFirst; TYPE_1__* aSeg; } ;
struct TYPE_9__ {size_t iFirst; } ;
struct TYPE_8__ {scalar_t__ pLeaf; } ;
typedef TYPE_4__ Fts5Iter ;
typedef TYPE_5__ Fts5Index ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(Fts5Index *VAR_0, Fts5Iter *VAR_1){
  FUNC_0( VAR_0->rc
      || (VAR_1->aSeg[ VAR_1->aFirst[1].iFirst ].pLeaf==0)==VAR_1->base.bEof
  );
  return (VAR_0->rc || VAR_1->base.bEof);
}
