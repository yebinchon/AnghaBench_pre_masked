
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_wayland_state {TYPE_1__* vo; } ;
struct ra_ctx {int swapchain; TYPE_2__* vo; } ;
struct TYPE_4__ {struct vo_wayland_state* wl; } ;
struct TYPE_3__ {int dheight; int dwidth; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct ra_ctx*) ;
 int FUNC_2 (TYPE_2__*,int*,int,void*) ;

__attribute__((used)) static int FUNC_3(struct ra_ctx *VAR_1, int *VAR_2, int VAR_3,
                             void *VAR_4)
{
    struct vo_wayland_state *VAR_5 = VAR_1->vo->wl;
    int VAR_6 = FUNC_2(VAR_1->vo, VAR_2, VAR_3, VAR_4);

    if (*VAR_2 & VAR_0) {
        FUNC_1(VAR_1);
        FUNC_0(VAR_1->swapchain, VAR_5->vo->dwidth, VAR_5->vo->dheight, 0);
    }

    return VAR_6;
}
