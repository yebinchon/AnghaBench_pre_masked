
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* result; int callback_state; scalar_t__ (* callback ) (int *,int ) ;} ;
struct TYPE_4__ {int tuples_removed; int num_index_tuples; } ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef TYPE_2__ GinVacuumState ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ) ;

ItemPointer
FUNC_3(GinVacuumState *VAR_0, ItemPointerData *VAR_1,
       int VAR_2, int *VAR_3)
{
 int VAR_4,
    VAR_5 = 0;
 ItemPointer VAR_6 = ((void*)0);




 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  if (VAR_0->callback(VAR_1 + VAR_4, VAR_0->callback_state))
  {
   VAR_0->result->tuples_removed += 1;
   if (!VAR_6)
   {




    VAR_6 = FUNC_1(sizeof(ItemPointerData) * VAR_2);
    FUNC_0(VAR_6, VAR_1, sizeof(ItemPointerData) * VAR_4);
   }
  }
  else
  {
   VAR_0->result->num_index_tuples += 1;
   if (VAR_6)
    VAR_6[VAR_5] = VAR_1[VAR_4];
   VAR_5++;
  }
 }

 *VAR_3 = VAR_5;
 return VAR_6;
}
