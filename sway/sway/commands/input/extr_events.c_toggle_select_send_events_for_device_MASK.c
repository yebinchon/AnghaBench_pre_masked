
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_input_device {int wlr_device; } ;
struct input_config {scalar_t__ send_events; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct input_config *VAR_0,
  struct sway_input_device *VAR_1, int VAR_2, char **VAR_3) {
 if (!FUNC_2(VAR_1->wlr_device)) {
  return;
 }


 VAR_0->send_events = FUNC_0(
   FUNC_3(VAR_1->wlr_device));

 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  if (FUNC_1(VAR_3[VAR_4]) == VAR_0->send_events) {
   ++VAR_4;
   break;
  }
 }
 VAR_0->send_events = FUNC_1(VAR_3[VAR_4 % VAR_2]);
}
