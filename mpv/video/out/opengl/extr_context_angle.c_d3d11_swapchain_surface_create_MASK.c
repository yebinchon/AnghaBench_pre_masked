
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int log; TYPE_1__* opts; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {int flipped; int dxgi_swapchain; int d3d11_device; int sc_height; int sc_width; struct angle_opts* opts; } ;
struct d3d11_swapchain_opts {int usage; int length; int flip; int height; int width; int window; } ;
struct angle_opts {int flip; } ;
struct TYPE_2__ {int swapchain_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (struct ra_ctx*) ;
 int FUNC_2 (int ,int ,struct d3d11_swapchain_opts*,int *) ;
 int FUNC_3 (struct ra_ctx*) ;
 int FUNC_4 (struct vo*) ;

__attribute__((used)) static bool FUNC_5(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    struct vo *VAR_4 = VAR_2->vo;
    struct angle_opts *VAR_5 = VAR_3->opts;

    if (!VAR_3->d3d11_device)
        goto fail;

    FUNC_3(VAR_2);
    struct d3d11_swapchain_opts VAR_6 = {
        .window = FUNC_4(VAR_4),
        .width = VAR_3->sc_width,
        .height = VAR_3->sc_height,
        .flip = VAR_5->flip,


        .length = VAR_2->vo->opts->swapchain_depth + 2,
        .usage = VAR_0 | VAR_1,
    };
    if (!FUNC_2(VAR_3->d3d11_device, VAR_4->log, &VAR_6,
                                   &VAR_3->dxgi_swapchain))
        goto fail;
    if (!FUNC_0(VAR_2))
        goto fail;

    VAR_3->flipped = 1;
    return 1;

fail:
    FUNC_1(VAR_2);
    return 0;
}
