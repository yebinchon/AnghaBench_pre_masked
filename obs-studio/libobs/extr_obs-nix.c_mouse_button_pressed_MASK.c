
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int response_type; int mask; } ;
typedef TYPE_1__ xcb_query_pointer_reply_t ;
typedef int xcb_query_pointer_cookie_t ;
struct TYPE_15__ {int detail; } ;
typedef TYPE_2__ xcb_input_raw_button_release_event_t ;
struct TYPE_16__ {int detail; } ;
typedef TYPE_3__ xcb_input_raw_button_press_event_t ;
typedef TYPE_1__ xcb_generic_event_t ;
typedef TYPE_1__ xcb_generic_error_t ;
struct TYPE_17__ {int event_type; } ;
typedef TYPE_6__ xcb_ge_event_t ;
typedef int xcb_connection_t ;
typedef int uint16_t ;
typedef int obs_key_t ;
struct TYPE_18__ {int* pressed; int* update; int* button_pressed; } ;
typedef TYPE_7__ obs_hotkeys_platform_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (TYPE_7__*,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 TYPE_1__* FUNC_6 (int *,int ,TYPE_1__**) ;

__attribute__((used)) static bool FUNC_7(xcb_connection_t *VAR_6,
     obs_hotkeys_platform_t *VAR_7, obs_key_t VAR_8)
{
 bool VAR_9 = 0;
 xcb_generic_error_t *VAR_10 = ((void*)0);
 xcb_query_pointer_cookie_t VAR_11;
 xcb_query_pointer_reply_t *VAR_12;

 VAR_11 = FUNC_5(VAR_6, FUNC_3(VAR_7, VAR_6));
 VAR_12 = FUNC_6(VAR_6, VAR_11, &VAR_10);

 if (VAR_10) {
  FUNC_0(VAR_0, "xcb_query_pointer_reply failed");
 } else {
  uint16_t VAR_13 = VAR_12->mask;

  switch (VAR_8) {
  case 158:
   VAR_9 = VAR_13 & VAR_1;
   break;
  case 147:
   VAR_9 = VAR_13 & VAR_3;
   break;
  case 136:
   VAR_9 = VAR_13 & VAR_2;
   break;
  default:;
  }
 }

 FUNC_1(VAR_12);
 FUNC_1(VAR_10);

 return VAR_9;
}
