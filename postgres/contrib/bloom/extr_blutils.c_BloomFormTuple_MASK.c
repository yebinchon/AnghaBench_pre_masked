
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nColumns; int sizeOfBloomTuple; } ;
struct TYPE_6__ {int sign; int heapPtr; } ;
typedef int * ItemPointer ;
typedef int Datum ;
typedef TYPE_1__ BloomTuple ;
typedef TYPE_2__ BloomState ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int) ;

BloomTuple *
FUNC_2(BloomState *VAR_0, ItemPointer VAR_1, Datum *VAR_2, bool *VAR_3)
{
 int VAR_4;
 BloomTuple *VAR_5 = (BloomTuple *) FUNC_0(VAR_0->sizeOfBloomTuple);

 VAR_5->heapPtr = *VAR_1;


 for (VAR_4 = 0; VAR_4 < VAR_0->nColumns; VAR_4++)
 {

  if (VAR_3[VAR_4])
   continue;

  FUNC_1(VAR_0, VAR_5->sign, VAR_2[VAR_4], VAR_4);
 }

 return VAR_5;
}
