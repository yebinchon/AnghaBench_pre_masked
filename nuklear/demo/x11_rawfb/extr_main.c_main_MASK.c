
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rawfb_context {int ctx; } ;
typedef int rawfb_pl ;
struct TYPE_7__ {int event_mask; int colormap; } ;
struct TYPE_6__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_5__ {unsigned int width; unsigned int height; int dpy; int win; int cmap; int screen; TYPE_4__ swa; int vis; TYPE_3__ attr; int root; } ;
typedef TYPE_1__ XWindow ;
typedef int XEvent ;


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
 long VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
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
 scalar_t__ FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,TYPE_4__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,TYPE_3__*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,char*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_22 (int *,char*,int ,int) ;
 scalar_t__ FUNC_23 (int *,char*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int,int) ;
 int FUNC_28 (int *,int,int,int) ;
 scalar_t__ FUNC_29 (int *,char*,int) ;
 int FUNC_30 (int *,char*,int ,int*,int,int,int) ;
 struct rawfb_context* FUNC_31 (void*,unsigned char*,unsigned int,unsigned int,int,int ) ;
 int FUNC_32 (struct rawfb_context*,int ,int) ;
 int FUNC_33 (struct rawfb_context*) ;
 int FUNC_34 (int,int,int,int) ;
 int FUNC_35 (int,int,int) ;
 scalar_t__ FUNC_36 (int *,char*) ;
 int FUNC_37 (int ,int ,int ,int *,struct rawfb_context*) ;
 int FUNC_38 (int ,int ,int ,int ,unsigned int,unsigned int,void**,int *) ;
 int FUNC_39 (int ) ;
 int FUNC_40 () ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (long) ;
 int VAR_26 ;
 long FUNC_44 () ;

int
FUNC_45(void)
{
    long VAR_27;
    long VAR_28;
    int VAR_29 = 1;
    int VAR_30;
    XWindow VAR_31;
    struct rawfb_context *VAR_32;
    void *VAR_33 = ((void*)0);
    rawfb_pl VAR_34;
    unsigned char VAR_35[512 * 512];


    FUNC_21(&VAR_31, 0, sizeof VAR_31);
    VAR_31.dpy = FUNC_15(((void*)0));
    if (!VAR_31.dpy) FUNC_19("Could not open a display; perhaps $DISPLAY is not set?");

    VAR_31.root = FUNC_0(VAR_31.dpy);
    VAR_31.screen = FUNC_7(VAR_31.dpy);
    VAR_31.vis = FUNC_8(VAR_31.dpy, VAR_31.screen);
    VAR_31.cmap = FUNC_4(VAR_31.dpy,VAR_31.root,VAR_31.vis,VAR_0);
    VAR_31.swa.colormap = VAR_31.cmap;
    VAR_31.swa.event_mask =
        VAR_12 | VAR_14 | VAR_15 |
        VAR_6 | VAR_7| VAR_5 |
        VAR_1 | VAR_2 | VAR_3 | VAR_4|
        VAR_23 | VAR_16 | VAR_11 | VAR_17;
    VAR_31.win = FUNC_5(VAR_31.dpy, VAR_31.root, 0, 0, VAR_25, VAR_24, 0,
        FUNC_6(VAR_31.dpy, VAR_31.screen), VAR_13,
        VAR_31.vis, VAR_9 | VAR_8, &VAR_31.swa);

    FUNC_16(VAR_31.dpy, VAR_31.win, "X11");
    FUNC_14(VAR_31.dpy, VAR_31.win);
    FUNC_13(VAR_31.dpy, VAR_31.win, &VAR_31.attr);
    VAR_31.width = (unsigned int)VAR_31.attr.width;
    VAR_31.height = (unsigned int)VAR_31.attr.height;


    VAR_30 = FUNC_38(VAR_31.dpy, VAR_31.vis, VAR_31.screen, VAR_31.win, VAR_31.width, VAR_31.height, &VAR_33, &VAR_34);
    if (!VAR_30 || !VAR_33)
        return 0;


    VAR_32 = FUNC_31(VAR_33, VAR_35, VAR_31.width, VAR_31.height, VAR_31.width * 4, VAR_34);
    if (!VAR_32) VAR_29 = 0;
    while (VAR_29) {

        XEvent VAR_36;
        VAR_28 = FUNC_44();
        FUNC_25(&VAR_32->ctx);
        while (FUNC_1(VAR_31.dpy, VAR_31.win, VAR_31.swa.event_mask, &VAR_36)) {
            if (FUNC_10(&VAR_36, VAR_31.win)) continue;
            FUNC_37(VAR_31.dpy, VAR_31.screen, VAR_31.win, &VAR_36, VAR_32);
        }
        FUNC_26(&VAR_32->ctx);


        if (FUNC_22(&VAR_32->ctx, "Demo", FUNC_34(50, 50, 200, 200),
            VAR_18|VAR_21|
            VAR_19|VAR_20|VAR_22)) {
            enum {EASY, HARD};
            static int VAR_37 = EASY;
            static int VAR_38 = 20;

            FUNC_28(&VAR_32->ctx, 30, 80, 1);
            if (FUNC_23(&VAR_32->ctx, "button"))
                FUNC_20(VAR_26, "button pressed\n");
            FUNC_27(&VAR_32->ctx, 30, 2);
            if (FUNC_29(&VAR_32->ctx, "easy", VAR_37 == EASY)) VAR_37 = EASY;
            if (FUNC_29(&VAR_32->ctx, "hard", VAR_37 == HARD)) VAR_37 = HARD;
            FUNC_27(&VAR_32->ctx, 25, 1);
            FUNC_30(&VAR_32->ctx, "Compression:", 0, &VAR_38, 100, 10, 1);
        }
        FUNC_24(&VAR_32->ctx);
        if (FUNC_36(&VAR_32->ctx, "Demo")) break;
        FUNC_32(VAR_32, FUNC_35(30,30,30), 1);


        FUNC_2(VAR_31.dpy, VAR_31.win);
        FUNC_39(VAR_31.win);
        FUNC_11(VAR_31.dpy);


        VAR_27 = FUNC_44() - VAR_28;
        if (VAR_27 < VAR_10)
            FUNC_43(VAR_10 - VAR_27);
    }

    FUNC_33(VAR_32);
    FUNC_40();
    FUNC_17(VAR_31.dpy, VAR_31.win);
    FUNC_12(VAR_31.dpy, VAR_31.cmap);
    FUNC_9(VAR_31.dpy, VAR_31.win);
    FUNC_3(VAR_31.dpy);
    return 0;
}
