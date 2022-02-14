
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_input_src {struct gamepad_priv* priv; } ;
struct gamepad_priv {int * controller; } ;
typedef int SDL_JoystickID ;
typedef int SDL_Joystick ;
typedef int SDL_GameController ;


 int FUNC_0 (struct mp_input_src*,char*,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mp_input_src *VAR_0, int VAR_1)
{
    struct gamepad_priv *VAR_2 = VAR_0->priv;
    SDL_GameController *VAR_3 = VAR_2->controller;
    SDL_Joystick* VAR_4 = FUNC_2(VAR_3);
    SDL_JoystickID VAR_5 = FUNC_4(VAR_4);

    if (VAR_3 && VAR_5 == VAR_1) {
        const char *VAR_6 = FUNC_3(VAR_3);
        FUNC_0(VAR_0, "removed controller: %s\n", VAR_6);
        FUNC_1(VAR_3);
        VAR_2->controller = ((void*)0);
    }
}
