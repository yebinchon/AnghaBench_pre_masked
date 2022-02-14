
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {TYPE_2__* vo; int global; struct priv* priv; } ;
struct priv {int opt_swapinterval; int current_swapinterval; int (* real_wglSwapInterval ) (int) ;int hdc; } ;
struct TYPE_4__ {TYPE_1__* opts; } ;
struct TYPE_3__ {int fullscreen; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ra_ctx*) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int *,int*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    FUNC_2(VAR_3->hdc);


    int VAR_4 = VAR_3->opt_swapinterval;

    int VAR_5;
    FUNC_4(VAR_2->global, "opengl-dwmflush", &VAR_1,
                       &VAR_5);

    if (VAR_5 >= 0) {
        if ((VAR_5 == 1 && !VAR_2->vo->opts->fullscreen) ||
            (VAR_5 == 2) ||
            (VAR_5 == 0 && FUNC_3(VAR_2)))
        {
            if (FUNC_0() == VAR_0)
                VAR_4 = 0;
        }
    }

    if (VAR_4 != VAR_3->current_swapinterval &&
        VAR_3->real_wglSwapInterval)
    {
        VAR_3->real_wglSwapInterval(VAR_4);
        FUNC_1(VAR_2->vo, "set SwapInterval(%d)\n", VAR_4);
    }
    VAR_3->current_swapinterval = VAR_4;
}
