
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int wm_type; long orig_layer; int window; scalar_t__ parent; } ;
struct vo {struct vo_x11_state* x11; } ;


 long VAR_0 ;
 int FUNC_0 (struct vo_x11_state*,char*,long,...) ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_1 (struct vo_x11_state*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct vo_x11_state*,int ,int ,int ,int,long*,int) ;
 int FUNC_3 (struct vo_x11_state*,char*,long*) ;
 int FUNC_4 (struct vo_x11_state*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_8, bool VAR_9)
{
    struct vo_x11_state *VAR_10 = VAR_8->x11;
    if (VAR_10->parent || !VAR_10->window)
        return;

    if (VAR_10->wm_type & (VAR_7 | VAR_5)) {
        char *VAR_11 = "_NET_WM_STATE_ABOVE";


        if (VAR_10->wm_type & VAR_7)
            VAR_11 = "_NET_WM_STATE_STAYS_ON_TOP";

        FUNC_4(VAR_10, VAR_11, VAR_9);

        FUNC_0(VAR_10, "NET style stay on top (%d). Using state %s.\n",
                   VAR_9, VAR_11);
    } else if (VAR_10->wm_type & VAR_6) {
        if (!VAR_10->orig_layer) {
            VAR_10->orig_layer = VAR_2;
            FUNC_2(VAR_10, VAR_10->window, FUNC_1(VAR_10, VAR_4),
                                  VAR_3, 32, &VAR_10->orig_layer, sizeof(long));
            FUNC_0(VAR_10, "original window layer is %ld.\n", VAR_10->orig_layer);
        }

        long VAR_12[5] = {0};

        VAR_12[0] = VAR_9 ? VAR_1 : VAR_10->orig_layer;
        VAR_12[1] = VAR_0;
        FUNC_0(VAR_10, "Layered style stay on top (layer %ld).\n", VAR_12[0]);
        FUNC_3(VAR_10, "_WIN_LAYER", VAR_12);
    }
}
