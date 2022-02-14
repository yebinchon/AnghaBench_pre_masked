
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nk_context {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef int NkAllegro5Font ;
typedef int ALLEGRO_TIMEOUT ;
typedef int ALLEGRO_EVENT_QUEUE ;
typedef TYPE_1__ ALLEGRO_EVENT ;
typedef int ALLEGRO_DISPLAY ;


 scalar_t__ VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,double) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int,int,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int,int ) ;
 int FUNC_19 (int *,TYPE_1__*,int *) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ,char*) ;
 int * FUNC_22 (char*,int,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_1__*) ;
 struct nk_context* FUNC_25 (int *,int *,int ,int ) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 scalar_t__ FUNC_28 (struct nk_context*,char*,int ,int) ;
 scalar_t__ FUNC_29 (struct nk_context*,char*) ;
 int FUNC_30 (struct nk_context*) ;
 int FUNC_31 (struct nk_context*) ;
 int FUNC_32 (struct nk_context*) ;
 int FUNC_33 (struct nk_context*,int,int) ;
 int FUNC_34 (struct nk_context*,int,int,int) ;
 scalar_t__ FUNC_35 (struct nk_context*,char*,int) ;
 int FUNC_36 (struct nk_context*,char*,int ,int*,int,int,int) ;
 int FUNC_37 (int,int,int,int) ;
 int FUNC_38 (struct nk_context*) ;
 int VAR_15 ;

int FUNC_39(void)
{

    ALLEGRO_DISPLAY *VAR_16 = ((void*)0);
    ALLEGRO_EVENT_QUEUE *VAR_17 = ((void*)0);

    if (!FUNC_10()) {
        FUNC_21(VAR_15, "failed to initialize allegro5!\n");
        FUNC_20(1);
    }

    FUNC_13();
    FUNC_16(150);
    FUNC_12();

    FUNC_17(VAR_6|VAR_2|VAR_1);
    FUNC_18(VAR_4, 1, VAR_5);
    FUNC_18(VAR_3, 8, VAR_5);
    VAR_16 = FUNC_1(VAR_14, VAR_13);
    if (!VAR_16) {
        FUNC_21(VAR_15, "failed to create display!\n");
        FUNC_20(1);
    }

    VAR_17 = FUNC_2();
    if (!VAR_17) {
        FUNC_21(VAR_15, "failed to create event_queue!\n");
        FUNC_3(VAR_16);
        FUNC_20(1);
    }

    FUNC_15(VAR_17, FUNC_6(VAR_16));
    FUNC_15(VAR_17, FUNC_8());
    FUNC_15(VAR_17, FUNC_7());

    NkAllegro5Font *VAR_18;
    VAR_18 = FUNC_22("../../../extra_font/Roboto-Regular.ttf", 12, 0);
    struct nk_context *VAR_19;

    VAR_19 = FUNC_25(VAR_18, VAR_16, VAR_14, VAR_13);







    while(1)
    {
        ALLEGRO_EVENT VAR_20;
        ALLEGRO_TIMEOUT VAR_21;
        FUNC_11(&VAR_21, 0.06);

        bool VAR_22 = FUNC_19(VAR_17, &VAR_20, &VAR_21);

        if (VAR_22 && VAR_20.type == VAR_0) {
            break;
        }



        FUNC_31(VAR_19);
        if (VAR_22) {
            while (VAR_22) {
                FUNC_24(&VAR_20);
                VAR_22 = FUNC_9(VAR_17, &VAR_20);
            }
        }
        FUNC_32(VAR_19);


        if (FUNC_28(VAR_19, "Demo", FUNC_37(50, 50, 200, 200),
            VAR_7|VAR_10|VAR_11|
            VAR_8|VAR_9|VAR_12))
        {
            enum {EASY, HARD};
            static int VAR_23 = EASY;
            static int VAR_24 = 20;

            FUNC_34(VAR_19, 30, 80, 1);
            if (FUNC_29(VAR_19, "button"))
                FUNC_21(VAR_15, "button pressed\n");
            FUNC_33(VAR_19, 30, 2);
            if (FUNC_35(VAR_19, "easy", VAR_23 == EASY)) VAR_23 = EASY;
            if (FUNC_35(VAR_19, "hard", VAR_23 == HARD)) VAR_23 = HARD;
            FUNC_33(VAR_19, 22, 1);
            FUNC_36(VAR_19, "Compression:", 0, &VAR_24, 100, 10, 1);
        }
        FUNC_30(VAR_19);



        FUNC_38(VAR_19);




        FUNC_0(FUNC_14(19, 43, 81));



        FUNC_26();
        FUNC_5();
    }

    FUNC_23(VAR_18);
    FUNC_27();
    FUNC_3(VAR_16);
    FUNC_4(VAR_17);
    return 0;
}
