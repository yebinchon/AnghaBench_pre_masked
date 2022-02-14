
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nk_context {int dummy; } ;
struct TYPE_11__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_12__ {int event_mask; int colormap; } ;
struct TYPE_9__ {unsigned int width; unsigned int height; int dpy; int win; int cmap; int font; int screen; TYPE_6__ attr; int wm_delete_window; TYPE_8__ swa; int vis; int root; } ;
typedef TYPE_1__ XWindow ;
struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_2__ XEvent ;


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
 scalar_t__ VAR_10 ;
 long VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,TYPE_8__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,TYPE_6__*) ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,TYPE_2__*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int *,int) ;
 int FUNC_19 (int ,int ,char*) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (struct nk_context*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_25 (struct nk_context*,char*,int ,int) ;
 scalar_t__ FUNC_26 (struct nk_context*,char*) ;
 int FUNC_27 (struct nk_context*) ;
 int FUNC_28 (struct nk_context*) ;
 int FUNC_29 (struct nk_context*) ;
 int FUNC_30 (struct nk_context*,int,int) ;
 int FUNC_31 (struct nk_context*,int,int,int) ;
 scalar_t__ FUNC_32 (struct nk_context*,char*,int) ;
 int FUNC_33 (struct nk_context*,char*,int ,int*,int,int,int) ;
 int FUNC_34 (int,int,int,int) ;
 int FUNC_35 (int,int,int) ;
 scalar_t__ FUNC_36 (struct nk_context*,char*) ;
 int FUNC_37 (int ,char*) ;
 int FUNC_38 (int ,int ) ;
 int FUNC_39 (int ,int ,int ,TYPE_2__*) ;
 struct nk_context* FUNC_40 (int ,int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_41 (int ,int ) ;
 int FUNC_42 () ;
 int FUNC_43 (struct nk_context*) ;
 int FUNC_44 (struct nk_context*) ;
 int FUNC_45 (long) ;
 int VAR_27 ;
 long FUNC_46 () ;

int
FUNC_47(void)
{
    long VAR_28;
    long VAR_29;
    int VAR_30 = 1;
    XWindow VAR_31;
    struct nk_context *VAR_32;


    FUNC_24(&VAR_31, 0, sizeof VAR_31);
    VAR_31.dpy = FUNC_16(((void*)0));
    if (!VAR_31.dpy) FUNC_22("Could not open a display; perhaps $DISPLAY is not set?");
    VAR_31.root = FUNC_0(VAR_31.dpy);
    VAR_31.screen = FUNC_6(VAR_31.dpy);
    VAR_31.vis = FUNC_7(VAR_31.dpy, VAR_31.screen);
    VAR_31.cmap = FUNC_3(VAR_31.dpy,VAR_31.root,VAR_31.vis,VAR_0);

    VAR_31.swa.colormap = VAR_31.cmap;
    VAR_31.swa.event_mask =
        VAR_12 | VAR_15 | VAR_16 |
        VAR_6 | VAR_7| VAR_5 |
        VAR_1 | VAR_2 | VAR_3 | VAR_4|
        VAR_24 | VAR_17;
    VAR_31.win = FUNC_4(VAR_31.dpy, VAR_31.root, 0, 0, VAR_26, VAR_25, 0,
        FUNC_5(VAR_31.dpy, VAR_31.screen), VAR_14,
        VAR_31.vis, VAR_9 | VAR_8, &VAR_31.swa);

    FUNC_19(VAR_31.dpy, VAR_31.win, "X11");
    FUNC_14(VAR_31.dpy, VAR_31.win);
    VAR_31.wm_delete_window = FUNC_13(VAR_31.dpy, "WM_DELETE_WINDOW", VAR_13);
    FUNC_18(VAR_31.dpy, VAR_31.win, &VAR_31.wm_delete_window, 1);
    FUNC_12(VAR_31.dpy, VAR_31.win, &VAR_31.attr);
    VAR_31.width = (unsigned int)VAR_31.attr.width;
    VAR_31.height = (unsigned int)VAR_31.attr.height;


    VAR_31.font = FUNC_37(VAR_31.dpy, "fixed");
    VAR_32 = FUNC_40(VAR_31.font, VAR_31.dpy, VAR_31.screen, VAR_31.win, VAR_31.width, VAR_31.height);
    while (VAR_30)
    {

        XEvent VAR_33;
        VAR_29 = FUNC_46();
        FUNC_28(VAR_32);
        while (FUNC_17(VAR_31.dpy)) {
            FUNC_15(VAR_31.dpy, &VAR_33);
            if (VAR_33.type == VAR_10) goto cleanup;
            if (FUNC_9(&VAR_33, VAR_31.win)) continue;
            FUNC_39(VAR_31.dpy, VAR_31.screen, VAR_31.win, &VAR_33);
        }
        FUNC_29(VAR_32);


        if (FUNC_25(VAR_32, "Demo", FUNC_34(50, 50, 200, 200),
            VAR_18|VAR_21|VAR_22|
            VAR_19|VAR_20|VAR_23))
        {
            enum {EASY, HARD};
            static int VAR_34 = EASY;
            static int VAR_35 = 20;

            FUNC_31(VAR_32, 30, 80, 1);
            if (FUNC_26(VAR_32, "button"))
                FUNC_23(VAR_27, "button pressed\n");
            FUNC_30(VAR_32, 30, 2);
            if (FUNC_32(VAR_32, "easy", VAR_34 == EASY)) VAR_34 = EASY;
            if (FUNC_32(VAR_32, "hard", VAR_34 == HARD)) VAR_34 = HARD;
            FUNC_30(VAR_32, 25, 1);
            FUNC_33(VAR_32, "Compression:", 0, &VAR_35, 100, 10, 1);
        }
        FUNC_27(VAR_32);
        if (FUNC_36(VAR_32, "Demo")) break;
        FUNC_1(VAR_31.dpy, VAR_31.win);
        FUNC_41(VAR_31.win, FUNC_35(30,30,30));
        FUNC_10(VAR_31.dpy);


        VAR_28 = FUNC_46() - VAR_29;
        if (VAR_28 < VAR_11)
            FUNC_45(VAR_11 - VAR_28);
    }

cleanup:
    FUNC_38(VAR_31.dpy, VAR_31.font);
    FUNC_42();
    FUNC_20(VAR_31.dpy, VAR_31.win);
    FUNC_11(VAR_31.dpy, VAR_31.cmap);
    FUNC_8(VAR_31.dpy, VAR_31.win);
    FUNC_2(VAR_31.dpy);
    return 0;
}
