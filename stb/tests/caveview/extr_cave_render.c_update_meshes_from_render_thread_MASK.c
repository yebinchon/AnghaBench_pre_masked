
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int rm; } ;
typedef TYPE_1__ mesh_worker ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;

void FUNC_1(void)
{
   int VAR_5;
   for (VAR_5=0; VAR_5 < VAR_3; ++VAR_5) {
      mesh_worker *VAR_6 = &VAR_2[VAR_5];
      if (VAR_6->state == VAR_1) {
         FUNC_0(&VAR_6->rm);
         ++VAR_4;
         VAR_6->state = VAR_0;
      }
   }
}
