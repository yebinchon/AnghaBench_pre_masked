
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xkb_keysym_t ;
typedef scalar_t__ xkb_keycode_t ;
typedef scalar_t__ uint32_t ;
struct cmd_results {int dummy; } ;
typedef enum binding_input_type { ____Placeholder_binding_input_type } binding_input_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char**) ;
 scalar_t__ FUNC_3 (char const*,char**) ;
 scalar_t__ FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char const*,int ) ;

__attribute__((used)) static struct cmd_results *FUNC_7(const char* VAR_5, bool VAR_6,
  uint32_t* VAR_7, enum binding_input_type* VAR_8) {
 if (*VAR_8 == VAR_1) {

  char *VAR_9 = ((void*)0);
  uint32_t VAR_10 = FUNC_2(VAR_5, &VAR_9);
  if (!VAR_10) {
   if (VAR_9) {
    struct cmd_results *VAR_11 =
     FUNC_0(VAR_3, VAR_9);
    FUNC_1(VAR_9);
    return VAR_11;
   } else {
    return FUNC_0(VAR_3,
      "Unknown button code %s", VAR_5);
   }
  }
  *VAR_7 = VAR_10;
 } else if (*VAR_8 == VAR_2) {

  char *VAR_12 = ((void*)0);
  uint32_t VAR_13 = FUNC_3(VAR_5, &VAR_12);
  if (!VAR_13) {
   if (VAR_12) {
    struct cmd_results *VAR_14 =
     FUNC_0(VAR_3, VAR_12);
    FUNC_1(VAR_12);
    return VAR_14;
   } else if (!VAR_13) {
    return FUNC_0(VAR_3, "Unknown button %s", VAR_5);
   }
  }
  *VAR_7 = VAR_13;
 } else if (*VAR_8 == VAR_0) {

  if (VAR_6) {
   char *VAR_15 = ((void*)0);
   uint32_t VAR_16 = FUNC_2(VAR_5, &VAR_15);
   FUNC_1(VAR_15);
   if (VAR_16) {
    *VAR_8 = VAR_1;
    *VAR_7 = VAR_16;
    return ((void*)0);
   }
  }

  xkb_keycode_t VAR_17 = FUNC_4(VAR_5, ((void*)0), 10);
  if (!FUNC_5(VAR_17)) {
   if (VAR_6) {
    return FUNC_0(VAR_3,
      "Invalid keycode or button code '%s'", VAR_5);
   } else {
    return FUNC_0(VAR_3,
      "Invalid keycode '%s'", VAR_5);
   }
  }
  *VAR_7 = VAR_17;
 } else {

  if (VAR_6) {
   char *VAR_18 = ((void*)0);
   uint32_t VAR_19 = FUNC_3(VAR_5, &VAR_18);
   if (VAR_18) {
    struct cmd_results *VAR_20 =
     FUNC_0(VAR_3, VAR_18);
    FUNC_1(VAR_18);
    return VAR_20;
   } else if (VAR_19) {
    *VAR_8 = VAR_2;
    *VAR_7 = VAR_19;
    return ((void*)0);
   }
  }

  xkb_keysym_t VAR_21 = FUNC_6(VAR_5,
    VAR_4);
  if (!VAR_21) {
   if (VAR_6) {
    return FUNC_0(VAR_3,
      "Unknown key or button '%s'", VAR_5);
   } else {
    return FUNC_0(VAR_3, "Unknown key '%s'", VAR_5);
   }
  }
  *VAR_7 = VAR_21;
 }
 return ((void*)0);
}
