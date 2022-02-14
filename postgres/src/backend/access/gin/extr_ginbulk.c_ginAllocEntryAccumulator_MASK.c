
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eas_used; int * entryallocator; int allocatedMemory; } ;
typedef int RBTNode ;
typedef int GinEntryAccumulator ;
typedef TYPE_1__ BuildAccumulator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static RBTNode *
FUNC_2(void *VAR_1)
{
 BuildAccumulator *VAR_2 = (BuildAccumulator *) VAR_1;
 GinEntryAccumulator *VAR_3;





 if (VAR_2->entryallocator == ((void*)0) || VAR_2->eas_used >= VAR_0)
 {
  VAR_2->entryallocator = FUNC_1(sizeof(GinEntryAccumulator) * VAR_0);
  VAR_2->allocatedMemory += FUNC_0(VAR_2->entryallocator);
  VAR_2->eas_used = 0;
 }


 VAR_3 = VAR_2->entryallocator + VAR_2->eas_used;
 VAR_2->eas_used++;

 return (RBTNode *) VAR_3;
}
