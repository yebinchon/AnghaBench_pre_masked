
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int vt_switcher; scalar_t__ vt_switcher_active; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->vt_switcher_active)
        FUNC_0(&VAR_1->vt_switcher);
}
