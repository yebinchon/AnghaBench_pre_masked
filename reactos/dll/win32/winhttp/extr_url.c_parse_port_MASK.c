
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int INTERNET_PORT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static DWORD FUNC_1( const WCHAR *VAR_2, DWORD VAR_3, INTERNET_PORT *VAR_4 )
{
    const WCHAR *VAR_5 = VAR_2;
    DWORD VAR_6 = 0;
    while (VAR_3 && FUNC_0( *VAR_5 ))
    {
        if ((VAR_6 = VAR_6 * 10 + *VAR_5 - '0') > 65535) return VAR_1;
        VAR_5++; VAR_3--;
    }
    *VAR_4 = VAR_6;
    return VAR_0;
}
