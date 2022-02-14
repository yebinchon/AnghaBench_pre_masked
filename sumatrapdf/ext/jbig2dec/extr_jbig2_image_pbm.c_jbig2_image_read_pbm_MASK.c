
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int height; int stride; int data; } ;
typedef TYPE_1__ Jbig2Image ;
typedef int Jbig2Ctx ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int,int,int *) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (char*,char*,int*) ;
 int VAR_1 ;

Jbig2Image *
FUNC_8(Jbig2Ctx *VAR_2, FILE *VAR_3)
{
    int VAR_4, VAR_5[2];
    int VAR_6;
    Jbig2Image *VAR_7;
    int VAR_8;
    char VAR_9[32];


    while ((VAR_8 = FUNC_1(VAR_3)) != 'P') {
        if (FUNC_0(VAR_3))
            return ((void*)0);
    }
    if ((VAR_8 = FUNC_1(VAR_3)) != '4') {
        FUNC_2(VAR_1, "not a binary pbm file.\n");
        return ((void*)0);
    }




    VAR_6 = 0;
    VAR_4 = 0;
    while (VAR_6 < 2) {
        VAR_8 = FUNC_1(VAR_3);

        if (VAR_8 == ' ' || VAR_8 == '\t' || VAR_8 == '\r' || VAR_8 == '\n')
            continue;

        if (VAR_8 == '#') {
            while ((VAR_8 = FUNC_1(VAR_3)) != '\n');
            continue;
        }

        if (VAR_8 == VAR_0) {
            FUNC_2(VAR_1, "end-of-file parsing pbm header\n");
            return ((void*)0);
        }
        if (FUNC_4(VAR_8)) {
            VAR_9[VAR_4++] = VAR_8;
            while (FUNC_4(VAR_8 = FUNC_1(VAR_3))) {
                if (VAR_4 >= 32) {
                    FUNC_2(VAR_1, "pbm parsing error\n");
                    return ((void*)0);
                }
                VAR_9[VAR_4++] = VAR_8;
            }
            VAR_9[VAR_4] = '\0';
            if (FUNC_7(VAR_9, "%d", &VAR_5[VAR_6]) != 1) {
                FUNC_2(VAR_1, "failed to read pbm image dimensions\n");
                return ((void*)0);
            }
            VAR_4 = 0;
            VAR_6++;
        }
    }

    VAR_7 = FUNC_5(VAR_2, VAR_5[0], VAR_5[1]);
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_1, "failed to allocate %dx%d image for pbm file\n", VAR_5[0], VAR_5[1]);
        return ((void*)0);
    }


    (void)FUNC_3(VAR_7->data, 1, VAR_7->height * VAR_7->stride, VAR_3);
    if (FUNC_0(VAR_3)) {
        FUNC_2(VAR_1, "unexpected end of pbm file.\n");
        FUNC_6(VAR_2, VAR_7);
        return ((void*)0);
    }

    return VAR_7;
}
