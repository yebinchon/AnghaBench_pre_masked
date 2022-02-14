
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,char const*) ;
 size_t FUNC_2 (char const*) ;

void FUNC_3(wchar_t* VAR_0, const wchar_t* VAR_1, const wchar_t* VAR_2, const wchar_t* VAR_3, const wchar_t* VAR_4)
{
    wchar_t *VAR_5 = VAR_0;

    if ( !VAR_0 )
        return;

    if (VAR_1 && VAR_1[0])
    {
        *VAR_5++ = VAR_1[0];
        *VAR_5++ = ':';
    }
    if (VAR_2 && VAR_2[0])
    {
        size_t VAR_6 = FUNC_2(VAR_2);
        FUNC_0(VAR_5, VAR_2, VAR_6 * sizeof(wchar_t));
        VAR_5 += VAR_6;
        if (VAR_5[-1] != '/' && VAR_5[-1] != '\\')
            *VAR_5++ = '\\';
    }
    if (VAR_3 && VAR_3[0])
    {
        size_t VAR_7 = FUNC_2(VAR_3);
        FUNC_0(VAR_5, VAR_3, VAR_7 * sizeof(wchar_t));
        VAR_5 += VAR_7;
    }
    if (VAR_4 && VAR_4[0])
    {
        if (VAR_4[0] != '.')
            *VAR_5++ = '.';
        FUNC_1(VAR_5, VAR_4);
    }
    else
        *VAR_5 = '\0';
}
