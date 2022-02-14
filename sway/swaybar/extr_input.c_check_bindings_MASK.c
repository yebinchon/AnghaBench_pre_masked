
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaybar_binding {scalar_t__ button; int release; } ;
struct swaybar {TYPE_2__* config; } ;
struct TYPE_4__ {TYPE_1__* bindings; } ;
struct TYPE_3__ {int length; struct swaybar_binding** items; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct swaybar*,struct swaybar_binding*) ;

__attribute__((used)) static bool FUNC_1(struct swaybar *VAR_1, uint32_t VAR_2,
  uint32_t VAR_3) {
 bool VAR_4 = VAR_3 == VAR_0;
 for (int VAR_5 = 0; VAR_5 < VAR_1->config->bindings->length; VAR_5++) {
  struct swaybar_binding *VAR_6 = VAR_1->config->bindings->items[VAR_5];
  if (VAR_6->button == VAR_2 && VAR_6->release == VAR_4) {
   FUNC_0(VAR_1, VAR_6);
   return 1;
  }
 }
 return 0;
}
