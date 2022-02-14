
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gzFile ;
typedef int buf ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* VAR_3 ;
 int FUNC_6 (char*,int,char*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

void FUNC_10(char *VAR_5)
{
    char VAR_6[VAR_1];
    char *VAR_7, *VAR_8;
    FILE *VAR_9;
    gzFile VAR_10;
    size_t VAR_11 = FUNC_8(VAR_5);

    if (VAR_11 + FUNC_8(VAR_0) >= sizeof(VAR_6)) {
        FUNC_2(VAR_4, "%s: filename too long\n", VAR_3);
        FUNC_0(1);
    }

    FUNC_6(VAR_6, sizeof(VAR_6), "%s", VAR_5);

    if (VAR_11 > VAR_2 && FUNC_7(VAR_5+VAR_11-VAR_2, VAR_0) == 0) {
        VAR_7 = VAR_5;
        VAR_8 = VAR_6;
        VAR_8[VAR_11-3] = '\0';
    } else {
        VAR_8 = VAR_5;
        VAR_7 = VAR_6;
        FUNC_6(VAR_6 + VAR_11, sizeof(VAR_6) - VAR_11, "%s", VAR_0);
    }
    VAR_10 = FUNC_4(VAR_7, "rb");
    if (VAR_10 == ((void*)0)) {
        FUNC_2(VAR_4, "%s: can't gzopen %s\n", VAR_3, VAR_7);
        FUNC_0(1);
    }
    VAR_9 = FUNC_1(VAR_8, "wb");
    if (VAR_9 == ((void*)0)) {
        FUNC_5(VAR_5);
        FUNC_0(1);
    }

    FUNC_3(VAR_10, VAR_9);

    FUNC_9(VAR_7);
}
