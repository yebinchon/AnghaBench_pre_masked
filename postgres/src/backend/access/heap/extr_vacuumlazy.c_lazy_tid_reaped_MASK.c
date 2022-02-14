
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_dead_tuples; scalar_t__ dead_tuples; } ;
typedef TYPE_1__ LVRelStats ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;


 scalar_t__ FUNC_0 (void*,void*,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(ItemPointer VAR_1, void *VAR_2)
{
 LVRelStats *VAR_3 = (LVRelStats *) VAR_2;
 ItemPointer VAR_4;

 VAR_4 = (ItemPointer) FUNC_0((void *) VAR_1,
        (void *) VAR_3->dead_tuples,
        VAR_3->num_dead_tuples,
        sizeof(ItemPointerData),
        VAR_0);

 return (VAR_4 != ((void*)0));
}
