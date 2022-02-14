
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int outfile ;
typedef int * gzFile ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* VAR_2 ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

void FUNC_9(char *VAR_4, char *VAR_5)
{
    char VAR_6[VAR_1];
    FILE *VAR_7;
    gzFile VAR_8;

    if (FUNC_7(VAR_4) + FUNC_7(VAR_0) >= sizeof(VAR_6)) {
        FUNC_2(VAR_3, "%s: filename too long\n", VAR_2);
        FUNC_0(1);
    }

    FUNC_6(VAR_6, sizeof(VAR_6), "%s%s", VAR_4, VAR_0);

    VAR_7 = FUNC_1(VAR_4, "rb");
    if (VAR_7 == ((void*)0)) {
        FUNC_5(VAR_4);
        FUNC_0(1);
    }
    VAR_8 = FUNC_4(VAR_6, VAR_5);
    if (VAR_8 == ((void*)0)) {
        FUNC_2(VAR_3, "%s: can't gzopen %s\n", VAR_2, VAR_6);
        FUNC_0(1);
    }
    FUNC_3(VAR_7, VAR_8);

    FUNC_8(VAR_4);
}
