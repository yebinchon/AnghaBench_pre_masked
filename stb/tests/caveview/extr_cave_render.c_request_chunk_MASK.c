
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int request_cx; int request_cy; int request_received; } ;
typedef TYPE_1__ mesh_worker ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(int VAR_5, int VAR_6)
{
   int VAR_7;
   for (VAR_7=0; VAR_7 < VAR_3; ++VAR_7) {
      mesh_worker *VAR_8 = &VAR_2[VAR_7];
      if (VAR_8->state == VAR_0) {
         VAR_8->request_cx = VAR_5;
         VAR_8->request_cy = VAR_6;
         VAR_8->state = VAR_1;
         FUNC_0(VAR_8->request_received);
         ++VAR_4;
         return 1;
      }
   }
   return 0;
}
