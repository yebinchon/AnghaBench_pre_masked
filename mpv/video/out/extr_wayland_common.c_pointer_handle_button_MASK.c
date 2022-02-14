
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct vo_wayland_state {int mouse_y; int mouse_x; TYPE_1__* vo; } ;
struct TYPE_2__ {int input_ctx; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct vo_wayland_state*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_8, struct wl_pointer *VAR_9,
                                  uint32_t VAR_10, uint32_t VAR_11, uint32_t VAR_12,
                                  uint32_t VAR_13)
{
    struct vo_wayland_state *VAR_14 = VAR_8;

    VAR_13 = VAR_13 == VAR_7 ? VAR_0
                                                     : VAR_1;

    switch (VAR_12) {
    case 131:
        VAR_12 = VAR_4;
        break;
    case 130:
        VAR_12 = VAR_5;
        break;
    case 129:
        VAR_12 = VAR_6;
        break;
    case 128:
        VAR_12 = VAR_2;
        break;
    case 132:
        VAR_12 = VAR_3;
        break;
    default:
        VAR_12 = 0;
        break;
    }

    if (VAR_12) {
        FUNC_0(VAR_14->vo->input_ctx, VAR_12 | VAR_13);
    }

    if (!FUNC_1(VAR_14->vo->input_ctx, VAR_14->mouse_x, VAR_14->mouse_y) &&
        (VAR_12 == VAR_4) && (VAR_13 == VAR_0))
        FUNC_2(VAR_14, VAR_10);
}
