
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {unsigned char mode; } ;
struct TYPE_9__ {int text; } ;
struct TYPE_8__ {int vscroll; int hscroll; int position; } ;
struct TYPE_7__ {unsigned char action; int position; int buttons; } ;
struct TYPE_6__ {unsigned char action; int metastate; int keycode; } ;
struct control_msg {unsigned char type; TYPE_5__ set_screen_power_mode; TYPE_4__ inject_text; TYPE_3__ inject_scroll_event; TYPE_2__ inject_mouse_event; TYPE_1__ inject_keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,int *) ;
 size_t FUNC_3 (int ,int ,unsigned char*) ;

size_t
FUNC_4(const struct control_msg *VAR_2, unsigned char *VAR_3) {
    VAR_3[0] = VAR_2->type;
    switch (VAR_2->type) {
        case 133:
            VAR_3[1] = VAR_2->inject_keycode.action;
            FUNC_1(&VAR_3[2], VAR_2->inject_keycode.keycode);
            FUNC_1(&VAR_3[6], VAR_2->inject_keycode.metastate);
            return 10;
        case 130: {
            size_t VAR_4 = FUNC_3(VAR_2->inject_text.text,
                                      VAR_1, &VAR_3[1]);
            return 1 + VAR_4;
        }
        case 132:
            VAR_3[1] = VAR_2->inject_mouse_event.action;
            FUNC_1(&VAR_3[2], VAR_2->inject_mouse_event.buttons);
            FUNC_2(&VAR_3[6], &VAR_2->inject_mouse_event.position);
            return 18;
        case 131:
            FUNC_2(&VAR_3[1], &VAR_2->inject_scroll_event.position);
            FUNC_1(&VAR_3[13],
                             (uint32_t) VAR_2->inject_scroll_event.hscroll);
            FUNC_1(&VAR_3[17],
                             (uint32_t) VAR_2->inject_scroll_event.vscroll);
            return 21;
        case 129: {
            size_t VAR_5 = FUNC_3(VAR_2->inject_text.text,
                                      VAR_0,
                                      &VAR_3[1]);
            return 1 + VAR_5;
        }
        case 128:
            VAR_3[1] = VAR_2->set_screen_power_mode.mode;
            return 2;
        case 137:
        case 135:
        case 136:
        case 134:

            return 1;
        default:
            FUNC_0("Unknown message type: %u", (unsigned) VAR_2->type);
            return 0;
    }
}
