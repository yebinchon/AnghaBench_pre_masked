
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t FUNC_1 (char*,int,size_t,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 size_t FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static WCHAR *FUNC_8(FILE *VAR_1)
{
    static WCHAR *VAR_2;
    static size_t VAR_3;
    static char *VAR_4, *VAR_5;
    char *VAR_6;

    FUNC_2(VAR_2);

    if (!VAR_1) goto cleanup;

    if (!VAR_3)
    {
        VAR_3 = VAR_0;
        VAR_4 = FUNC_3(VAR_3);
        *VAR_4 = 0;
        VAR_5 = VAR_4;
    }
    VAR_6 = VAR_5;

    while (VAR_5)
    {
        char *VAR_7 = FUNC_7(VAR_6, "\r\n");
        if (!VAR_7)
        {
            size_t VAR_8, VAR_9;
            VAR_8 = FUNC_6(VAR_5);
            FUNC_5(VAR_4, VAR_5, VAR_8 + 1);
            if (VAR_3 - VAR_8 < 3)
            {
                VAR_3 *= 2;
                VAR_4 = FUNC_4(VAR_4, VAR_3);
            }
            if (!(VAR_9 = FUNC_1(VAR_4 + VAR_8, 1, VAR_3 - VAR_8 - 1, VAR_1)))
            {
                VAR_5 = ((void*)0);
                VAR_2 = FUNC_0(VAR_4);
                return VAR_2;
            }
            VAR_4[VAR_8 + VAR_9] = 0;
            VAR_5 = VAR_4;
            VAR_6 = VAR_4;
            continue;
        }
        VAR_5 = VAR_7 + 1;
        if (*VAR_7 == '\r' && *(VAR_7 + 1) == '\n') VAR_5++;
        *VAR_7 = 0;
        VAR_2 = FUNC_0(VAR_6);
        return VAR_2;
    }

cleanup:
    VAR_2 = ((void*)0);
    if (VAR_3) FUNC_2(VAR_4);
    VAR_3 = 0;
    return ((void*)0);
}
