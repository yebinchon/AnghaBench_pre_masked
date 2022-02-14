
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_font_atlas {int dummy; } ;
struct nk_context {int dummy; } ;
typedef int SDL_GLContext ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int (*) (void*),void*,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (struct nk_font_atlas**) ;
 int FUNC_11 () ;
 struct nk_context* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;

int FUNC_14(int VAR_17, char* VAR_18[])
{

    struct nk_context *VAR_19;
    SDL_GLContext VAR_20;

    FUNC_7(VAR_7, "0");

    FUNC_5 (VAR_0, VAR_1);
    FUNC_5 (VAR_5, VAR_4);
    FUNC_5(VAR_2, 3);
    FUNC_5(VAR_3, 3);
    FUNC_5(VAR_6, 1);
    VAR_16 = FUNC_1("Demo",
        VAR_8, VAR_8,
        VAR_13, VAR_12, VAR_10|VAR_11|VAR_9);
    VAR_20 = FUNC_3(VAR_16);


    FUNC_9(0, 0, VAR_13, VAR_12);

    VAR_19 = FUNC_12(VAR_16);


    {struct nk_font_atlas *VAR_21;
    FUNC_10(&VAR_21);






    FUNC_11();

                                               ;}
    while (VAR_15) FUNC_0((void*)VAR_19);


    FUNC_13();
    FUNC_4(VAR_20);
    FUNC_2(VAR_16);
    FUNC_6();
    return 0;
}
