
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char const*,int,int*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static WCHAR* FUNC_4(const char* VAR_1)
{
    WCHAR* VAR_2;
    WCHAR* VAR_3;

    if (!VAR_1 || !*VAR_1)
    {
        if (!(VAR_3 = VAR_2 = FUNC_1(FUNC_0(), 0, 3 * sizeof(WCHAR)))) return ((void*)0);
        *VAR_3++ = '?';
        *VAR_3++ = '#';
    }
    else
    {
        DWORD VAR_4 = FUNC_2(VAR_0, 0, VAR_1, -1, ((void*)0), 0);
        WCHAR* VAR_5;


        VAR_3 = VAR_2 = FUNC_1(FUNC_0(), 0, (5 * FUNC_3(VAR_1) + 1 + VAR_4) * sizeof(WCHAR));
        if (!VAR_2) return ((void*)0);
        VAR_5 = VAR_2 + 5 * FUNC_3(VAR_1) + 1;
        FUNC_2(VAR_0, 0, VAR_1, -1, VAR_5, VAR_4);

        while (*VAR_5)
        {
            switch (*VAR_5)
            {
            case '\\':
            case '/':
                *VAR_3++ = '[';
                *VAR_3++ = '\\';
                *VAR_3++ = '\\';
                *VAR_3++ = '/';
                *VAR_3++ = ']';
                break;
            case '.':
                *VAR_3++ = '?';
                break;
            default:
                *VAR_3++ = *VAR_5;
                break;
            }
            VAR_5++;
        }
    }
    *VAR_3 = 0;
    return VAR_2;
}
