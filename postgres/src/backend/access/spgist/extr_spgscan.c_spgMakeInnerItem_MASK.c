
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int ** traversalValues; int * reconstructedValues; scalar_t__* levelAdds; } ;
typedef TYPE_3__ spgInnerConsistentOut ;
struct TYPE_19__ {int t_tid; } ;
struct TYPE_14__ {int attlen; int attbyval; } ;
struct TYPE_15__ {TYPE_1__ attLeafType; } ;
struct TYPE_18__ {TYPE_2__ state; } ;
struct TYPE_17__ {int isLeaf; int recheck; int recheckDistances; int * traversalValue; int value; scalar_t__ level; int heapPtr; } ;
typedef TYPE_4__ SpGistSearchItem ;
typedef TYPE_5__* SpGistScanOpaque ;
typedef TYPE_6__* SpGistNodeTuple ;
typedef int Datum ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int,double*) ;

__attribute__((used)) static SpGistSearchItem *
FUNC_2(SpGistScanOpaque VAR_0,
     SpGistSearchItem *VAR_1,
     SpGistNodeTuple VAR_2,
     spgInnerConsistentOut *VAR_3, int VAR_4, bool VAR_5,
     double *VAR_6)
{
 SpGistSearchItem *VAR_7 = FUNC_1(VAR_0, VAR_5, VAR_6);

 VAR_7->heapPtr = VAR_2->t_tid;
 VAR_7->level = VAR_3->levelAdds ? VAR_1->level + VAR_3->levelAdds[VAR_4]
  : VAR_1->level;


 VAR_7->value = VAR_3->reconstructedValues
  ? FUNC_0(VAR_3->reconstructedValues[VAR_4],
     VAR_0->state.attLeafType.attbyval,
     VAR_0->state.attLeafType.attlen)
  : (Datum) 0;






 VAR_7->traversalValue =
  VAR_3->traversalValues ? VAR_3->traversalValues[VAR_4] : ((void*)0);

 VAR_7->isLeaf = 0;
 VAR_7->recheck = 0;
 VAR_7->recheckDistances = 0;

 return VAR_7;
}
