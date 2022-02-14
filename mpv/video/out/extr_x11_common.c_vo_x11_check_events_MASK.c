
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct vo_x11_state {int has_focus; int win_drag_button1_down; int window_hidden; int pseudo_mapped; int current_icc_screen; int ShmCompletionEvent; int xrandr_event; int ShmCompletionWaitCount; int pending_vo_events; int icc_profile_property; int parent; int input_ctx; int window; int * display; int fs; int compose_status; int xic; int no_autorepeat; int winrc; } ;
struct vo {struct vo_x11_state* x11; } ;
struct bstr {char* member_0; int member_1; } ;
typedef int buf ;
struct TYPE_15__ {int atom; } ;
struct TYPE_14__ {int * l; } ;
struct TYPE_21__ {TYPE_1__ data; int message_type; } ;
struct TYPE_19__ {int button; int state; } ;
struct TYPE_18__ {int mode; } ;
struct TYPE_17__ {int x_root; int y_root; int y; int x; } ;
struct TYPE_13__ {int state; } ;
struct TYPE_16__ {int window; } ;
struct TYPE_20__ {int type; TYPE_2__ xproperty; int xselection; TYPE_8__ xclient; TYPE_6__ xbutton; TYPE_5__ xcrossing; TYPE_4__ xmotion; TYPE_10__ xkey; TYPE_3__ xconfigure; } ;
typedef TYPE_7__ XEvent ;
typedef int Status ;
typedef int KeySym ;
typedef int Display ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vo_x11_state*,char*,...) ;
 int FUNC_1 (struct vo_x11_state*,char*) ;
 int FUNC_2 (struct vo_x11_state*,char*) ;


 int VAR_9 ;
 int VAR_10 ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct vo_x11_state*,int ) ;
 long VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (TYPE_10__*,char*,int,int *,int *) ;
 int FUNC_7 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int *,TYPE_7__*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,TYPE_10__*,char*,int,int *,int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int,struct bstr) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (struct vo*) ;
 int FUNC_18 (struct vo*) ;
 int FUNC_19 (struct vo*) ;
 int FUNC_20 (struct vo*) ;
 int FUNC_21 (struct vo*,TYPE_8__*) ;
 int FUNC_22 (struct vo*,int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct vo*) ;
 int FUNC_25 (struct vo*,TYPE_8__*) ;
 int FUNC_26 (struct vo_x11_state*,long*) ;
 int FUNC_27 (struct vo_x11_state*,char*,long*) ;
 int FUNC_28 (struct vo_x11_state*) ;
 int FUNC_29 (struct vo_x11_state*) ;

