
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct status_line {int clicked; int write_fd; int click_events; } ;
struct json_object {int dummy; } ;
struct i3bar_block {scalar_t__ instance; scalar_t__ name; } ;
typedef enum hotspot_event_handling { ____Placeholder_hotspot_event_handling } hotspot_event_handling ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct json_object* FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct json_object*,char*,int ) ;
 int FUNC_6 (struct json_object*) ;
 int FUNC_7 (struct json_object*) ;
 int FUNC_8 (struct status_line*,char*) ;
 int FUNC_9 (int ,char*,scalar_t__) ;

enum hotspot_event_handling FUNC_10(struct status_line *VAR_3,
  struct i3bar_block *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10,
  uint32_t VAR_11) {
 FUNC_9(VAR_2, "block %s clicked", VAR_4->name);
 if (!VAR_4->name || !VAR_3->click_events) {
  return VAR_1;
 }

 struct json_object *VAR_12 = FUNC_3();
 FUNC_5(VAR_12, "name",
   FUNC_4(VAR_4->name));
 if (VAR_4->instance) {
  FUNC_5(VAR_12, "instance",
    FUNC_4(VAR_4->instance));
 }

 FUNC_5(VAR_12, "button",
   FUNC_2(FUNC_1(VAR_11)));
 FUNC_5(VAR_12, "event", FUNC_2(VAR_11));
 FUNC_5(VAR_12, "x", FUNC_2(VAR_5));
 FUNC_5(VAR_12, "y", FUNC_2(VAR_6));
 FUNC_5(VAR_12, "relative_x", FUNC_2(VAR_7));
 FUNC_5(VAR_12, "relative_y", FUNC_2(VAR_8));
 FUNC_5(VAR_12, "width", FUNC_2(VAR_9));
 FUNC_5(VAR_12, "height", FUNC_2(VAR_10));
 if (FUNC_0(VAR_3->write_fd, "%s%s\n", VAR_3->clicked ? "," : "",
    FUNC_7(VAR_12)) < 0) {
  FUNC_8(VAR_3, "[failed to write click event]");
 }
 VAR_3->clicked = 1;
 FUNC_6(VAR_12);
 return VAR_0;
}
