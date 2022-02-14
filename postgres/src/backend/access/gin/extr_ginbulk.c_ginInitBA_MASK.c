
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tree; scalar_t__ eas_used; int * entryallocator; scalar_t__ allocatedMemory; } ;
typedef int GinEntryAccumulator ;
typedef TYPE_1__ BuildAccumulator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int *,void*) ;

void
FUNC_1(BuildAccumulator *VAR_3)
{

 VAR_3->allocatedMemory = 0;
 VAR_3->entryallocator = ((void*)0);
 VAR_3->eas_used = 0;
 VAR_3->tree = FUNC_0(sizeof(GinEntryAccumulator),
        VAR_0,
        VAR_2,
        VAR_1,
        ((void*)0),
        (void *) VAR_3);
}
