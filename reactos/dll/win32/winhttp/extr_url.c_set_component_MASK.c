
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static DWORD FUNC_1( WCHAR **VAR_5, DWORD *VAR_6, WCHAR *VAR_7, DWORD VAR_8, DWORD VAR_9, BOOL *VAR_10 )
{
    if (*VAR_5 && !*VAR_6) return VAR_0;
    if (!*VAR_6) return VAR_1;
    if (!*VAR_5)
    {
        if (VAR_8 && *VAR_6 && (VAR_9 & (VAR_2|VAR_3))) return VAR_0;
        *VAR_5 = VAR_7;
        *VAR_6 = VAR_8;
    }
    else
    {
        if (VAR_8 >= *VAR_6)
        {
            *VAR_6 = VAR_8+1;
            *VAR_10 = VAR_4;
            return VAR_1;
        }
        FUNC_0( *VAR_5, VAR_7, VAR_8 * sizeof(WCHAR) );
        (*VAR_5)[VAR_8] = 0;
        *VAR_6 = VAR_8;
    }
    return VAR_1;
}
