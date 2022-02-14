
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct wl_keyboard {int dummy; } ;
struct vo_wayland_state {int * xkb_keymap; int xkb_state; int xkb_context; } ;
typedef int int32_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vo_wayland_state*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int * FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_5, struct wl_keyboard *VAR_6,
                                   uint32_t VAR_7, int32_t VAR_8, uint32_t VAR_9)
{
    struct vo_wayland_state *VAR_10 = VAR_5;
    char *VAR_11;

    if (VAR_7 != VAR_3) {
        FUNC_1(VAR_8);
        return;
    }

    VAR_11 = FUNC_2(((void*)0), VAR_9, VAR_2, VAR_1, VAR_8, 0);
    if (VAR_11 == VAR_0) {
        FUNC_1(VAR_8);
        return;
    }

    VAR_10->xkb_keymap = FUNC_4(VAR_10->xkb_context, VAR_11,
                                                VAR_4, 0);

    FUNC_3(VAR_11, VAR_9);
    FUNC_1(VAR_8);

    if (!VAR_10->xkb_keymap) {
        FUNC_0(VAR_10, "failed to compile keymap\n");
        return;
    }

    VAR_10->xkb_state = FUNC_6(VAR_10->xkb_keymap);
    if (!VAR_10->xkb_state) {
        FUNC_0(VAR_10, "failed to create XKB state\n");
        FUNC_5(VAR_10->xkb_keymap);
        VAR_10->xkb_keymap = ((void*)0);
        return;
    }
}
