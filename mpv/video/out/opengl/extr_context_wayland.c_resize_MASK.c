
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_wayland_state {int scaling; TYPE_2__* vo; int surface; int geometry; } ;
struct ra_ctx {TYPE_1__* vo; struct priv* priv; } ;
struct priv {scalar_t__ egl_window; } ;
typedef int int32_t ;
struct TYPE_4__ {int dwidth; int dheight; } ;
struct TYPE_3__ {struct vo_wayland_state* wl; } ;


 int FUNC_0 (struct vo_wayland_state*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int const,int const,int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    struct vo_wayland_state *VAR_2 = VAR_0->vo->wl;

    FUNC_0(VAR_2, "Handling resize on the egl side\n");

    const int32_t VAR_3 = VAR_2->scaling*FUNC_2(VAR_2->geometry);
    const int32_t VAR_4 = VAR_2->scaling*FUNC_1(VAR_2->geometry);

    FUNC_4(VAR_2->surface, VAR_2->scaling);

    if (VAR_1->egl_window)
        FUNC_3(VAR_1->egl_window, VAR_3, VAR_4, 0, 0);

    VAR_2->vo->dwidth = VAR_3;
    VAR_2->vo->dheight = VAR_4;
}
