
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {TYPE_2__* vo; struct priv* priv; } ;
struct priv {scalar_t__ XGetSyncValues; } ;
struct TYPE_4__ {TYPE_1__* x11; } ;
struct TYPE_3__ {int window; int display; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ra_ctx*) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_0->vo->x11->display, VAR_0->vo->x11->window);

    if (VAR_1->XGetSyncValues)
        FUNC_1(VAR_0);
}
