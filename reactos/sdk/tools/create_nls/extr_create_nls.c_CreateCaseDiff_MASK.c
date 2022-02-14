
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef size_t WORD ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char**,int) ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static BOOL FUNC_7(char *VAR_4)
{
    char VAR_5[256];
    char *VAR_6;
    WORD VAR_7, VAR_8;
    FILE *VAR_9;
    int VAR_10;

    VAR_3 = (WORD *)FUNC_0(65536, sizeof(WORD));
    if(!VAR_3) {
        FUNC_5("Not enough memory for to upper table\n");
        return VAR_0;
    }

    VAR_2 = (WORD *)FUNC_0(65536, sizeof(WORD));
    if(!VAR_2) {
        FUNC_5("Not enough memory for to lower table\n");
        return VAR_0;
    }

    VAR_9 = FUNC_3(VAR_4, "r");
    if(VAR_9 == ((void*)0)) {
        FUNC_5("Could not open file \"%s\"\n", VAR_4);
        return VAR_0;
    }

    VAR_10 = 0;

    while(FUNC_2(VAR_5, sizeof(VAR_5), VAR_9)) {
        VAR_10++;
        VAR_6 = VAR_5;
        while(*VAR_6 && FUNC_4(*VAR_6)) VAR_6++;

        if(!*VAR_6)
            continue;


        VAR_7 = (WORD)FUNC_6(VAR_6, &VAR_6, 16);




        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;


        while(*VAR_6 && FUNC_4(*VAR_6)) VAR_6++;
        if(!*VAR_6) continue;
        if(*VAR_6 != ';') {
            VAR_8 = (WORD)FUNC_6(VAR_6, &VAR_6, 16);
            VAR_3[VAR_7] = VAR_8 - VAR_7;
            while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        }
        else
            VAR_6++;


        while(*VAR_6 && FUNC_4(*VAR_6)) VAR_6++;
        if(!*VAR_6) continue;
        if(*VAR_6 != ';') {
            VAR_8 = (WORD)FUNC_6(VAR_6, &VAR_6, 16);
            VAR_2[VAR_7] = VAR_8 - VAR_7;
            while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        }
        else
            VAR_6++;


        while(*VAR_6 && *VAR_6 != ';') VAR_6++;
        if(!*VAR_6)
            continue;
        VAR_6++;
    }

    FUNC_1(VAR_9);

    return VAR_1;
}
