
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

WCHAR *FUNC_2( const WCHAR *VAR_0 )
{
    const WCHAR *VAR_1 = VAR_0;
    WCHAR *VAR_2, *VAR_3;
    int VAR_4, VAR_5 = FUNC_1( VAR_0 ) + 2;

    if (!(VAR_2 = VAR_3 = FUNC_0( VAR_5 * sizeof(WCHAR) ))) return ((void*)0);

    VAR_5 = 0;
    while (1)
    {

        while (*VAR_1 != ' ' && (*VAR_2 = *VAR_1))
        {
            VAR_1++, VAR_5++;

            if (*VAR_1 != '\\' || *VAR_2 != '\\')
                VAR_2++;
        }


        if (!*VAR_1)
            break;


        VAR_4 = 0;
        while (VAR_1[VAR_4] == ' ')
            VAR_4++;


        if ( VAR_5 == 0 || VAR_1[-1] == '\\' || VAR_1[VAR_4] == '\\' )
            VAR_1 += VAR_4;
        else
            while (VAR_4 && (*VAR_2++ = *VAR_1++)) VAR_4--;
    }
    while (VAR_2 - VAR_3 > 0 && VAR_2[-1] == ' ') VAR_2--;
    if (VAR_2 - VAR_3 > 0 && VAR_2[-1] != '\\')
    {
        VAR_2[0] = '\\';
        VAR_2[1] = 0;
    }
    return VAR_3;
}
