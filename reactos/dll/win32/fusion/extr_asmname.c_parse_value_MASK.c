
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static WCHAR *FUNC_2( const WCHAR *VAR_2, unsigned int VAR_3 )
{
    WCHAR *VAR_4;
    const WCHAR *VAR_5 = VAR_2;
    BOOL VAR_6 = VAR_0;
    unsigned int VAR_7 = 0;

    if (!(VAR_4 = FUNC_0( (VAR_3 + 1) * sizeof(WCHAR) ))) return ((void*)0);
    if (*VAR_5 == '\"')
    {
        VAR_6 = VAR_1;
        VAR_5++;
    }
    while (*VAR_5 && *VAR_5 != '\"') VAR_4[VAR_7++] = *VAR_5++;
    if ((VAR_6 && *VAR_5 != '\"') || (!VAR_6 && *VAR_5 == '\"'))
    {
        FUNC_1( VAR_4 );
        return ((void*)0);
    }
    VAR_4[VAR_7] = 0;
    return VAR_4;
}
