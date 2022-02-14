
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {scalar_t__ wakeup_event; int * window; scalar_t__ vsync; } ;
typedef scalar_t__ Uint32 ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,char*) ;
 int * FUNC_2 (char*,int ,int ,int,int,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct vo*) ;

__attribute__((used)) static int FUNC_9(struct vo *VAR_10)
{
    struct priv *VAR_11 = VAR_10->priv;

    if (FUNC_7(VAR_5)) {
        FUNC_0(VAR_10, "Another component is using SDL already.\n");
        return -1;
    }


    FUNC_6(VAR_2, "1",
                            VAR_0);
    FUNC_6(VAR_4, "0",
                            VAR_0);


    FUNC_6(VAR_3, VAR_11->vsync ? "1" : "0",
                            VAR_1);

    if (FUNC_4(VAR_6)) {
        FUNC_0(VAR_10, "SDL_Init failed\n");
        return -1;
    }


    VAR_11->window = FUNC_2("MPV", VAR_7, VAR_7,
                                  640, 480, VAR_9 | VAR_8);
    if (!VAR_11->window) {
        FUNC_0(VAR_10, "SDL_CreateWindow failed\n");
        return -1;
    }



    if (FUNC_8(VAR_10) != 0) {
        FUNC_3(VAR_11->window);
        VAR_11->window = ((void*)0);
        return -1;
    }

    VAR_11->wakeup_event = FUNC_5(1);
    if (VAR_11->wakeup_event == (Uint32)-1)
        FUNC_0(VAR_10, "SDL_RegisterEvents() failed.\n");

    FUNC_1(VAR_10, "Warning: this legacy VO has bad performance. Consider fixing "
                "your graphics drivers, or not forcing the sdl VO.\n");

    return 0;
}
