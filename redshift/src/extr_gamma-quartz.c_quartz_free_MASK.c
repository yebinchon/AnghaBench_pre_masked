
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int display_count; struct TYPE_4__* displays; struct TYPE_4__* saved_ramps; } ;
typedef TYPE_1__ quartz_state_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(quartz_state_t *VAR_0)
{
 if (VAR_0->displays != ((void*)0)) {
  for (int VAR_1 = 0; VAR_1 < VAR_0->display_count; VAR_1++) {
   FUNC_0(VAR_0->displays[VAR_1].saved_ramps);
  }
 }
 FUNC_0(VAR_0->displays);
 FUNC_0(VAR_0);
}