void FUNC_30(struct vo *VAR_22)
{
    struct vo_x11_state *VAR_23 = VAR_22->x11;
    Display *VAR_24 = VAR_22->x11->display;
    XEvent VAR_25;

    FUNC_29(VAR_22->x11);

    while (FUNC_9(VAR_24)) {
        FUNC_8(VAR_24, &VAR_25);
        FUNC_0(VAR_23, "XEvent: %d\n", VAR_25.type);
        switch (VAR_25.type) {
        case 137:
            VAR_23->pending_vo_events |= VAR_11;
            break;
        case 140:
            if (VAR_23->window == VAR_9)
                break;
            FUNC_24(VAR_22);
            if (VAR_23->parent && VAR_25.xconfigure.window == VAR_23->parent) {
                FUNC_0(VAR_23, "adjusting embedded window position\n");
                FUNC_7(VAR_23->display, VAR_23->window,
                                  0, 0, FUNC_4(VAR_23->winrc), FUNC_3(VAR_23->winrc));
            }
            break;
        case 134: {
            char VAR_26[100];
            KeySym VAR_27 = 0;
            int VAR_28 = FUNC_12(VAR_25.xkey.state);
            if (VAR_23->no_autorepeat)
                VAR_28 |= VAR_6;
            if (VAR_23->xic) {
                Status VAR_29;
                int VAR_30 = FUNC_11(VAR_23->xic, &VAR_25.xkey, VAR_26,
                                            sizeof(VAR_26), &VAR_27, &VAR_29);
                int VAR_31 = FUNC_23(VAR_27);
                if (VAR_31) {
                    FUNC_13(VAR_23->input_ctx, VAR_31 | VAR_28);
                } else if (VAR_29 == VAR_19 || VAR_29 == VAR_18) {
                    struct bstr VAR_32 = { VAR_26, VAR_30 };
                    FUNC_14(VAR_23->input_ctx, VAR_28, VAR_32);
                }
            } else {
                FUNC_6(&VAR_25.xkey, VAR_26, sizeof(VAR_26), &VAR_27,
                              &VAR_23->compose_status);
                int VAR_33 = FUNC_23(VAR_27);
                if (VAR_33)
                    FUNC_13(VAR_23->input_ctx, VAR_33 | VAR_28);
            }
            break;
        }
        case 136:
            VAR_23->has_focus = 1;
            FUNC_19(VAR_22);
            break;
        case 135:
            FUNC_17(VAR_22);
            VAR_23->has_focus = 0;
            FUNC_19(VAR_22);
            break;
        case 133:
            FUNC_17(VAR_22);
            break;
        case 130:
            if (VAR_23->win_drag_button1_down && !VAR_23->fs &&
                !FUNC_16(VAR_23->input_ctx, VAR_25.xmotion.x,
                                                        VAR_25.xmotion.y))
            {
                FUNC_13(VAR_23->input_ctx, VAR_1);
                FUNC_10(VAR_23->display, VAR_0);

                long VAR_34[5] = {
                    VAR_25.xmotion.x_root, VAR_25.xmotion.y_root,
                    8,
                    1,
                    1,
                };
                FUNC_27(VAR_23, "_NET_WM_MOVERESIZE", VAR_34);
            } else {
                FUNC_15(VAR_23->input_ctx, VAR_25.xmotion.x,
                                                       VAR_25.xmotion.y);
            }
            VAR_23->win_drag_button1_down = 0;
            break;
        case 132:
            if (VAR_25.xcrossing.mode != VAR_10)
                break;
            VAR_23->win_drag_button1_down = 0;
            FUNC_13(VAR_23->input_ctx, VAR_5);
            break;
        case 138:
            if (VAR_25.xcrossing.mode != VAR_10)
                break;
            FUNC_13(VAR_23->input_ctx, VAR_4);
            break;
        case 143:
            if (VAR_25.xbutton.button - 1 >= VAR_3)
                break;
            if (VAR_25.xbutton.button == 1)
                VAR_23->win_drag_button1_down = 1;
            FUNC_13(VAR_23->input_ctx,
                             (VAR_8 + VAR_25.xbutton.button - 1) |
                             FUNC_12(VAR_25.xbutton.state) | VAR_6);
            long VAR_35[4] = {VAR_17};
            FUNC_26(VAR_23, VAR_35);
            break;
        case 142:
            if (VAR_25.xbutton.button - 1 >= VAR_3)
                break;
            if (VAR_25.xbutton.button == 1)
                VAR_23->win_drag_button1_down = 0;
            FUNC_13(VAR_23->input_ctx,
                             (VAR_8 + VAR_25.xbutton.button - 1) |
                             FUNC_12(VAR_25.xbutton.state) | VAR_7);
            break;
        case 131:
            VAR_23->window_hidden = 0;
            VAR_23->pseudo_mapped = 1;
            VAR_23->current_icc_screen = -1;
            FUNC_24(VAR_22);
            break;
        case 139:
            FUNC_2(VAR_23, "Our window was destroyed, exiting\n");
            FUNC_13(VAR_23->input_ctx, VAR_2);
            VAR_23->window = 0;
            break;
        case 141:
            if (VAR_25.xclient.message_type == FUNC_5(VAR_23, VAR_15) &&
                VAR_25.xclient.data.l[0] == FUNC_5(VAR_23, VAR_14))
                FUNC_13(VAR_23->input_ctx, VAR_2);
            FUNC_21(VAR_22, &VAR_25.xclient);
            FUNC_25(VAR_22, &VAR_25.xclient);
            break;
        case 128:
            FUNC_22(VAR_22, &VAR_25.xselection);
            break;
        case 129:
            if (VAR_25.xproperty.atom == FUNC_5(VAR_23, VAR_20) ||
                VAR_25.xproperty.atom == FUNC_5(VAR_23, VAR_16))
            {
                if (!VAR_23->pseudo_mapped && !VAR_23->parent) {
                    FUNC_1(VAR_23, "not waiting for MapNotify\n");
                    VAR_23->pseudo_mapped = 1;
                }
            } else if (VAR_25.xproperty.atom == FUNC_5(VAR_23, VAR_21)) {
                VAR_23->pending_vo_events |= VAR_13;
                FUNC_20(VAR_22);
            } else if (VAR_25.xproperty.atom == VAR_23->icc_profile_property) {
                VAR_23->pending_vo_events |= VAR_12;
            }
            break;
        default:
            if (VAR_25.type == VAR_23->ShmCompletionEvent) {
                if (VAR_23->ShmCompletionWaitCount > 0)
                    VAR_23->ShmCompletionWaitCount--;
            }
            if (VAR_25.type == VAR_23->xrandr_event) {
                FUNC_28(VAR_23);
                FUNC_24(VAR_22);
            }
            break;
        }
    }

    FUNC_18(VAR_22);
}
