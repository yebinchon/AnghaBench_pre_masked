
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct buffer {char* string; int pos; } ;


 int FUNC_0 (struct sd*,char*) ;
 char FUNC_1 (struct sd*,struct buffer*,char) ;
 int FUNC_2 (struct sd*,char**,struct buffer*) ;
 int FUNC_3 (struct buffer*,scalar_t__) ;
 int FUNC_4 (struct sd*,int,struct buffer*) ;
 int FUNC_5 (struct sd*,char**,struct buffer*) ;
 int FUNC_6 (struct sd*,char**,struct buffer*) ;
 int FUNC_7 (struct sd*,char**,struct buffer*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int *,char*) ;
 char* FUNC_12 (int *,char*,int) ;

char *FUNC_13(struct sd *VAR_0, char *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
    if (!VAR_1) {
        FUNC_0(VAR_0, "SDH filtering not possible - format missing\n");
        return VAR_4 ? FUNC_12(((void*)0), VAR_3, VAR_4) : FUNC_11(((void*)0), VAR_3);
    }


    char *VAR_5 = VAR_4 ? FUNC_12(((void*)0), VAR_3, VAR_4) : VAR_3;

    int VAR_6 = 0;

    for (char *VAR_7 = VAR_1; *VAR_7; VAR_7++) {
        if (*VAR_7 == ',') {
            VAR_6++;
            if (FUNC_9(VAR_7 + 1, "Text", 4) == 0)
                break;
        }
    }

    VAR_6 -= VAR_2;

    struct buffer VAR_8;
    struct buffer *VAR_9 = &VAR_8;

    FUNC_3(VAR_9, FUNC_8(VAR_5) + 1);

    char *VAR_10 = VAR_5;


    for (int VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        while (*VAR_10) {
            char VAR_12 = FUNC_1(VAR_0, VAR_9, VAR_10[0]);
            VAR_10++;
            if (VAR_12 == ',')
                break;
        }
    }
    if (!*VAR_10) {
        FUNC_10(VAR_9->string);
        FUNC_0(VAR_0, "SDH filtering not possible - cannot find text field\n");
        return VAR_4 ? VAR_5 : FUNC_11(((void*)0), VAR_5);
    }

    bool VAR_13 = 0;
    bool VAR_14 = 0;
    int VAR_15 = VAR_9->pos;
    int VAR_16 = VAR_9->pos;



    while (*VAR_10) {
        VAR_14 = 0;
        VAR_15 = VAR_9->pos;


        FUNC_7(VAR_0, &VAR_10, VAR_9);


        while (*VAR_10 && !(VAR_10[0] == '\\' && VAR_10[1] == 'N')) {
            FUNC_2(VAR_0, &VAR_10, VAR_9);
            if (VAR_10[0] == '[') {
                if (!FUNC_5(VAR_0, &VAR_10, VAR_9)) {
                    FUNC_1(VAR_0, VAR_9, VAR_10[0]);
                    VAR_10++;
                    VAR_14 = 1;
                }
            } else if (VAR_10[0] == '(') {
                if (!FUNC_6(VAR_0, &VAR_10, VAR_9)) {
                    FUNC_1(VAR_0, VAR_9, VAR_10[0]);
                    VAR_10++;
                    VAR_14 = 1;
                }
            } else if (*VAR_10 && VAR_10[0] != '\\') {
                if ((VAR_10[0] > 32 && VAR_10[0] < 127 && VAR_10[0] != '-') ||
                    (unsigned char)VAR_10[0] >= 0xC0)
                {
                    VAR_14 = 1;
                }
                FUNC_1(VAR_0, VAR_9, VAR_10[0]);
                VAR_10++;
            } else if (VAR_10[0] == '\\' && VAR_10[1] != 'N') {
                FUNC_1(VAR_0, VAR_9, VAR_10[0]);
                VAR_10++;
            }
        }

        if (*VAR_10) {

            if (VAR_14) {
                VAR_13 = 1;
                VAR_16 = VAR_9->pos;
                FUNC_1(VAR_0, VAR_9, VAR_10[0]);
                FUNC_1(VAR_0, VAR_9, VAR_10[1]);
                VAR_10 += 2;
            } else {

                FUNC_4(VAR_0, VAR_15, VAR_9);

                VAR_10 += 2;
            }
        }
    }


    if (!VAR_14) {
        VAR_9->pos = VAR_16;
    } else {
        VAR_13 = 1;
    }
    if (VAR_4)
        FUNC_10(VAR_5);
    if (VAR_13) {

        FUNC_1(VAR_0, VAR_9, '\0');
        return VAR_9->string;
    } else {

        FUNC_10(VAR_9->string);
        return ((void*)0);
    }
}
