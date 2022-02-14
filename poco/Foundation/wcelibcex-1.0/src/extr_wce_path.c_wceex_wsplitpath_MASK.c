
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__* FUNC_1 (scalar_t__ const*,char) ;

void FUNC_2( const wchar_t *VAR_3,
                       wchar_t *VAR_4, wchar_t *VAR_5, wchar_t *VAR_6, wchar_t *VAR_7 )
{
    wchar_t *VAR_8, *VAR_9;
    if( VAR_4 )
        *VAR_4 = 0;
    if( VAR_5 )
        *VAR_5 = 0;
    if( VAR_6 )
        *VAR_6 = 0;
    if( VAR_7 )
        *VAR_7 = 0;
    if( !VAR_3 || *VAR_3 == 0 )
        return;
    VAR_8 = FUNC_1( VAR_3, '/' );
    VAR_9 = FUNC_1( VAR_3, '\\' );
    if( VAR_8 > VAR_9 )
        VAR_9 = VAR_8;
    if( VAR_9 )
    {
        if( VAR_5 )
        {
            size_t VAR_10 = (VAR_9 - VAR_3) / sizeof(wchar_t);
            if( VAR_10 >= VAR_0 )
                VAR_10 = VAR_0 - 1;
            FUNC_0( VAR_5, VAR_3, VAR_10 );
        }
        VAR_9++;
    }
    else
        VAR_9 = (wchar_t*)VAR_3;
    if( VAR_6 )
    {
        wchar_t* VAR_11;
        FUNC_0( VAR_6, VAR_9, VAR_2 - 1 );
        VAR_11 = FUNC_1( VAR_6, '.' );
        if( VAR_11 )
            *VAR_11 = 0;
    }
    if( VAR_7 )
    {
        wchar_t* VAR_12 = FUNC_1( VAR_9, '.' );
        if( VAR_12 )
            FUNC_0( VAR_7, VAR_12, VAR_1 - 1 );
    }
}
