
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* slabMemoryBegin; char* slabMemoryEnd; int slabAllocatorUsed; TYPE_2__* slabFreeHead; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_6__ {struct TYPE_6__* nextfree; } ;
typedef TYPE_2__ SlabSlot ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(Tuplesortstate *VAR_1, int VAR_2)
{
 if (VAR_2 > 0)
 {
  char *VAR_3;
  int VAR_4;

  VAR_1->slabMemoryBegin = FUNC_1(VAR_2 * VAR_0);
  VAR_1->slabMemoryEnd = VAR_1->slabMemoryBegin +
   VAR_2 * VAR_0;
  VAR_1->slabFreeHead = (SlabSlot *) VAR_1->slabMemoryBegin;
  FUNC_0(VAR_1, VAR_2 * VAR_0);

  VAR_3 = VAR_1->slabMemoryBegin;
  for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++)
  {
   ((SlabSlot *) VAR_3)->nextfree = (SlabSlot *) (VAR_3 + VAR_0);
   VAR_3 += VAR_0;
  }
  ((SlabSlot *) VAR_3)->nextfree = ((void*)0);
 }
 else
 {
  VAR_1->slabMemoryBegin = VAR_1->slabMemoryEnd = ((void*)0);
  VAR_1->slabFreeHead = ((void*)0);
 }
 VAR_1->slabAllocatorUsed = 1;
}
