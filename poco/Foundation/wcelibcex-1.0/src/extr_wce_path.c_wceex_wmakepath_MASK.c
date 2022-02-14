
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t) ;

void FUNC_3( wchar_t *VAR_1,
                      const wchar_t *VAR_2, const wchar_t *VAR_3,
                      const wchar_t *VAR_4, const wchar_t *VAR_5 )
{
    wchar_t* VAR_6 = VAR_1;
    size_t VAR_7, VAR_8 = VAR_0 - 1;
    *VAR_1 = 0;
    if( VAR_2 && *VAR_2 )
    {
        FUNC_2( VAR_6, VAR_2, VAR_8 );
        VAR_7 = FUNC_1( VAR_6 );
        VAR_6 += VAR_7;
        VAR_8 -= VAR_7;
    }
    if( VAR_3 && *VAR_3 && VAR_8 )
    {
        FUNC_2( VAR_6, VAR_3, VAR_8 );
        VAR_7 = FUNC_1( VAR_6 );
        VAR_6 += VAR_7 - 1;
        VAR_8 -= VAR_7;

        if( VAR_8 && *VAR_6 != '\\' && *VAR_6 != '/' )
        {
            wchar_t* VAR_9 = FUNC_0( VAR_1, '/' );
            if( !VAR_9 )
                VAR_9 = FUNC_0( VAR_1, '\\' );
            VAR_6++;
            if( VAR_9 )
                *VAR_6 = *VAR_9;
            else
                *VAR_6 = '\\';
            VAR_6++;
            *VAR_6 = 0;
            VAR_8--;
        }
        VAR_6++;
    }
    if( VAR_4 && *VAR_4 && VAR_8 )
    {
        FUNC_2( VAR_6, VAR_4, VAR_8 );
        VAR_7 = FUNC_1( VAR_6 );
        VAR_6 += VAR_7;
        VAR_8 -= VAR_7;
    }
    if( VAR_5 && *VAR_5 && VAR_8 )
    {
        if( *VAR_5 != '.' )
        {
            *VAR_6 = '.';
            VAR_6++;
            *VAR_6 = 0;
            VAR_8--;
        }
        if( VAR_8 )
            FUNC_2( VAR_6, VAR_5, VAR_8 );
    }
}
