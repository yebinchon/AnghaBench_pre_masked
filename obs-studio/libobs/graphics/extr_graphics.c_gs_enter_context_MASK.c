
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* device_enter_context ) (int ) ;} ;
struct TYPE_7__ {int ref; int device; TYPE_1__ exports; int mutex; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_5(graphics_t *VAR_1)
{
 if (!FUNC_3(VAR_1, "gs_enter_context"))
  return;

 bool VAR_2 = VAR_0 == VAR_1;
 if (VAR_0 && !VAR_2) {
  while (VAR_0)
   FUNC_0();
 }

 if (!VAR_2) {
  FUNC_2(&VAR_1->mutex);
  VAR_1->exports.device_enter_context(VAR_1->device);
  VAR_0 = VAR_1;
 }

 FUNC_1(&VAR_1->ref);
}
