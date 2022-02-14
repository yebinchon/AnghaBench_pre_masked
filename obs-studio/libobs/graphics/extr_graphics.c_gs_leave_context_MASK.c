
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_leave_context ) (int ) ;} ;
struct TYPE_5__ {int mutex; int device; TYPE_1__ exports; int ref; } ;
typedef TYPE_2__ graphics_t ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_4(void)
{
 if (FUNC_0("gs_leave_context")) {
  if (!FUNC_1(&VAR_0->ref)) {
   graphics_t *VAR_1 = VAR_0;

   VAR_1->exports.device_leave_context(
    VAR_1->device);
   FUNC_2(&VAR_1->mutex);
   VAR_0 = ((void*)0);
  }
 }
}
