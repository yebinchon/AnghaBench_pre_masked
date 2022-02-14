
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {TYPE_1__* aFirst; TYPE_3__* aSeg; } ;
struct TYPE_7__ {int n; int const* p; } ;
struct TYPE_8__ {TYPE_2__ term; } ;
struct TYPE_6__ {size_t iFirst; } ;
typedef TYPE_3__ Fts5SegIter ;
typedef TYPE_4__ Fts5Iter ;



__attribute__((used)) static const u8 *FUNC_0(Fts5Iter *VAR_0, int *VAR_1){
  Fts5SegIter *VAR_2 = &VAR_0->aSeg[ VAR_0->aFirst[1].iFirst ];
  *VAR_1 = VAR_2->term.n;
  return VAR_2->term.p;
}
