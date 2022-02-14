
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_wayland_state {int geometry; int surface; } ;
struct ra_ctx {TYPE_1__* vo; struct priv* priv; } ;
struct priv {int egl_display; int egl_context; int egl_surface; int egl_window; int egl_config; } ;
struct TYPE_2__ {struct vo_wayland_state* wl; } ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    struct vo_wayland_state *VAR_2 = VAR_0->vo->wl;

    VAR_1->egl_window = FUNC_5(VAR_2->surface, FUNC_4(VAR_2->geometry),
                                         FUNC_3(VAR_2->geometry));

    VAR_1->egl_surface = FUNC_0(VAR_1->egl_display, VAR_1->egl_config,
                                            VAR_1->egl_window, ((void*)0));

    FUNC_1(VAR_1->egl_display, VAR_1->egl_surface, VAR_1->egl_surface, VAR_1->egl_context);

    FUNC_2(VAR_1->egl_display, 0);
}
