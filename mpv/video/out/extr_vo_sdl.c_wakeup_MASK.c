
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {int wakeup_event; } ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ SDL_Event ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    SDL_Event VAR_2 = {.type = VAR_1->wakeup_event};

    FUNC_0(&VAR_2);
}
