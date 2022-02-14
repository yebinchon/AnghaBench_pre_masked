
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nk_context {int dummy; } ;
struct media {TYPE_3__* font_14; int edit; int convert; int del; int copy; TYPE_2__* font_18; int unchecked; int checked; int rocket; int pen; int cloud; int tools; int prev; int next; int pause; int stop; int play; TYPE_1__* font_20; } ;
struct TYPE_6__ {int handle; } ;
struct TYPE_5__ {int handle; } ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nk_context*,char*,int ,int) ;
 int FUNC_2 (struct nk_context*,int ) ;
 scalar_t__ FUNC_3 (struct nk_context*,int ,char*,int ) ;
 scalar_t__ FUNC_4 (struct nk_context*,char*) ;
 scalar_t__ FUNC_5 (struct nk_context*,int ,char*,int ) ;
 scalar_t__ FUNC_6 (struct nk_context*,int ,int ,int ) ;
 int FUNC_7 (struct nk_context*) ;
 scalar_t__ FUNC_8 (struct nk_context*,int ,char*,int ) ;
 int FUNC_9 (struct nk_context*) ;
 int FUNC_10 (struct nk_context*,int,int) ;
 int FUNC_11 (struct nk_context*,int,int,int) ;
 scalar_t__ FUNC_12 (struct nk_context*,char*,int ,int ) ;
 int FUNC_13 (struct nk_context*) ;
 int FUNC_14 (struct nk_context*,int ,char*,int ) ;
 int FUNC_15 (struct nk_context*) ;
 int FUNC_16 (struct nk_context*) ;
 int FUNC_17 (int,int,int,int) ;
 int FUNC_18 (struct nk_context*,int *) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (struct nk_context*) ;
 int VAR_9 ;
 int FUNC_21 (struct nk_context*,struct media*,char*) ;
 int FUNC_22 (struct nk_context*,struct media*,int) ;

__attribute__((used)) static void
FUNC_23(struct nk_context *VAR_10, struct media *VAR_11)
{
    static int VAR_12 = 1;
    static int VAR_13 = 1;
    static int VAR_14 = 0;
    static int VAR_15 = 1;

    FUNC_18(VAR_10, &VAR_11->font_20->handle);
    FUNC_1(VAR_10, "Button Demo", FUNC_17(50,50,255,610),
        VAR_5|VAR_6|VAR_8);




    FUNC_15(VAR_10);
    {

        FUNC_11(VAR_10, 40, 40, 4);
        if (FUNC_12(VAR_10, "Music", VAR_11->play, FUNC_19(110,120)))
        {

            FUNC_10(VAR_10, 25, 1);
            FUNC_14(VAR_10, VAR_11->play, "Play", VAR_4);
            FUNC_14(VAR_10, VAR_11->stop, "Stop", VAR_4);
            FUNC_14(VAR_10, VAR_11->pause, "Pause", VAR_4);
            FUNC_14(VAR_10, VAR_11->next, "Next", VAR_4);
            FUNC_14(VAR_10, VAR_11->prev, "Prev", VAR_4);
            FUNC_13(VAR_10);
        }
        FUNC_2(VAR_10, VAR_11->tools);
        FUNC_2(VAR_10, VAR_11->cloud);
        FUNC_2(VAR_10, VAR_11->pen);
    }
    FUNC_16(VAR_10);




    FUNC_21(VAR_10, VAR_11, "Push buttons");
    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_4(VAR_10, "Push me"))
        FUNC_0(VAR_9, "pushed!\n");
    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_3(VAR_10, VAR_11->rocket, "Styled", VAR_2))
        FUNC_0(VAR_9, "rocket!\n");




    FUNC_21(VAR_10, VAR_11, "Repeater");
    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_4(VAR_10, "Press me"))
        FUNC_0(VAR_9, "pressed!\n");




    FUNC_21(VAR_10, VAR_11, "Toggle buttons");
    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_3(VAR_10, (VAR_13) ? VAR_11->checked: VAR_11->unchecked, "Toggle", VAR_3))
        VAR_13 = !VAR_13;

    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_3(VAR_10, (VAR_14) ? VAR_11->checked: VAR_11->unchecked, "Toggle", VAR_3))
        VAR_14 = !VAR_14;

    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_3(VAR_10, (VAR_15) ? VAR_11->checked: VAR_11->unchecked, "Toggle", VAR_3))
        VAR_15 = !VAR_15;




    FUNC_21(VAR_10, VAR_11, "Radio buttons");
    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_5(VAR_10, (VAR_12 == 0)?VAR_0:VAR_1, "Select", VAR_3))
        VAR_12 = 0;
    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_5(VAR_10, (VAR_12 == 1)?VAR_0:VAR_1, "Select", VAR_3))
        VAR_12 = 1;
    FUNC_22(VAR_10, VAR_11, 35);
    if (FUNC_5(VAR_10, (VAR_12 == 2)?VAR_0:VAR_1, "Select", VAR_3))
        VAR_12 = 2;




    FUNC_18(VAR_10, &VAR_11->font_18->handle);
    if (FUNC_6(VAR_10, VAR_7, FUNC_19(150, 300), FUNC_20(VAR_10))) {
        FUNC_10(VAR_10, 30, 1);
        if (FUNC_8(VAR_10, VAR_11->copy, "Clone", VAR_4))
            FUNC_0(VAR_9, "pressed clone!\n");
        if (FUNC_8(VAR_10, VAR_11->del, "Delete", VAR_4))
            FUNC_0(VAR_9, "pressed delete!\n");
        if (FUNC_8(VAR_10, VAR_11->convert, "Convert", VAR_4))
            FUNC_0(VAR_9, "pressed convert!\n");
        if (FUNC_8(VAR_10, VAR_11->edit, "Edit", VAR_4))
            FUNC_0(VAR_9, "pressed edit!\n");
        FUNC_7(VAR_10);
    }
    FUNC_18(VAR_10, &VAR_11->font_14->handle);
    FUNC_9(VAR_10);
}
