
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {int title_urgent; int title_unfocused; int title_focused_inactive; int title_focused; } ;
struct TYPE_3__ {int urgent; int unfocused; int focused_inactive; int focused; } ;
struct TYPE_4__ {TYPE_1__ border_colors; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*,int *,int *) ;

void FUNC_2(struct sway_container *VAR_1) {
 FUNC_1(VAR_1, &VAR_1->title_focused,
   &VAR_0->border_colors.focused);
 FUNC_1(VAR_1, &VAR_1->title_focused_inactive,
   &VAR_0->border_colors.focused_inactive);
 FUNC_1(VAR_1, &VAR_1->title_unfocused,
   &VAR_0->border_colors.unfocused);
 FUNC_1(VAR_1, &VAR_1->title_urgent,
   &VAR_0->border_colors.urgent);
 FUNC_0(VAR_1);
}
