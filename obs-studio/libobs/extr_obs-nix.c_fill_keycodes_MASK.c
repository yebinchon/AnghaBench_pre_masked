
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ xcb_keysym_t ;
struct TYPE_10__ {scalar_t__ keysyms_per_keycode; } ;
typedef TYPE_1__ xcb_get_keyboard_mapping_reply_t ;
typedef int xcb_get_keyboard_mapping_cookie_t ;
typedef TYPE_1__ xcb_generic_error_t ;
typedef int xcb_connection_t ;
struct xcb_setup_t {int min_keycode; int max_keycode; } ;
struct obs_core_hotkeys {TYPE_3__* platform_context; } ;
typedef int obs_key_t ;
struct TYPE_11__ {int min_keycode; int num_keysyms; int syms_per_code; int super_l_code; int super_r_code; int keysyms; int display; } ;
typedef TYPE_3__ obs_hotkeys_platform_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__ const*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__ const) ;
 int FUNC_6 (int *,int,int) ;
 scalar_t__* FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int *,int ,TYPE_1__**) ;
 struct xcb_setup_t* FUNC_9 (int *) ;

__attribute__((used)) static inline bool FUNC_10(struct obs_core_hotkeys *VAR_4)
{
 obs_hotkeys_platform_t *VAR_5 = VAR_4->platform_context;
 xcb_connection_t *VAR_6 = FUNC_0(VAR_5->display);
 const struct xcb_setup_t *VAR_7 = FUNC_9(VAR_6);
 xcb_get_keyboard_mapping_cookie_t VAR_8;
 xcb_get_keyboard_mapping_reply_t *VAR_9;
 xcb_generic_error_t *VAR_10 = ((void*)0);
 int VAR_11;

 int VAR_12 = VAR_7->min_keycode;
 int VAR_13 = VAR_7->max_keycode;

 VAR_5->min_keycode = VAR_7->min_keycode;

 VAR_8 = FUNC_6(VAR_6, VAR_12,
       VAR_13 - VAR_12 + 1);

 VAR_9 = FUNC_8(VAR_6, VAR_8, &VAR_10);

 if (VAR_10 || !VAR_9) {
  FUNC_2(VAR_0, "xcb_get_keyboard_mapping_reply failed");
  goto error1;
 }

 const xcb_keysym_t *VAR_14 = FUNC_7(VAR_9);
 int VAR_15 = (int)VAR_9->keysyms_per_keycode;

 VAR_5->num_keysyms = (VAR_13 - VAR_12 + 1) * VAR_15;
 VAR_5->syms_per_code = VAR_15;
 VAR_5->keysyms =
  FUNC_3(VAR_14, sizeof(xcb_keysym_t) * VAR_5->num_keysyms);

 for (VAR_11 = VAR_12; VAR_11 <= VAR_13; VAR_11++) {
  const xcb_keysym_t *VAR_16;
  obs_key_t VAR_17;

  VAR_16 = &VAR_14[(VAR_11 - VAR_12) * VAR_15];

  for (int VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
   if (!VAR_16[VAR_18])
    break;

   if (VAR_16[VAR_18] == VAR_2) {
    VAR_5->super_l_code = VAR_11;
    break;
   } else if (VAR_16[VAR_18] == VAR_3) {
    VAR_5->super_r_code = VAR_11;
    break;
   } else {
    VAR_17 = FUNC_5(VAR_5, VAR_16[VAR_18]);

    if (VAR_17 != VAR_1) {
     FUNC_1(VAR_5, VAR_17, VAR_11);
     break;
    }
   }
  }
 }

error1:
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);

 return VAR_10 != ((void*)0) || VAR_9 == ((void*)0);
}
