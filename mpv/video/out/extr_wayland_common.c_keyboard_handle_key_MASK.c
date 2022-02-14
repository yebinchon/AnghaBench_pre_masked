
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xkb_mod_index_t ;
typedef int xkb_keysym_t ;
typedef scalar_t__ uint32_t ;
struct wl_keyboard {int dummy; } ;
struct vo_wayland_state {TYPE_1__* vo; int xkb_state; int xkb_keymap; } ;
typedef int s ;
struct TYPE_2__ {int input_ctx; } ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_5, struct wl_keyboard *VAR_6,
                                uint32_t VAR_7, uint32_t VAR_8, uint32_t VAR_9,
                                uint32_t VAR_10)
{
    struct vo_wayland_state *VAR_11 = VAR_5;

    uint32_t VAR_12 = VAR_12 = VAR_9 + 8;
    xkb_keysym_t VAR_13 = FUNC_6(VAR_11->xkb_state, VAR_12);

    int VAR_14 = VAR_10 == VAR_2 ? VAR_0
                                                       : VAR_1;

    static const char *VAR_15[] = {
        128,
        130,
        131,
        129,
        0,
    };

    static int VAR_16[] = {
        132,
        134,
        135,
        133,
        0,
    };

    for (int VAR_17 = 0; VAR_16[VAR_17]; VAR_17++) {
        xkb_mod_index_t VAR_18 = FUNC_4(VAR_11->xkb_keymap, VAR_15[VAR_17]);
        if (!FUNC_8(VAR_11->xkb_state, VAR_12, VAR_18)
            && FUNC_7(VAR_11->xkb_state, VAR_18,
                                             VAR_3))
            VAR_14 |= VAR_16[VAR_17];
    }

    int VAR_19 = FUNC_1(VAR_13);
    if (VAR_19) {
        FUNC_2(VAR_11->vo->input_ctx, VAR_19 | VAR_14);
    } else {
        char VAR_20[128];
        if (FUNC_5(VAR_13, VAR_20, sizeof(VAR_20)) > 0)
            FUNC_3(VAR_11->vo->input_ctx, VAR_14, FUNC_0(VAR_20));
    }
}
