
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_input_src {struct gamepad_priv* priv; } ;
struct gamepad_priv {int * controller; } ;
typedef int SDL_GameController ;


 int FUNC_0 (struct mp_input_src*,char*,char const*) ;
 int FUNC_1 (struct mp_input_src*,char*) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct mp_input_src *VAR_0, int VAR_1)
{
    struct gamepad_priv *VAR_2 = VAR_0->priv;

    if (VAR_2->controller) {
        FUNC_1(VAR_0, "can't add more than one controller\n");
        return;
    }

    if (FUNC_4(VAR_1)) {
        SDL_GameController *VAR_3 = FUNC_3(VAR_1);

        if (VAR_3) {
            const char *VAR_4 = FUNC_2(VAR_3);
            FUNC_0(VAR_0, "added controller: %s\n", VAR_4);
            VAR_2->controller = VAR_3;
            return;
        }
    }
}
