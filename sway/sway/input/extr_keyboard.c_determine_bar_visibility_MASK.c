
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bar_config {int modifier; int visible_by_modifier; int hidden_state; int mode; } ;
struct TYPE_4__ {TYPE_1__* bars; } ;
struct TYPE_3__ {int length; struct bar_config** items; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct bar_config*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->bars->length; ++VAR_2) {
  struct bar_config *VAR_3 = VAR_0->bars->items[VAR_2];
  if (VAR_3->modifier == 0) {
   continue;
  }

  bool VAR_4 = (~VAR_1 & VAR_3->modifier) == 0;
  if (VAR_3->visible_by_modifier != VAR_4) {



   if (VAR_3->visible_by_modifier
     || FUNC_1(VAR_3->mode, VAR_3->hidden_state) == 0) {
    VAR_3->visible_by_modifier = VAR_4;
    FUNC_0(VAR_3);
   }
  }
 }
}
