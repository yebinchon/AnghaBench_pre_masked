
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_query_keymap_reply_t ;
typedef int xcb_generic_error_t ;
typedef int xcb_connection_t ;
struct TYPE_4__ {size_t num; int * array; } ;
struct keycode_list {TYPE_1__ list; } ;
typedef size_t obs_key_t ;
struct TYPE_5__ {int super_r_code; int super_l_code; struct keycode_list* keycodes; } ;
typedef TYPE_2__ obs_hotkeys_platform_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int **) ;

__attribute__((used)) static bool FUNC_5(xcb_connection_t *VAR_2,
   obs_hotkeys_platform_t *VAR_3, obs_key_t VAR_4)
{
 struct keycode_list *VAR_5 = &VAR_3->keycodes[VAR_4];
 xcb_generic_error_t *VAR_6 = ((void*)0);
 xcb_query_keymap_reply_t *VAR_7;
 bool VAR_8 = 0;

 VAR_7 = FUNC_4(VAR_2, FUNC_3(VAR_2),
           &VAR_6);
 if (VAR_6) {
  FUNC_0(VAR_0, "xcb_query_keymap failed");

 } else if (VAR_4 == VAR_1) {
  VAR_8 = FUNC_2(VAR_7, VAR_3->super_l_code) ||
     FUNC_2(VAR_7, VAR_3->super_r_code);

 } else {
  for (size_t VAR_9 = 0; VAR_9 < VAR_5->list.num; VAR_9++) {
   if (FUNC_2(VAR_7, VAR_5->list.array[VAR_9])) {
    VAR_8 = 1;
    break;
   }
  }
 }

 FUNC_1(VAR_7);
 FUNC_1(VAR_6);
 return VAR_8;
}
