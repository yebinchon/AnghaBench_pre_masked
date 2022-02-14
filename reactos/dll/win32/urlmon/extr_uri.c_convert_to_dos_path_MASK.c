
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(const WCHAR *VAR_0, DWORD VAR_1,
                                WCHAR *VAR_2, DWORD *VAR_3)
{
    const WCHAR *VAR_4 = VAR_0;

    if(VAR_1 > 3 && *VAR_4 == '/' && FUNC_0(VAR_0+1))

        ++VAR_4;

    for(; VAR_4 < VAR_0+VAR_1; ++VAR_4) {
        if(*VAR_4 == '/') {
            if(VAR_2)
                *VAR_2++ = '\\';
            (*VAR_3)++;
        } else {
            if(VAR_2)
                *VAR_2++ = *VAR_4;
            (*VAR_3)++;
        }
    }
}
