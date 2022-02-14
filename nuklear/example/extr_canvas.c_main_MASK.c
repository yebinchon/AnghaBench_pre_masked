
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_font_atlas {int dummy; } ;
struct nk_font {int handle; } ;
struct nk_context {int dummy; } ;
struct nk_canvas {int painter; } ;
struct device {int null; scalar_t__ font_tex; } ;
typedef int GLFWwindow ;


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
 int FUNC_0 (struct nk_context*,struct nk_canvas*,int ,int ,int ,int,int,int ) ;
 int FUNC_1 (struct nk_context*,struct nk_canvas*) ;
 int FUNC_2 (struct device*,struct nk_context*,int,int,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,void const*,int,int) ;
 int VAR_13 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (float,float,float,float) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int,int) ;
 int VAR_14 ;
 scalar_t__ FUNC_12 () ;
 int * FUNC_13 (int,int,char*,int *,int *) ;
 int FUNC_14 (int *,int*,int*) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,struct nk_context*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int ,char*,int,int *,int ,int ) ;
 int FUNC_26 (int ,int,int,int,int ,float,int ) ;
 int FUNC_27 (int ,int ,int ) ;
 int FUNC_28 (int ,float*,int,int ) ;
 int FUNC_29 (int ,int ,int,int ) ;
 int FUNC_30 (int ,int,int,int,int,int,int,int ) ;
 struct nk_font* FUNC_31 (struct nk_font_atlas*,int,int ) ;
 void* FUNC_32 (struct nk_font_atlas*,int*,int*,int ) ;
 int FUNC_33 (struct nk_font_atlas*) ;
 int FUNC_34 (struct nk_font_atlas*) ;
 int FUNC_35 (struct nk_font_atlas*,int ,int *) ;
 int FUNC_36 (struct nk_font_atlas*) ;
 int FUNC_37 (struct nk_context*) ;
 int FUNC_38 (int) ;
 int FUNC_39 (struct nk_context*,int *) ;
 int FUNC_40 (int,int,int,int) ;
 int FUNC_41 (int,int,int) ;
 int FUNC_42 (int ,int ,int,int ) ;
 int FUNC_43 (int ,int,int,int,int,int,int,int,int,int,int ) ;
 int FUNC_44 (int ,int,int,int,int,float,int ) ;
 int FUNC_45 (int ,int ,int,int,int ) ;
 int FUNC_46 (int ,int,int,int,int,int,int,int,int ) ;
 int FUNC_47 (struct nk_context*,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

int FUNC_48(int VAR_19, char *VAR_20[])
{

    static GLFWwindow *VAR_21;
    int VAR_22 = 0, VAR_23 = 0;


    struct device VAR_24;
    struct nk_font_atlas VAR_25;
    struct nk_context VAR_26;


    FUNC_18(VAR_13);
    if (!FUNC_15()) {
        FUNC_7(VAR_17, "[GFLW] failed to init!\n");
        FUNC_6(1);
    }
    FUNC_23(VAR_1, 3);
    FUNC_23(VAR_2, 3);
    FUNC_23(VAR_5, VAR_3);
    FUNC_23(VAR_4, VAR_8);
    VAR_21 = FUNC_13(VAR_12, VAR_11, "Demo", ((void*)0), ((void*)0));
    FUNC_16(VAR_21);
    FUNC_20(VAR_21, &VAR_26);
    FUNC_17(VAR_21, VAR_18);
    FUNC_19(VAR_21, VAR_15);
    FUNC_14(VAR_21, &VAR_22, &VAR_23);


    FUNC_11(0, 0, VAR_12, VAR_11);
    VAR_14 = 1;
    if (FUNC_12() != VAR_0) {
        FUNC_7(VAR_16, "Failed to setup GLEW\n");
        FUNC_6(1);
    }


    {FUNC_3(&VAR_24);
    {const void *VAR_27; int VAR_28, VAR_29;
    struct nk_font *VAR_30;
    FUNC_36(&VAR_25);
    FUNC_33(&VAR_25);
    VAR_30 = FUNC_31(&VAR_25, 13, 0);
    VAR_27 = FUNC_32(&VAR_25, &VAR_28, &VAR_29, VAR_10);
    FUNC_5(&VAR_24, VAR_27, VAR_28, VAR_29);
    FUNC_35(&VAR_25, FUNC_38((int)VAR_24.font_tex), &VAR_24.null);
    FUNC_39(&VAR_26, &VAR_30->handle);

    FUNC_10(VAR_7);
    while (!FUNC_24(VAR_21))
    {

        FUNC_47(&VAR_26, VAR_21);


        {struct nk_canvas VAR_31;
        FUNC_0(&VAR_26, &VAR_31, 0, 0, 0, VAR_22, VAR_23, FUNC_41(250,250,250));
        {
            FUNC_29(VAR_31.painter, FUNC_40(15,15,210,210), 5, FUNC_41(247, 230, 154));
            FUNC_29(VAR_31.painter, FUNC_40(20,20,200,200), 5, FUNC_41(188, 174, 118));
            FUNC_25(VAR_31.painter, FUNC_40(30, 30, 150, 20), "Text to draw", 12, &VAR_30->handle, FUNC_41(188,174,118), FUNC_41(0,0,0));
            FUNC_29(VAR_31.painter, FUNC_40(250,20,100,100), 0, FUNC_41(0,0,255));
            FUNC_27(VAR_31.painter, FUNC_40(20,250,100,100), FUNC_41(255,0,0));
            FUNC_30(VAR_31.painter, 250, 250, 350, 250, 300, 350, FUNC_41(0,255,0));
            FUNC_26(VAR_31.painter, 300, 180, 50, 0, 3.141592654f * 3.0f / 4.0f, FUNC_41(255,255,0));

            {float VAR_32[12];
            VAR_32[0] = 200; VAR_32[1] = 250;
            VAR_32[2] = 250; VAR_32[3] = 350;
            VAR_32[4] = 225; VAR_32[5] = 350;
            VAR_32[6] = 200; VAR_32[7] = 300;
            VAR_32[8] = 175; VAR_32[9] = 350;
            VAR_32[10] = 150; VAR_32[11] = 350;
            FUNC_28(VAR_31.painter, VAR_32, 6, FUNC_41(0,0,0));}

            FUNC_44(VAR_31.painter, 15, 10, 200, 10, 2.0f, FUNC_41(189,45,75));
            FUNC_45(VAR_31.painter, FUNC_40(370, 20, 100, 100), 10, 3, FUNC_41(0,0,255));
            FUNC_43(VAR_31.painter, 380, 200, 405, 270, 455, 120, 480, 200, 2, FUNC_41(0,150,220));
            FUNC_42(VAR_31.painter, FUNC_40(20, 370, 100, 100), 5, FUNC_41(0,255,120));
            FUNC_46(VAR_31.painter, 370, 250, 470, 250, 420, 350, 6, FUNC_41(255,0,143));
        }
        FUNC_1(&VAR_26, &VAR_31);}


        FUNC_14(VAR_21, &VAR_22, &VAR_23);
        FUNC_11(0, 0, VAR_22, VAR_23);
        FUNC_8(VAR_6);
        FUNC_9(0.2f, 0.2f, 0.2f, 1.0f);
        FUNC_2(&VAR_24, &VAR_26, VAR_22, VAR_23, VAR_9);
        FUNC_21(VAR_21);
    }}}
    FUNC_34(&VAR_25);
    FUNC_37(&VAR_26);
    FUNC_4(&VAR_24);
    FUNC_22();
    return 0;
}
