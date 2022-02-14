
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct index {char c; int color; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ SDL_Surface ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int*,int,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (struct index*,int,char,int*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char**,int) ;

SDL_Surface *
FUNC_7(char *VAR_1[]) {





    char *VAR_2;



    int VAR_3 = FUNC_6(VAR_1[0], &VAR_2, 10);
    int VAR_4 = FUNC_6(VAR_2 + 1, &VAR_2, 10);
    int VAR_5 = FUNC_6(VAR_2 + 1, &VAR_2, 10);
    int VAR_6 = FUNC_6(VAR_2 + 1, &VAR_2, 10);


    FUNC_2(0 <= VAR_3 && VAR_3 < 256);
    FUNC_2(0 <= VAR_4 && VAR_4 < 256);
    FUNC_2(0 <= VAR_5 && VAR_5 < 256);
    FUNC_2(VAR_6 == 1);


    struct index VAR_7[VAR_5];
    for (int VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
        const char *VAR_9 = VAR_1[1+VAR_8];
        VAR_7[VAR_8].c = VAR_9[0];
        FUNC_2(VAR_9[1] == '\t');
        FUNC_2(VAR_9[2] == 'c');
        FUNC_2(VAR_9[3] == ' ');
        if (VAR_9[4] == '#') {
            VAR_7[VAR_8].color = 0xff000000 | FUNC_6(&VAR_9[5], &VAR_2, 0x10);
            FUNC_2(*VAR_2 == '\0');
        } else {
            FUNC_2(!FUNC_5("None", &VAR_9[4]));
            VAR_7[VAR_8].color = 0;
        }
    }


    uint32_t *VAR_10 = FUNC_3(4 * VAR_3 * VAR_4);
    if (!VAR_10) {
        FUNC_0("Could not allocate icon memory");
        return ((void*)0);
    }
    for (int VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
        const char *VAR_12 = VAR_1[1 + VAR_5 + VAR_11];
        for (int VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
            char VAR_14 = VAR_12[VAR_13];
            uint32_t VAR_15;
            bool VAR_16 = FUNC_4(VAR_7, VAR_5, VAR_14, &VAR_15);
            FUNC_2(VAR_16);
            VAR_10[VAR_11 * VAR_3 + VAR_13] = VAR_15;
        }
    }


    uint32_t VAR_17 = 0x000000ff;
    uint32_t VAR_18 = 0x0000ff00;
    uint32_t VAR_19 = 0x00ff0000;
    uint32_t VAR_20 = 0xff000000;







    SDL_Surface *VAR_21 = FUNC_1(VAR_10,
                                                    VAR_3, VAR_4,
                                                    32, 4 * VAR_3,
                                                    VAR_18, VAR_19, VAR_20, VAR_17);
    if (!VAR_21) {
        FUNC_0("Could not create icon surface");
        return ((void*)0);
    }

    VAR_21->flags &= ~VAR_0;
    return VAR_21;
}
