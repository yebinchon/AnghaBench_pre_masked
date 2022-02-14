
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct sway_container {int dummy; } ;
struct TYPE_7__ {int length; struct sway_container** items; } ;
typedef TYPE_1__ list_t ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;







 int FUNC_0 (TYPE_1__*,struct wlr_box*) ;
 int FUNC_1 (TYPE_1__*,struct wlr_box*) ;
 int FUNC_2 (TYPE_1__*,struct wlr_box*) ;
 int FUNC_3 (TYPE_1__*,struct wlr_box*) ;
 int FUNC_4 (struct sway_container*) ;

__attribute__((used)) static void FUNC_5(list_t *VAR_0,
  enum sway_container_layout VAR_1, struct wlr_box *VAR_2) {

 switch (VAR_1) {
 case 132:
  FUNC_0(VAR_0, VAR_2);
  break;
 case 128:
  FUNC_3(VAR_0, VAR_2);
  break;
 case 129:
  FUNC_2(VAR_0, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_0, VAR_2);
  break;
 case 131:
  FUNC_0(VAR_0, VAR_2);
  break;
 }


 for (int VAR_3 = 0; VAR_3 < VAR_0->length; ++VAR_3) {
  struct sway_container *VAR_4 = VAR_0->items[VAR_3];
  FUNC_4(VAR_4);
 }
}
