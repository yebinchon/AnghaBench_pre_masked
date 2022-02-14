
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * LPWSTR ;
typedef char* LPCWSTR ;
typedef int BOOL ;


 size_t FUNC_0 (char const*) ;
 int VAR_0 ;
 int * FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static inline BOOL FUNC_5( LPCWSTR VAR_1, LPWSTR *VAR_2 )
{
    static const WCHAR VAR_3[] = {'B','a','s','i','c'};
    static const WCHAR VAR_4[] = {'r','e','a','l','m'};
    BOOL VAR_5;
    VAR_5 = !FUNC_4(VAR_1, VAR_3, FUNC_0(VAR_3)) &&
        ((VAR_1[FUNC_0(VAR_3)] == ' ') || !VAR_1[FUNC_0(VAR_3)]);
    if (VAR_5 && VAR_2)
    {
        LPCWSTR VAR_6;
        LPCWSTR VAR_7 = &VAR_1[FUNC_0(VAR_3)];
        LPCWSTR VAR_8;
        VAR_7++;
        *VAR_2=((void*)0);
        VAR_6 = FUNC_2(VAR_7,'=');
        if (!VAR_6)
            return VAR_0;
        VAR_8 = VAR_7;
        while (*VAR_8 == ' ')
            VAR_8++;
        if(!FUNC_4(VAR_8, VAR_4, FUNC_0(VAR_4)) &&
            (VAR_8[FUNC_0(VAR_4)] == ' ' || VAR_8[FUNC_0(VAR_4)] == '='))
        {
            VAR_6++;
            while (*VAR_6 == ' ')
                VAR_6++;
            if (*VAR_6 == '\0')
                return VAR_0;
            *VAR_2 = FUNC_1(VAR_6);
            FUNC_3(*VAR_2);
        }
    }

    return VAR_5;
}
