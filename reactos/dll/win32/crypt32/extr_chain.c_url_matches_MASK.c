
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static BOOL FUNC_7(LPCWSTR VAR_2, LPCWSTR VAR_3,
 DWORD *VAR_4)
{
    BOOL VAR_5 = VAR_1;

    FUNC_1("%s, %s\n", FUNC_2(VAR_2), FUNC_2(VAR_3));

    if (!VAR_2)
        *VAR_4 |= VAR_0;
    else if (!VAR_3)
        ;
    else
    {
        LPCWSTR VAR_6, VAR_7, VAR_8, VAR_9 = ((void*)0);

        WCHAR VAR_10[255];
        VAR_6 = FUNC_5(VAR_3, ':');
        if (VAR_6 && *(VAR_6 + 1) == '/' && *(VAR_6 + 2) == '/')
            VAR_3 = VAR_6 + 3;




        VAR_7 = FUNC_5(VAR_3, '/');
        if (!VAR_7)
            VAR_7 = FUNC_5(VAR_3, '?');
        if (!VAR_7)
            VAR_7 = VAR_3 + FUNC_6(VAR_3);




        for (VAR_6 = VAR_7; VAR_6 >= VAR_3 && *VAR_6 != ':' &&
         *VAR_6 != '@'; VAR_6--)
            ;
        if (*VAR_6 == ':')
            VAR_7 = VAR_6;

        if ((VAR_8 = FUNC_5(VAR_3, '@')))
            VAR_3 = VAR_8;

        if (*VAR_7)
        {
            if (VAR_7 - VAR_3 < FUNC_0(VAR_10))
            {
                FUNC_4(VAR_10, VAR_3,
                 (VAR_7 - VAR_3) * sizeof(WCHAR));
                VAR_10[VAR_7 - VAR_3] = 0;
                VAR_9 = VAR_10;
            }

        }
        else
            VAR_9 = VAR_3;
        if (VAR_9)
            VAR_5 = FUNC_3(VAR_2, VAR_9);
    }
    return VAR_5;
}
