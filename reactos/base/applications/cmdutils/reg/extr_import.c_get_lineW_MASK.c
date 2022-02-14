
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*,int,size_t,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 size_t FUNC_5 (char*) ;
 char* FUNC_6 (char*,char const*) ;

__attribute__((used)) static WCHAR *FUNC_7(FILE *VAR_1)
{
    static size_t VAR_2;
    static WCHAR *VAR_3, *VAR_4;
    WCHAR *VAR_5;

    if (!VAR_1) goto cleanup;

    if (!VAR_2)
    {
        VAR_2 = VAR_0;
        VAR_3 = FUNC_2(VAR_2 * sizeof(WCHAR));
        *VAR_3 = 0;
        VAR_4 = VAR_3;
    }
    VAR_5 = VAR_4;

    while (VAR_4)
    {
        static const WCHAR VAR_6[] = {'\r','\n',0};
        WCHAR *VAR_7 = FUNC_6(VAR_5, VAR_6);
        if (!VAR_7)
        {
            size_t VAR_8, VAR_9;
            VAR_8 = FUNC_5(VAR_4);
            FUNC_4(VAR_3, VAR_4, (VAR_8 + 1) * sizeof(WCHAR));
            if (VAR_2 - VAR_8 < 3)
            {
                VAR_2 *= 2;
                VAR_3 = FUNC_3(VAR_3, VAR_2 * sizeof(WCHAR));
            }
            if (!(VAR_9 = FUNC_0(VAR_3 + VAR_8, sizeof(WCHAR), VAR_2 - VAR_8 - 1, VAR_1)))
            {
                VAR_4 = ((void*)0);
                return VAR_3;
            }
            VAR_3[VAR_8 + VAR_9] = 0;
            VAR_4 = VAR_3;
            VAR_5 = VAR_3;
            continue;
        }
        VAR_4 = VAR_7 + 1;
        if (*VAR_7 == '\r' && *(VAR_7 + 1) == '\n') VAR_4++;
        *VAR_7 = 0;
        return VAR_5;
    }

cleanup:
    if (VAR_2) FUNC_1(VAR_3);
    VAR_2 = 0;
    return ((void*)0);
}
