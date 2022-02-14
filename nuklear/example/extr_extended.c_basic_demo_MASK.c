
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nk_vec2 {int dummy; } ;
struct nk_panel {int dummy; } ;
struct TYPE_6__ {struct nk_vec2 pos; } ;
struct TYPE_8__ {TYPE_2__ mouse; } ;
struct nk_context {TYPE_4__ input; } ;
struct media {TYPE_3__* font_14; int * menu; int * images; int dir; TYPE_1__* font_20; } ;
struct TYPE_7__ {int handle; } ;
struct TYPE_5__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nk_context*,char*,int ,int) ;
 scalar_t__ FUNC_2 (struct nk_context*,int ) ;
 scalar_t__ FUNC_3 (struct nk_context*,int ,char*,int ) ;
 int FUNC_4 (struct nk_context*,char*,int*) ;
 scalar_t__ FUNC_5 (struct nk_context*,char const*,int ,int ) ;
 scalar_t__ FUNC_6 (struct nk_context*,char const*,int ) ;
 int FUNC_7 (struct nk_context*) ;
 scalar_t__ FUNC_8 (struct nk_context*,int ,char const*,int ) ;
 scalar_t__ FUNC_9 (struct nk_context*,char const*,int ) ;
 int FUNC_10 (struct nk_context*) ;
 int FUNC_11 (struct nk_context*,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_13 (struct nk_context*,int,int) ;
 int FUNC_14 (struct nk_context*,int,int,int) ;
 scalar_t__ FUNC_15 (struct nk_context*,int ,char*,int ,int ) ;
 int FUNC_16 (struct nk_context*) ;
 int FUNC_17 (struct nk_context*) ;
 int FUNC_18 (struct nk_context*,size_t*,int,int ) ;
 int FUNC_19 (int,int,int,int) ;
 int FUNC_20 (struct nk_context*,int *) ;
 int VAR_8 ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (struct nk_context*) ;
 int FUNC_23 (struct nk_context*) ;
 int VAR_9 ;
 int FUNC_24 (struct nk_context*,struct media*,char*) ;
 int FUNC_25 (struct nk_context*,struct nk_vec2,int,int *,int) ;
 int FUNC_26 (struct nk_context*,struct media*,int) ;
 int FUNC_27 (struct nk_context*,struct media*,int) ;

__attribute__((used)) static void
FUNC_28(struct nk_context *VAR_10, struct media *VAR_11)
{
    static int VAR_12;
    static int VAR_13 = 1;
    static int VAR_14 = 0;
    static size_t VAR_15 = 80;
    static int VAR_16 = 0;
    static int VAR_17 = 3;
    static int VAR_18 = 0;
    static const char *VAR_19[] = {"Item 0","item 1","item 2"};
    static int VAR_20 = 0;
    static struct nk_vec2 VAR_21;

    int VAR_22 = 0;
    FUNC_20(VAR_10, &VAR_11->font_20->handle);
    FUNC_1(VAR_10, "Basic Demo", FUNC_19(320, 50, 275, 610),
        VAR_5|VAR_6|VAR_7);




    FUNC_24(VAR_10, VAR_11, "Popup & Scrollbar & Images");
    FUNC_26(VAR_10, VAR_11, 35);
    if (FUNC_3(VAR_10, VAR_11->dir, "Images", VAR_2))
        VAR_12 = !VAR_12;




    FUNC_24(VAR_10, VAR_11, "Selected Image");
    FUNC_27(VAR_10, VAR_11, 100);
    FUNC_11(VAR_10, VAR_11->images[VAR_17]);




    if (VAR_12) {
        struct nk_panel VAR_23;
        if (FUNC_15(VAR_10, VAR_1, "Image Popup", 0, FUNC_19(265, 0, 320, 220))) {
            FUNC_14(VAR_10, 82, 82, 3);
            for (VAR_22 = 0; VAR_22 < 9; ++VAR_22) {
                if (FUNC_2(VAR_10, VAR_11->images[VAR_22])) {
                    VAR_17 = VAR_22;
                    VAR_12 = 0;
                    FUNC_16(VAR_10);
                }
            }
            FUNC_17(VAR_10);
        }
    }



    FUNC_24(VAR_10, VAR_11, "Combo box");
    FUNC_26(VAR_10, VAR_11, 40);
    if (FUNC_6(VAR_10, VAR_19[VAR_16], FUNC_21(FUNC_22(VAR_10), 200))) {
        FUNC_13(VAR_10, 35, 1);
        for (VAR_22 = 0; VAR_22 < 3; ++VAR_22)
            if (FUNC_9(VAR_10, VAR_19[VAR_22], VAR_3))
                VAR_16 = VAR_22;
        FUNC_7(VAR_10);
    }

    FUNC_26(VAR_10, VAR_11, 40);
    if (FUNC_5(VAR_10, VAR_19[VAR_18], VAR_11->images[VAR_18], FUNC_21(FUNC_22(VAR_10), 200))) {
        FUNC_13(VAR_10, 35, 1);
        for (VAR_22 = 0; VAR_22 < 3; ++VAR_22)
            if (FUNC_8(VAR_10, VAR_11->images[VAR_22], VAR_19[VAR_22], VAR_4))
                VAR_18 = VAR_22;
        FUNC_7(VAR_10);
    }




    FUNC_24(VAR_10, VAR_11, "Checkbox");
    FUNC_26(VAR_10, VAR_11, 30);
    FUNC_4(VAR_10, "Flag 1", &VAR_13);
    FUNC_26(VAR_10, VAR_11, 30);
    FUNC_4(VAR_10, "Flag 2", &VAR_14);




    FUNC_24(VAR_10, VAR_11, "Progressbar");
    FUNC_26(VAR_10, VAR_11, 35);
    FUNC_18(VAR_10, &VAR_15, 100, VAR_8);




    if (FUNC_12(&VAR_10->input, VAR_0,
        FUNC_23(VAR_10),VAR_8)){
        VAR_21 = VAR_10->input.mouse.pos;
        VAR_20 = 1;
    }

    if (VAR_20) {
        int VAR_24 = FUNC_25(VAR_10, VAR_21, 140, &VAR_11->menu[0], 6);
        if (VAR_24 == -2) VAR_20 = 0;
        if (VAR_24 != -1) {
            FUNC_0(VAR_9, "piemenu selected: %d\n", VAR_24);
            VAR_20 = 0;
        }
    }
    FUNC_20(VAR_10, &VAR_11->font_14->handle);
    FUNC_10(VAR_10);
}
