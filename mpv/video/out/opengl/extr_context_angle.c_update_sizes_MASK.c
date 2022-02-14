
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* vo; struct priv* priv; } ;
struct priv {int sc_width; int sc_height; } ;
struct TYPE_2__ {int dwidth; int dheight; } ;



__attribute__((used)) static void FUNC_0(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    VAR_1->sc_width = VAR_0->vo->dwidth ? VAR_0->vo->dwidth : 1;
    VAR_1->sc_height = VAR_0->vo->dheight ? VAR_0->vo->dheight : 1;
}
