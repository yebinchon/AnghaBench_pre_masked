
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int hasPrefix; int nodeLabels; int nNodes; int prefixDatum; int allTheSame; int returnData; int level; int traversalValue; int traversalMemoryContext; int reconstructedValue; int norderbys; int nkeys; int orderbys; int scankeys; } ;
typedef TYPE_1__ spgInnerConsistentIn ;
struct TYPE_14__ {scalar_t__ prefixSize; int nNodes; int allTheSame; } ;
struct TYPE_13__ {int state; int want_itup; int traversalCxt; int numberOfNonNullOrderBys; int numberOfKeys; int orderByData; int keyData; } ;
struct TYPE_12__ {int level; int traversalValue; int value; } ;
typedef TYPE_2__ SpGistSearchItem ;
typedef TYPE_3__* SpGistScanOpaque ;
typedef TYPE_4__* SpGistInnerTuple ;


 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(spgInnerConsistentIn *VAR_0,
       SpGistScanOpaque VAR_1,
       SpGistSearchItem *VAR_2,
       SpGistInnerTuple VAR_3)
{
 VAR_0->scankeys = VAR_1->keyData;
 VAR_0->orderbys = VAR_1->orderByData;
 VAR_0->nkeys = VAR_1->numberOfKeys;
 VAR_0->norderbys = VAR_1->numberOfNonNullOrderBys;
 VAR_0->reconstructedValue = VAR_2->value;
 VAR_0->traversalMemoryContext = VAR_1->traversalCxt;
 VAR_0->traversalValue = VAR_2->traversalValue;
 VAR_0->level = VAR_2->level;
 VAR_0->returnData = VAR_1->want_itup;
 VAR_0->allTheSame = VAR_3->allTheSame;
 VAR_0->hasPrefix = (VAR_3->prefixSize > 0);
 VAR_0->prefixDatum = FUNC_0(VAR_3, &VAR_1->state);
 VAR_0->nNodes = VAR_3->nNodes;
 VAR_0->nodeLabels = FUNC_1(&VAR_1->state, VAR_3);
}
