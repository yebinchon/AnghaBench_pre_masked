
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct vo_wayland_state {TYPE_1__* vo; } ;
struct TYPE_2__ {int input_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 double FUNC_0 (double) ;
 int FUNC_1 (int ,int ,double) ;
 double FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, struct wl_pointer *VAR_5,
                                uint32_t VAR_6, uint32_t VAR_7, wl_fixed_t VAR_8)
{
    struct vo_wayland_state *VAR_9 = VAR_4;
    if (FUNC_2(VAR_8) == 0)
        return;
    double VAR_10 = FUNC_2(VAR_8)/FUNC_0(FUNC_2(VAR_8));
    switch (VAR_7) {
    case 128:
        if (VAR_8 > 0)
            FUNC_1(VAR_9->vo->input_ctx, VAR_0, +VAR_10);
        if (VAR_8 < 0)
            FUNC_1(VAR_9->vo->input_ctx, VAR_3, -VAR_10);
        break;
    case 129:
        if (VAR_8 > 0)
            FUNC_1(VAR_9->vo->input_ctx, VAR_2, +VAR_10);
        if (VAR_8 < 0)
            FUNC_1(VAR_9->vo->input_ctx, VAR_1, -VAR_10);
        break;
    }
}
