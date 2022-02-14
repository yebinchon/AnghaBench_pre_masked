
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {TYPE_1__* opts; struct priv* priv; } ;
struct priv {int window; scalar_t__ switch_mode; } ;
typedef int Uint32 ;
struct TYPE_2__ {int fullscreen; } ;
typedef int SDL_bool ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct vo*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct vo *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    int VAR_4 = VAR_2->opts->fullscreen;
    SDL_bool VAR_5 = FUNC_2();

    Uint32 VAR_6;
    if (VAR_3->switch_mode)
        VAR_6 = VAR_0;
    else
        VAR_6 = VAR_1;

    Uint32 VAR_7 = FUNC_1(VAR_3->window);
    int VAR_8 = !!(VAR_7 & VAR_6);
    if (VAR_4 == VAR_8)
        return;

    Uint32 VAR_9 = 0;
    if (VAR_4)
        VAR_9 |= VAR_6;

    if (FUNC_3(VAR_3->window, VAR_9)) {
        FUNC_0(VAR_2, "SDL_SetWindowFullscreen failed\n");
        return;
    }


    FUNC_5(VAR_5);

    FUNC_4(VAR_2);
}
