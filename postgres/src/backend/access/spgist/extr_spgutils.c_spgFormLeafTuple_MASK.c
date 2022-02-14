
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int size; int heapPtr; int nextOffset; } ;
struct TYPE_6__ {int attLeafType; } ;
typedef TYPE_1__ SpGistState ;
typedef TYPE_2__* SpGistLeafTuple ;
typedef int * ItemPointer ;
typedef int Datum ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;

SpGistLeafTuple
FUNC_4(SpGistState *VAR_3, ItemPointer VAR_4,
     Datum VAR_5, bool VAR_6)
{
 SpGistLeafTuple VAR_7;
 unsigned int VAR_8;


 VAR_8 = VAR_2;
 if (!VAR_6)
  VAR_8 += FUNC_1(&VAR_3->attLeafType, VAR_5);





 if (VAR_8 < VAR_1)
  VAR_8 = VAR_1;


 VAR_7 = (SpGistLeafTuple) FUNC_3(VAR_8);

 VAR_7->size = VAR_8;
 VAR_7->nextOffset = VAR_0;
 VAR_7->heapPtr = *VAR_4;
 if (!VAR_6)
  FUNC_2(FUNC_0(VAR_7), &VAR_3->attLeafType, VAR_5);

 return VAR_7;
}
