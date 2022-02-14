
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nk_context {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ SDL_Event ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (float,float,float,float) ;
 int FUNC_6 (int ,int ,int,int) ;
 scalar_t__ FUNC_7 (struct nk_context*,char*,int ,int) ;
 scalar_t__ FUNC_8 (struct nk_context*,char*) ;
 int FUNC_9 (float*,int ) ;
 int FUNC_10 (struct nk_context*) ;
 int VAR_13 ;
 int FUNC_11 (struct nk_context*) ;
 int FUNC_12 (struct nk_context*) ;
 int FUNC_13 (struct nk_context*,int ,int,int) ;
 int FUNC_14 (struct nk_context*,int,int) ;
 int FUNC_15 (struct nk_context*) ;
 int FUNC_16 (struct nk_context*,int) ;
 int FUNC_17 (struct nk_context*,int,int,int) ;
 scalar_t__ FUNC_18 (struct nk_context*,char*,int ,int ) ;
 int FUNC_19 (struct nk_context*) ;
 int FUNC_20 (struct nk_context*,char*,int ) ;
 int FUNC_21 (struct nk_context*) ;
 int FUNC_22 (struct nk_context*) ;
 scalar_t__ FUNC_23 (struct nk_context*,char*,int) ;
 int FUNC_24 (struct nk_context*,char*,int ,int*,int,int,int) ;
 int FUNC_25 (int,int,int,int) ;
 int FUNC_26 (int,int,int) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (int ,int ,int ) ;
 int FUNC_29 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_30(void* VAR_17){
    struct nk_context *VAR_18 = (struct nk_context *)VAR_17;


    SDL_Event VAR_19;
    FUNC_11(VAR_18);
    while (FUNC_2(&VAR_19)) {
        if (VAR_19.type == VAR_12) VAR_14 = VAR_13;
        FUNC_27(&VAR_19);
    }
    FUNC_12(VAR_18);



    if (FUNC_7(VAR_18, "Demo", FUNC_25(50, 50, 200, 200),
        VAR_6|VAR_9|VAR_10|
        VAR_7|VAR_8|VAR_11))
    {
        FUNC_21(VAR_18);
        FUNC_13(VAR_18, VAR_4, 25, 2);
        FUNC_16(VAR_18, 45);
        if (FUNC_18(VAR_18, "FILE", VAR_5, FUNC_29(120, 200))) {
            FUNC_14(VAR_18, 30, 1);
            FUNC_20(VAR_18, "OPEN", VAR_5);
            FUNC_20(VAR_18, "CLOSE", VAR_5);
            FUNC_19(VAR_18);
        }
        FUNC_16(VAR_18, 45);
        if (FUNC_18(VAR_18, "EDIT", VAR_5, FUNC_29(120, 200))) {
            FUNC_14(VAR_18, 30, 1);
            FUNC_20(VAR_18, "COPY", VAR_5);
            FUNC_20(VAR_18, "CUT", VAR_5);
            FUNC_20(VAR_18, "PASTE", VAR_5);
            FUNC_19(VAR_18);
        }
        FUNC_15(VAR_18);
        FUNC_22(VAR_18);

        enum {EASY, HARD};
        static int VAR_20 = EASY;
        static int VAR_21 = 20;
        FUNC_17(VAR_18, 30, 80, 1);
        if (FUNC_8(VAR_18, "button"))
            FUNC_3(VAR_15, "button pressed\n");
        FUNC_14(VAR_18, 30, 2);
        if (FUNC_23(VAR_18, "easy", VAR_20 == EASY)) VAR_20 = EASY;
        if (FUNC_23(VAR_18, "hard", VAR_20 == HARD)) VAR_20 = HARD;
        FUNC_14(VAR_18, 25, 1);
        FUNC_24(VAR_18, "Compression:", 0, &VAR_21, 100, 10, 1);
    }
    FUNC_10(VAR_18);
    {float VAR_22[4];
    int VAR_23, VAR_24;
    FUNC_9(VAR_22, FUNC_26(28,48,62));
    FUNC_1(VAR_16, &VAR_23, &VAR_24);
    FUNC_6(0, 0, VAR_23, VAR_24);
    FUNC_4(VAR_0);
    FUNC_5(VAR_22[0], VAR_22[1], VAR_22[2], VAR_22[3]);





    FUNC_28(VAR_3, VAR_2, VAR_1);
    FUNC_0(VAR_16);}
}
