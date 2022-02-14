
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct input_manager {int controller; } ;
struct TYPE_4__ {int text; } ;
struct control_msg {TYPE_1__ inject_text; int type; } ;
struct TYPE_5__ {char* text; } ;
typedef TYPE_2__ SDL_TextInputEvent ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,struct control_msg*) ;
 scalar_t__ FUNC_5 (char) ;

void
FUNC_6(struct input_manager *VAR_1,
                                 const SDL_TextInputEvent *VAR_2) {
    char VAR_3 = VAR_2->text[0];
    if (FUNC_5(VAR_3) || VAR_3 == ' ') {
        FUNC_1(VAR_2->text[1] == '\0');

        return;
    }
    struct control_msg VAR_4;
    VAR_4.type = VAR_0;
    VAR_4.inject_text.text = FUNC_3(VAR_2->text);
    if (!VAR_4.inject_text.text) {
        FUNC_0("Could not strdup input text");
        return;
    }
    if (!FUNC_4(VAR_1->controller, &VAR_4)) {
        FUNC_2(VAR_4.inject_text.text);
        FUNC_0("Could not request 'inject text'");
    }
}
