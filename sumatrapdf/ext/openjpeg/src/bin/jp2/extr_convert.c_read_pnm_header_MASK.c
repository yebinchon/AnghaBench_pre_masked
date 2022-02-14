
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnm_header {int format; int width; int height; int depth; int maxval; int bw; int gray; int graya; int rgb; int rgba; int ok; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_1, struct pnm_header *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    char VAR_6[256], VAR_7[256];
    char VAR_8[256];

    if (FUNC_1(VAR_8, 250, VAR_1) == ((void*)0)) {
        FUNC_2(VAR_0, "\nWARNING: fgets return a NULL value");
        return;
    }

    if (VAR_8[0] != 'P') {
        FUNC_2(VAR_0, "read_pnm_header:PNM:magic P missing\n");
        return;
    }
    VAR_3 = FUNC_0(VAR_8 + 1);
    if (VAR_3 < 1 || VAR_3 > 7) {
        FUNC_2(VAR_0, "read_pnm_header:magic format %d invalid\n", VAR_3);
        return;
    }
    VAR_2->format = VAR_3;
    VAR_5 = VAR_4 = 0;

    while (FUNC_1(VAR_8, 250, VAR_1)) {
        char *VAR_9;
        int VAR_10 = 0;

        if (*VAR_8 == '#') {
            continue;
        }

        VAR_9 = VAR_8;

        if (VAR_3 == 7) {
            VAR_9 = FUNC_3(VAR_9, VAR_6);

            if (VAR_9 == ((void*)0) || *VAR_9 == 0) {
                return;
            }

            if (FUNC_5(VAR_6, "ENDHDR") == 0) {
                VAR_4 = 1;
                break;
            }
            if (FUNC_5(VAR_6, "WIDTH") == 0) {
                VAR_9 = FUNC_4(VAR_9, &VAR_2->width);
                if (VAR_9 == ((void*)0) || *VAR_9 == 0) {
                    return;
                }

                continue;
            }
            if (FUNC_5(VAR_6, "HEIGHT") == 0) {
                VAR_9 = FUNC_4(VAR_9, &VAR_2->height);
                if (VAR_9 == ((void*)0) || *VAR_9 == 0) {
                    return;
                }

                continue;
            }
            if (FUNC_5(VAR_6, "DEPTH") == 0) {
                VAR_9 = FUNC_4(VAR_9, &VAR_2->depth);
                if (VAR_9 == ((void*)0) || *VAR_9 == 0) {
                    return;
                }

                continue;
            }
            if (FUNC_5(VAR_6, "MAXVAL") == 0) {
                VAR_9 = FUNC_4(VAR_9, &VAR_2->maxval);
                if (VAR_9 == ((void*)0) || *VAR_9 == 0) {
                    return;
                }

                continue;
            }
            if (FUNC_5(VAR_6, "TUPLTYPE") == 0) {
                VAR_9 = FUNC_3(VAR_9, VAR_7);
                if (VAR_9 == ((void*)0) || *VAR_9 == 0) {
                    return;
                }

                if (FUNC_5(VAR_7, "BLACKANDWHITE") == 0) {
                    VAR_2->bw = 1;
                    VAR_5 = 1;
                    continue;
                }
                if (FUNC_5(VAR_7, "GRAYSCALE") == 0) {
                    VAR_2->gray = 1;
                    VAR_5 = 1;
                    continue;
                }
                if (FUNC_5(VAR_7, "GRAYSCALE_ALPHA") == 0) {
                    VAR_2->graya = 1;
                    VAR_5 = 1;
                    continue;
                }
                if (FUNC_5(VAR_7, "RGB") == 0) {
                    VAR_2->rgb = 1;
                    VAR_5 = 1;
                    continue;
                }
                if (FUNC_5(VAR_7, "RGB_ALPHA") == 0) {
                    VAR_2->rgba = 1;
                    VAR_5 = 1;
                    continue;
                }
                FUNC_2(VAR_0, "read_pnm_header:unknown P7 TUPLTYPE %s\n", VAR_7);
                return;
            }
            FUNC_2(VAR_0, "read_pnm_header:unknown P7 idf %s\n", VAR_6);
            return;
        }


        if (VAR_2->width == 0) {
            VAR_9 = FUNC_4(VAR_9, &VAR_2->width);
            if ((VAR_9 == ((void*)0)) || (*VAR_9 == 0) || (VAR_2->width < 1)) {
                return;
            }
            VAR_10 = 1;
        }
        if (VAR_2->height == 0) {
            VAR_9 = FUNC_4(VAR_9, &VAR_2->height);
            if ((VAR_9 == ((void*)0)) && VAR_10) {
                continue;
            }
            if ((VAR_9 == ((void*)0)) || (*VAR_9 == 0) || (VAR_2->height < 1)) {
                return;
            }
            if (VAR_3 == 1 || VAR_3 == 4) {
                break;
            }
            VAR_10 = 1;
        }

        VAR_9 = FUNC_4(VAR_9, &VAR_2->maxval);
        if ((VAR_9 == ((void*)0)) && VAR_10) {
            continue;
        }
        if ((VAR_9 == ((void*)0)) || (*VAR_9 == 0)) {
            return;
        }
        break;
    }
    if (VAR_3 == 2 || VAR_3 == 3 || VAR_3 > 4) {
        if (VAR_2->maxval < 1 || VAR_2->maxval > 65535) {
            return;
        }
    }
    if (VAR_2->width < 1 || VAR_2->height < 1) {
        return;
    }

    if (VAR_3 == 7) {
        if (!VAR_4) {
            FUNC_2(VAR_0, "read_pnm_header:P7 without ENDHDR\n");
            return;
        }
        if (VAR_2->depth < 1 || VAR_2->depth > 4) {
            return;
        }

        if (VAR_5) {
            VAR_2->ok = 1;
        }
    } else {
        VAR_2->ok = 1;
        if (VAR_3 == 1 || VAR_3 == 4) {
            VAR_2->maxval = 255;
        }
    }
}
