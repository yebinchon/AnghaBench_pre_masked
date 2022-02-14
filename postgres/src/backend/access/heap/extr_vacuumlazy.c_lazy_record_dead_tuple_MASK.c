
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num_dead_tuples; size_t max_dead_tuples; int * dead_tuples; } ;
typedef TYPE_1__ LVRelStats ;
typedef int * ItemPointer ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;

__attribute__((used)) static void
FUNC_1(LVRelStats *VAR_1,
        ItemPointer VAR_2)
{





 if (VAR_1->num_dead_tuples < VAR_1->max_dead_tuples)
 {
  VAR_1->dead_tuples[VAR_1->num_dead_tuples] = *VAR_2;
  VAR_1->num_dead_tuples++;
  FUNC_0(VAR_0,
          VAR_1->num_dead_tuples);
 }
}
