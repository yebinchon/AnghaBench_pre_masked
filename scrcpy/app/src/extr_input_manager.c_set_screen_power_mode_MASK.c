
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct controller {int dummy; } ;
struct TYPE_2__ {int mode; } ;
struct control_msg {TYPE_1__ set_screen_power_mode; int type; } ;
typedef enum screen_power_mode { ____Placeholder_screen_power_mode } screen_power_mode ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct controller*,struct control_msg*) ;

__attribute__((used)) static void
FUNC_2(struct controller *VAR_1,
                      enum screen_power_mode VAR_2) {
    struct control_msg VAR_3;
    VAR_3.type = VAR_0;
    VAR_3.set_screen_power_mode.mode = VAR_2;

    if (!FUNC_1(VAR_1, &VAR_3)) {
        FUNC_0("Could not request 'set screen power mode'");
    }
}
