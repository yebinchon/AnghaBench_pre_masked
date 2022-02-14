
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char*) ;
 char FUNC_7 (char) ;

const char *FUNC_8(const char *VAR_0, const char *VAR_1, int *VAR_2)
{
    const char *VAR_3, *VAR_4;
    int VAR_5, VAR_6;
    char VAR_7[32];
    char *VAR_8;
    int VAR_9;


    VAR_6 = FUNC_5(VAR_0)+1;
    VAR_8 = FUNC_1(VAR_6*sizeof(char));
    if(!VAR_8)
        return ((void*)0);
    FUNC_3(VAR_8, VAR_0, VAR_6);
    for(VAR_9=0;VAR_9<VAR_6;VAR_9++)
        VAR_8[VAR_9] = FUNC_7(VAR_8[VAR_9]);

    VAR_5 = FUNC_5(VAR_1);
    FUNC_3(VAR_7, VAR_1, VAR_5);
    for(VAR_9=0;VAR_9<VAR_5;VAR_9++)
        VAR_7[VAR_9] = FUNC_7(VAR_7[VAR_9]);
    VAR_7[VAR_5++] = '=';
    VAR_7[VAR_5++] = '\"';
    VAR_7[VAR_5] = 0;

    VAR_3 = FUNC_6(VAR_8, VAR_7);
    if(!VAR_3) {
        FUNC_0("name not found\n");
        FUNC_2(VAR_8);
        return ((void*)0);
    }

    VAR_3 += VAR_5;
    VAR_4 = FUNC_4(VAR_3, '\"');
    if(!VAR_4)
    {
        FUNC_2(VAR_8);
        return ((void*)0);
    }

    *VAR_2 = VAR_4-VAR_3;

    VAR_3 = VAR_0+(VAR_3-VAR_8);

    FUNC_2(VAR_8);
    return VAR_3;
}
