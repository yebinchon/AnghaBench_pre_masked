
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct controller {int dummy; } ;
struct TYPE_2__ {int keycode; int action; scalar_t__ metastate; } ;
struct control_msg {TYPE_1__ inject_keycode; int type; } ;
typedef enum android_keycode { ____Placeholder_android_keycode } android_keycode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct controller*,struct control_msg*) ;

__attribute__((used)) static void
FUNC_2(struct controller *VAR_5, enum android_keycode VAR_6,
             int VAR_7, const char *VAR_8) {

    struct control_msg VAR_9;
    VAR_9.type = VAR_4;
    VAR_9.inject_keycode.keycode = VAR_6;
    VAR_9.inject_keycode.metastate = 0;

    if (VAR_7 & VAR_0) {
        VAR_9.inject_keycode.action = VAR_2;
        if (!FUNC_1(VAR_5, &VAR_9)) {
            FUNC_0("Could not request 'inject %s (DOWN)'", VAR_8);
            return;
        }
    }

    if (VAR_7 & VAR_1) {
        VAR_9.inject_keycode.action = VAR_3;
        if (!FUNC_1(VAR_5, &VAR_9)) {
            FUNC_0("Could not request 'inject %s (UP)'", VAR_8);
        }
    }
}
