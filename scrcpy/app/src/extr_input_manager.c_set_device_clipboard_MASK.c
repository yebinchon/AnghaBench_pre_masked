
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct controller {int dummy; } ;
struct TYPE_2__ {char* text; } ;
struct control_msg {TYPE_1__ set_clipboard; int type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct controller*,struct control_msg*) ;

__attribute__((used)) static void
FUNC_5(struct controller *VAR_1) {
    char *VAR_2 = FUNC_1();
    if (!VAR_2) {
        FUNC_0("Could not get clipboard text: %s", FUNC_2());
        return;
    }
    if (!*VAR_2) {

        FUNC_3(VAR_2);
        return;
    }

    struct control_msg VAR_3;
    VAR_3.type = VAR_0;
    VAR_3.set_clipboard.text = VAR_2;

    if (!FUNC_4(VAR_1, &VAR_3)) {
        FUNC_3(VAR_2);
        FUNC_0("Could not request 'set device clipboard'");
    }
}
