
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ numberOfOrderBys; TYPE_2__* xs_orderbynulls; TYPE_2__* xs_orderbyvals; int opaque; } ;
struct TYPE_6__ {TYPE_2__* deadTupleStorage; } ;
struct TYPE_7__ {struct TYPE_7__* infDistances; struct TYPE_7__* zeroDistances; struct TYPE_7__* nonNullOrderByOffsets; struct TYPE_7__* orderByTypes; TYPE_1__ state; struct TYPE_7__* keyData; int traversalCxt; int tempCxt; } ;
typedef TYPE_2__* SpGistScanOpaque ;
typedef TYPE_3__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(IndexScanDesc VAR_0)
{
 SpGistScanOpaque VAR_1 = (SpGistScanOpaque) VAR_0->opaque;

 FUNC_0(VAR_1->tempCxt);
 FUNC_0(VAR_1->traversalCxt);

 if (VAR_1->keyData)
  FUNC_1(VAR_1->keyData);

 if (VAR_1->state.deadTupleStorage)
  FUNC_1(VAR_1->state.deadTupleStorage);

 if (VAR_0->numberOfOrderBys > 0)
 {
  FUNC_1(VAR_1->orderByTypes);
  FUNC_1(VAR_1->nonNullOrderByOffsets);
  FUNC_1(VAR_1->zeroDistances);
  FUNC_1(VAR_1->infDistances);
  FUNC_1(VAR_0->xs_orderbyvals);
  FUNC_1(VAR_0->xs_orderbynulls);
 }

 FUNC_1(VAR_1);
}
