
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct wlr_event_pointer_axis {int orientation; double delta; double delta_discrete; int source; int time_msec; int * device; } ;
struct sway_cursor {int dummy; } ;
struct cmd_results {int dummy; } ;
typedef enum wlr_button_state { ____Placeholder_wlr_button_state } wlr_button_state ;
typedef enum wlr_axis_orientation { ____Placeholder_wlr_axis_orientation } wlr_axis_orientation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct cmd_results* FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sway_cursor*,struct wlr_event_pointer_axis*) ;
 int FUNC_2 (struct sway_cursor*,int *,int ,scalar_t__,int) ;
 char* VAR_11 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char**) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static struct cmd_results *FUNC_6(struct sway_cursor *VAR_12,
  char *VAR_13, char *VAR_14) {
 enum wlr_button_state VAR_15;
 uint32_t VAR_16;
 if (FUNC_5(VAR_13, "press") == 0) {
  VAR_15 = VAR_9;
 } else if (FUNC_5(VAR_13, "release") == 0) {
  VAR_15 = VAR_10;
 } else {
  return FUNC_0(VAR_0, VAR_11);
 }

 char *VAR_17 = ((void*)0);
 VAR_16 = FUNC_4(VAR_14, &VAR_17);
 if (VAR_17) {
  struct cmd_results *VAR_18 =
   FUNC_0(VAR_0, VAR_17);
  FUNC_3(VAR_17);
  return VAR_18;
 } else if (VAR_16 == VAR_5 || VAR_16 == VAR_2
   || VAR_16 == VAR_3 || VAR_16 == VAR_4) {

  enum wlr_axis_orientation VAR_19 =
   (VAR_16 == VAR_5 || VAR_16 == VAR_2)
   ? VAR_7
   : VAR_6;
  double VAR_20 = (VAR_16 == VAR_5 || VAR_16 == VAR_3)
   ? -1 : 1;
  struct wlr_event_pointer_axis VAR_21 = {
   .device = ((void*)0),
   .time_msec = 0,
   .source = VAR_8,
   .orientation = VAR_19,
   .delta = VAR_20 * 15,
   .delta_discrete = VAR_20
  };
  FUNC_1(VAR_12, &VAR_21);
  return FUNC_0(VAR_1, ((void*)0));
 } else if (!VAR_16) {
  return FUNC_0(VAR_0, "Unknown button %s", VAR_14);
 }
 FUNC_2(VAR_12, ((void*)0), 0, VAR_16, VAR_15);
 return FUNC_0(VAR_1, ((void*)0));
}
