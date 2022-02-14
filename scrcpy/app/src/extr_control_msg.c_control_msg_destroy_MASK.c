
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int text; } ;
struct TYPE_3__ {int text; } ;
struct control_msg {int type; TYPE_2__ set_clipboard; TYPE_1__ inject_text; } ;




 int FUNC_0 (int ) ;

void
FUNC_1(struct control_msg *VAR_0) {
    switch (VAR_0->type) {
        case 129:
            FUNC_0(VAR_0->inject_text.text);
            break;
        case 128:
            FUNC_0(VAR_0->set_clipboard.text);
            break;
        default:

            break;
    }
}
