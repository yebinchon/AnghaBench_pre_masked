
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef char TCHAR ;


 int FUNC_0 (char const) ;

__attribute__((used)) static ULONG_PTR FUNC_1(const TCHAR *VAR_0)
{
    ULONG_PTR VAR_1;
    ULONG_PTR VAR_2;
    const TCHAR *VAR_3;

    for (VAR_3 = VAR_0; *VAR_3; VAR_3++)
        if (!FUNC_0(*VAR_3))
            break;

    VAR_3--;
    VAR_1 = 0;

    for (VAR_2 = 1; VAR_3 >= VAR_0; VAR_3--, VAR_2 *= 10)
        VAR_1 += (*VAR_3 - '0') * VAR_2;

    return VAR_1;
}
