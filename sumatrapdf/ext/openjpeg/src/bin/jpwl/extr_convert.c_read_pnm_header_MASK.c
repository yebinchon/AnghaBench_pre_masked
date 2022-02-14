
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
    char *VAR_3;
    int VAR_4, VAR_5, VAR_6, VAR_7;
    char VAR_8[256], VAR_9[256];
    char VAR_10[256];

    if (FUNC_1(VAR_10, 250, VAR_1) == ((void*)0)) {
        FUNC_2(VAR_0, "\nWARNING: fgets return a NULL value");
        return;
    }

    if (VAR_10[0] != 'P') {
        FUNC_2(VAR_0, "read_pnm_header:PNM:magic P missing\n");
        return;
    }
    VAR_4 = FUNC_0(VAR_10 + 1);
    if (VAR_4 < 1 || VAR_4 > 7) {
        FUNC_2(VAR_0, "read_pnm_header:magic format %d invalid\n", VAR_4);
        return;
    }
    VAR_2->format = VAR_4;
    VAR_7 = VAR_6 = VAR_5 = 0;

    while (FUNC_1(VAR_10, 250, VAR_1)) {
        if (*VAR_10 == '#') {
            continue;
        }

        VAR_3 = VAR_10;

        if (VAR_4 == 7) {
            VAR_3 = FUNC_3(VAR_3, VAR_8);

            if (VAR_3 == ((void*)0) || *VAR_3 == 0) {
                return;
            }

            if (FUNC_5(VAR_8, "ENDHDR") == 0) {
                VAR_6 = 1;
                break;
            }
            if (FUNC_5(VAR_8, "WIDTH") == 0) {
                VAR_3 = FUNC_4(VAR_3, &VAR_2->width);
                if (VAR_3 == ((void*)0) || *VAR_3 == 0) {
                    return;
                }

                continue;
            }
            if (FUNC_5(VAR_8, "HEIGHT") == 0) {
                VAR_3 = FUNC_4(VAR_3, &VAR_2->height);
                if (VAR_3 == ((void*)0) || *VAR_3 == 0) {
                    return;
                }

                continue;
            }
            if (FUNC_5(VAR_8, "DEPTH") == 0) {
                VAR_3 = FUNC_4(VAR_3, &VAR_2->depth);
                if (VAR_3 == ((void*)0) || *VAR_3 == 0) {
                    return;
                }

                continue;
            }
            if (FUNC_5(VAR_8, "MAXVAL") == 0) {
                VAR_3 = FUNC_4(VAR_3, &VAR_2->maxval);
                if (VAR_3 == ((void*)0) || *VAR_3 == 0) {
                    return;
                }

                continue;
            }
            if (FUNC_5(VAR_8, "TUPLTYPE") == 0) {
                VAR_3 = FUNC_3(VAR_3, VAR_9);
                if (VAR_3 == ((void*)0) || *VAR_3 == 0) {
                    return;
                }

                if (FUNC_5(VAR_9, "BLACKANDWHITE") == 0) {
                    VAR_2->bw = 1;
                    VAR_7 = 1;
                    continue;
                }
                if (FUNC_5(VAR_9, "GRAYSCALE") == 0) {
                    VAR_2->gray = 1;
                    VAR_7 = 1;
                    continue;
                }
                if (FUNC_5(VAR_9, "GRAYSCALE_ALPHA") == 0) {
                    VAR_2->graya = 1;
                    VAR_7 = 1;
                    continue;
                }
                if (FUNC_5(VAR_9, "RGB") == 0) {
                    VAR_2->rgb = 1;
                    VAR_7 = 1;
                    continue;
                }
                if (FUNC_5(VAR_9, "RGB_ALPHA") == 0) {
                    VAR_2->rgba = 1;
                    VAR_7 = 1;
                    continue;
                }
                FUNC_2(VAR_0, "read_pnm_header:unknown P7 TUPLTYPE %s\n", VAR_9);
                return;
            }
            FUNC_2(VAR_0, "read_pnm_header:unknown P7 idf %s\n", VAR_8);
            return;
        }

        if (!VAR_5) {
            VAR_3 = FUNC_4(VAR_3, &VAR_2->width);

            VAR_3 = FUNC_4(VAR_3, &VAR_2->height);

            VAR_5 = 1;

            if (VAR_4 == 1 || VAR_4 == 4) {
                break;
            }

            continue;
        }
        if (VAR_4 == 2 || VAR_4 == 3 || VAR_4 == 5 || VAR_4 == 6) {

            VAR_3 = FUNC_4(VAR_3, &VAR_2->maxval);

            if (VAR_2->maxval > 65535) {
                return;
            }
        }
        break;
    }
    if (VAR_4 == 2 || VAR_4 == 3 || VAR_4 > 4) {
        if (VAR_2->maxval < 1 || VAR_2->maxval > 65535) {
            return;
        }
    }
    if (VAR_2->width < 1 || VAR_2->height < 1) {
        return;
    }

    if (VAR_4 == 7) {
        if (!VAR_6) {
            FUNC_2(VAR_0, "read_pnm_header:P7 without ENDHDR\n");
            return;
        }
        if (VAR_2->depth < 1 || VAR_2->depth > 4) {
            return;
        }

        if (VAR_2->width && VAR_2->height && VAR_2->depth & VAR_2->maxval && VAR_7) {
            VAR_2->ok = 1;
        }
    } else {
        if (VAR_4 != 1 && VAR_4 != 4) {
            if (VAR_2->width && VAR_2->height && VAR_2->maxval) {
                VAR_2->ok = 1;
            }
        } else {
            if (VAR_2->width && VAR_2->height) {
                VAR_2->ok = 1;
            }
            VAR_2->maxval = 255;
        }
    }
}
