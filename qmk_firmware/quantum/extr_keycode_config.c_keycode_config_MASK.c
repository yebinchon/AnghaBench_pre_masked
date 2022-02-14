
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int swap_backslash_backspace; int swap_grave_esc; int no_gui; int swap_rctl_rgui; int swap_ralt_rgui; int swap_lctl_lgui; int swap_lalt_lgui; int swap_control_capslock; int capslock_to_control; } ;
 int VAR_0 ;


 int VAR_1 ;



 TYPE_1__ VAR_2 ;

uint16_t FUNC_0(uint16_t VAR_3) {
    switch (VAR_3) {
        case 137:
        case 131:
            if (VAR_2.swap_control_capslock || VAR_2.capslock_to_control) {
                return 133;
            }
            return VAR_3;
        case 133:
            if (VAR_2.swap_control_capslock) {
                return 137;
            }
            if (VAR_2.swap_lctl_lgui) {
                if (VAR_2.no_gui) {
                    return VAR_1;
                }
                return 132;
            }
            return 133;
        case 134:
            if (VAR_2.swap_lalt_lgui) {
                if (VAR_2.no_gui) {
                    return VAR_1;
                }
                return 132;
            }
            return 134;
        case 132:
            if (VAR_2.swap_lalt_lgui) {
                return 134;
            }
            if (VAR_2.swap_lctl_lgui) {
                return VAR_0;
            }
            if (VAR_2.no_gui) {
                return VAR_1;
            }
            return 132;
        case 129:
            if (VAR_2.swap_rctl_rgui) {
                if (VAR_2.no_gui) {
                    return VAR_1;
                }
                return 128;
            }
            return 129;
        case 130:
            if (VAR_2.swap_ralt_rgui) {
                if (VAR_2.no_gui) {
                    return VAR_1;
                }
                return 128;
            }
            return 130;
        case 128:
            if (VAR_2.swap_ralt_rgui) {
                return 130;
            }
            if (VAR_2.swap_rctl_rgui) {
                return 129;
            }
            if (VAR_2.no_gui) {
                return VAR_1;
            }
            return 128;
        case 135:
            if (VAR_2.swap_grave_esc) {
                return 136;
            }
            return 135;
        case 136:
            if (VAR_2.swap_grave_esc) {
                return 135;
            }
            return 136;
        case 139:
            if (VAR_2.swap_backslash_backspace) {
                return 138;
            }
            return 139;
        case 138:
            if (VAR_2.swap_backslash_backspace) {
                return 139;
            }
            return 138;
        default:
            return VAR_3;
    }
}
