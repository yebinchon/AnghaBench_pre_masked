
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int egl_window; } ;


 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!FUNC_1(VAR_0->vo))
        return 0;

    if (!VAR_1->egl_window)
        FUNC_0(VAR_0);

    return 1;
}
