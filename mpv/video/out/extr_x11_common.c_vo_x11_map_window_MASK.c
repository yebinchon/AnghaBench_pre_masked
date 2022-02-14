
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_x11_state {int wm_type; int fs; int size_changed_during_fs; int pos_changed_during_fs; int window; int display; int input_ctx; } ;
struct vo {TYPE_1__* opts; struct vo_x11_state* x11; } ;
struct mp_rect {int dummy; } ;
struct TYPE_2__ {int fsscreen_id; scalar_t__ fullscreen; scalar_t__ all_workspaces; int border; } ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct vo_x11_state*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 int VAR_15 ;
 int FUNC_2 (int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_19 ;
 int FUNC_5 (struct vo*,int ) ;
 int FUNC_6 (struct vo_x11_state*,long*) ;
 int FUNC_7 (struct vo*,int,int,struct mp_rect) ;
 int FUNC_8 (struct vo*,int ,int ,int) ;
 int FUNC_9 (struct vo*) ;
 int FUNC_10 (struct vo_x11_state*,int ) ;
 int FUNC_11 (struct vo_x11_state*,char*,long*) ;
 int FUNC_12 (struct vo_x11_state*,char*,int) ;

__attribute__((used)) static void FUNC_13(struct vo *VAR_20, struct mp_rect VAR_21)
{
    struct vo_x11_state *VAR_22 = VAR_20->x11;

    FUNC_7(VAR_20, 1, 1, VAR_21);
    FUNC_5(VAR_20, VAR_20->opts->border);

    if (VAR_20->opts->fullscreen && (VAR_22->wm_type & VAR_19)) {
        Atom VAR_23 = FUNC_0(VAR_22, VAR_18);
        FUNC_1(VAR_22->display, VAR_22->window, FUNC_0(VAR_22, VAR_17), VAR_13,
                        32, VAR_9, (unsigned char *)&VAR_23, 1);
        VAR_22->fs = 1;

        VAR_22->size_changed_during_fs = 1;
        VAR_22->pos_changed_during_fs = 1;
    }

    if (VAR_20->opts->fsscreen_id != -1) {
        long VAR_24[5] = {0};
        if (VAR_20->opts->fsscreen_id >= 0) {
            for (int VAR_25 = 0; VAR_25 < 4; VAR_25++)
                VAR_24[VAR_25] = VAR_20->opts->fsscreen_id;
        } else {
            FUNC_6(VAR_22, &VAR_24[0]);
        }
        VAR_24[4] = 1;
        FUNC_11(VAR_22, "_NET_WM_FULLSCREEN_MONITORS", VAR_24);
    }

    if (VAR_20->opts->all_workspaces) {
        long VAR_26 = 0xFFFFFFFF;
        FUNC_1(VAR_22->display, VAR_22->window, FUNC_0(VAR_22, VAR_16),
                        VAR_14, 32, VAR_10, (unsigned char *)&VAR_26, 1);
    }

    FUNC_9(VAR_20);


    int VAR_27 = VAR_12 | VAR_3 | VAR_11 |
                 VAR_7 | VAR_2 | VAR_4;
    if (FUNC_3(VAR_22->input_ctx))
        VAR_27 |= VAR_8 | VAR_0 | VAR_1;
    if (FUNC_4(VAR_22->input_ctx))
        VAR_27 |= VAR_5 | VAR_6;
    FUNC_8(VAR_20, VAR_22->display, VAR_22->window, VAR_27);
    FUNC_2(VAR_22->display, VAR_22->window);

    if (VAR_20->opts->fullscreen && (VAR_22->wm_type & VAR_19))
        FUNC_12(VAR_22, "_NET_WM_STATE_FULLSCREEN", 1);

    FUNC_10(VAR_22, VAR_15);
}
