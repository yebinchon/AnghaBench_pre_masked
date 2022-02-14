
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_cursor {scalar_t__ pressed_button_count; int seat; } ;
struct seat_config {int hide_cursor_timeout; } ;


 struct seat_config* FUNC_0 (int ) ;
 struct seat_config* FUNC_1 (char*) ;

int FUNC_2(struct sway_cursor *VAR_0) {
 if (VAR_0->pressed_button_count > 0) {

  return 0;
 }

 struct seat_config *VAR_1 = FUNC_0(VAR_0->seat);
 if (!VAR_1) {
  VAR_1 = FUNC_1("*");
 }
 int VAR_2 = VAR_1 ? VAR_1->hide_cursor_timeout : 0;
 if (VAR_2 < 0) {
  VAR_2 = 0;
 }
 return VAR_2;
}
