
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* mapTuplesToNodes; int nNodes; int * nodeLabels; } ;
typedef TYPE_1__ spgPickSplitOut ;
struct TYPE_6__ {int nTuples; } ;
typedef TYPE_2__ spgPickSplitIn ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(spgPickSplitIn *VAR_0, spgPickSplitOut *VAR_1, bool VAR_2,
    bool *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;


 *VAR_3 = 1;


 if (VAR_0->nTuples <= 1)
  return 0;


 VAR_5 = VAR_2 ? VAR_0->nTuples - 1 : VAR_0->nTuples;


 VAR_4 = VAR_1->mapTuplesToNodes[0];
 for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++)
 {
  if (VAR_1->mapTuplesToNodes[VAR_6] != VAR_4)
   return 0;
 }




 if (VAR_2 && VAR_1->mapTuplesToNodes[VAR_0->nTuples - 1] != VAR_4)
  *VAR_3 = 0;

 VAR_1->nNodes = 8;


 for (VAR_6 = 0; VAR_6 < VAR_0->nTuples; VAR_6++)
  VAR_1->mapTuplesToNodes[VAR_6] = VAR_6 % VAR_1->nNodes;


 if (VAR_1->nodeLabels)
 {
  Datum VAR_7 = VAR_1->nodeLabels[VAR_4];

  VAR_1->nodeLabels = (Datum *) FUNC_0(sizeof(Datum) * VAR_1->nNodes);
  for (VAR_6 = 0; VAR_6 < VAR_1->nNodes; VAR_6++)
   VAR_1->nodeLabels[VAR_6] = VAR_7;
 }



 return 1;
}
