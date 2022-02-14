
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct libinput_device {int dummy; } ;
struct json_object {int dummy; } ;
typedef int json_object ;
 int FUNC_0 (struct json_object*,struct json_object*) ;
 struct json_object* FUNC_1 () ;
 struct json_object* FUNC_2 (float) ;
 struct json_object* FUNC_3 (int) ;
 int * FUNC_4 () ;
 struct json_object* FUNC_5 (char const*) ;
 int FUNC_6 (int *,char*,struct json_object*) ;
 int FUNC_7 (struct libinput_device*) ;
 double FUNC_8 (struct libinput_device*) ;
 scalar_t__ FUNC_9 (struct libinput_device*) ;
 int FUNC_10 (struct libinput_device*,float*) ;
 scalar_t__ FUNC_11 (struct libinput_device*) ;
 int FUNC_12 (struct libinput_device*) ;
 int FUNC_13 (struct libinput_device*) ;
 int FUNC_14 (struct libinput_device*) ;
 scalar_t__ FUNC_15 (struct libinput_device*) ;
 scalar_t__ FUNC_16 (struct libinput_device*) ;
 scalar_t__ FUNC_17 (struct libinput_device*) ;
 int FUNC_18 (struct libinput_device*) ;
 scalar_t__ FUNC_19 (struct libinput_device*) ;
 int FUNC_20 (struct libinput_device*) ;
 int FUNC_21 (struct libinput_device*) ;
 int FUNC_22 (struct libinput_device*) ;
 scalar_t__ FUNC_23 (struct libinput_device*) ;
 scalar_t__ FUNC_24 (struct libinput_device*) ;
 int FUNC_25 (struct libinput_device*) ;
 int FUNC_26 (struct libinput_device*) ;
 int FUNC_27 (struct libinput_device*) ;
 int FUNC_28 (struct libinput_device*) ;
 int FUNC_29 (struct libinput_device*) ;
 scalar_t__ FUNC_30 (struct libinput_device*) ;

__attribute__((used)) static json_object *FUNC_31(struct libinput_device *VAR_0) {
 json_object *VAR_1 = FUNC_4();

 const char *VAR_2 = "unknown";
 switch (FUNC_25(VAR_0)) {
 case 132:
  VAR_2 = "enabled";
  break;
 case 133:
  VAR_2 = "disabled_on_external_mouse";
  break;
 case 134:
  VAR_2 = "disabled";
  break;
 }
 FUNC_6(VAR_1, "send_events",
   FUNC_5(VAR_2));

 if (FUNC_30(VAR_0) > 0) {
  const char *VAR_3 = "unknown";
  switch (FUNC_29(VAR_0)) {
  case 130:
   VAR_3 = "enabled";
   break;
  case 131:
   VAR_3 = "disabled";
   break;
  }
  FUNC_6(VAR_1, "tap", FUNC_5(VAR_3));

  const char *VAR_4 = "unknown";
  switch (FUNC_26(VAR_0)) {
  case 128:
   VAR_4 = "lrm";
   break;
  case 129:
   VAR_4 = "lmr";
   break;
  }
  FUNC_6(VAR_1, "tap_button_map",
    FUNC_5(VAR_4));

  const char* VAR_5 = "unknown";
  switch (FUNC_27(VAR_0)) {
  case 145:
   VAR_5 = "enabled";
   break;
  case 146:
   VAR_5 = "disabled";
   break;
  }
  FUNC_6(VAR_1, "tap_drag",
    FUNC_5(VAR_5));

  const char *VAR_6 = "unknown";
  switch (FUNC_28(VAR_0)) {
  case 143:
   VAR_6 = "enabled";
   break;
  case 144:
   VAR_6 = "disabled";
   break;
  }
  FUNC_6(VAR_1, "tap_drag_lock",
    FUNC_5(VAR_6));
 }

 if (FUNC_9(VAR_0)) {
  double VAR_7 = FUNC_8(VAR_0);
  FUNC_6(VAR_1, "accel_speed",
    FUNC_2(VAR_7));

  const char *VAR_8 = "unknown";
  switch (FUNC_7(VAR_0)) {
  case 150:
   VAR_8 = "none";
   break;
  case 151:
   VAR_8 = "flat";
   break;
  case 152:
   VAR_8 = "adaptive";
   break;
  }
  FUNC_6(VAR_1, "accel_profile",
    FUNC_5(VAR_8));
 }

 if (FUNC_24(VAR_0)) {
  const char *VAR_9 = "disabled";
  if (FUNC_23(VAR_0)) {
   VAR_9 = "enabled";
  }
  FUNC_6(VAR_1, "natural_scroll",
    FUNC_5(VAR_9));
 }

 if (FUNC_17(VAR_0)) {
  const char *VAR_10 = "disabled";
  if (FUNC_16(VAR_0) != 0) {
   VAR_10 = "enabled";
  }
  FUNC_6(VAR_1, "left_handed",
    FUNC_5(VAR_10));
 }

 uint32_t VAR_11 = FUNC_13(VAR_0);
 if ((VAR_11 & ~147) != 0) {
  const char *VAR_12 = "unknown";
  switch (FUNC_12(VAR_0)) {
  case 147:
   VAR_12 = "none";
   break;
  case 149:
   VAR_12 = "button_areas";
   break;
  case 148:
   VAR_12 = "clickfinger";
   break;
  }
  FUNC_6(VAR_1, "click_method",
    FUNC_5(VAR_12));
 }

 if (FUNC_19(VAR_0)) {
  const char *VAR_13 = "unknown";
  switch (FUNC_18(VAR_0)) {
  case 139:
   VAR_13 = "enabled";
   break;
  case 140:
   VAR_13 = "disabled";
   break;
  }
  FUNC_6(VAR_1, "middle_emulation",
    FUNC_5(VAR_13));
 }

 uint32_t VAR_14 = FUNC_22(VAR_0);
 if ((VAR_14 & ~136) != 0) {
  const char *VAR_15 = "unknown";
  switch (FUNC_21(VAR_0)) {
  case 136:
   VAR_15 = "none";
   break;
  case 138:
   VAR_15 = "two_finger";
   break;
  case 137:
   VAR_15 = "edge";
   break;
  case 135:
   VAR_15 = "on_button_down";
   break;
  }
  FUNC_6(VAR_1, "scroll_method",
    FUNC_5(VAR_15));

  if ((VAR_14 & 135) != 0) {
   uint32_t VAR_16 = FUNC_20(VAR_0);
   FUNC_6(VAR_1, "scroll_button",
     FUNC_3(VAR_16));
  }
 }

 if (FUNC_15(VAR_0)) {
  const char *VAR_17 = "unknown";
  switch (FUNC_14(VAR_0)) {
  case 141:
   VAR_17 = "enabled";
   break;
  case 142:
   VAR_17 = "disabled";
   break;
  }
  FUNC_6(VAR_1, "dwt", FUNC_5(VAR_17));
 }

 if (FUNC_11(VAR_0)) {
  float VAR_18[6];
  FUNC_10(VAR_0, VAR_18);
  struct json_object* VAR_19 = FUNC_1();
  struct json_object* VAR_20;
  for (int VAR_21 = 0; VAR_21 < 6; VAR_21++) {
   VAR_20 = FUNC_2(VAR_18[VAR_21]);
   FUNC_0(VAR_19, VAR_20);
  }
  FUNC_6(VAR_1, "calibration_matrix", VAR_19);
 }

 return VAR_1;
}
