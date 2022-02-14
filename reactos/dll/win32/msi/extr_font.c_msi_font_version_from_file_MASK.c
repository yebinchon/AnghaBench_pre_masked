
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char const*,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char const*) ;

WCHAR *FUNC_8( const WCHAR *VAR_1 )
{
    static const WCHAR VAR_2[] = {'%','u','.','%','u','.','0','.','0',0};
    WCHAR *VAR_3, *VAR_4, *VAR_5, *VAR_6 = ((void*)0);

    if ((VAR_3 = FUNC_2( VAR_1, VAR_0 )))
    {
        int VAR_7, VAR_8 = 0, VAR_9 = 0;
        if ((VAR_4 = FUNC_6( VAR_3, ';' ))) *VAR_4 = 0;
        VAR_4 = VAR_3;
        while (*VAR_4 && !FUNC_1( *VAR_4 )) VAR_4++;
        if ((VAR_5 = FUNC_6( VAR_4, '.' )))
        {
            VAR_8 = FUNC_0( VAR_4 );
            VAR_4 = ++VAR_5;
            while (*VAR_5 && FUNC_1( *VAR_5 )) VAR_5++;
            if (!*VAR_5 || *VAR_5 == ' ') VAR_9 = FUNC_0( VAR_4 );
            else VAR_8 = 0;
        }
        VAR_7 = FUNC_7( VAR_2 ) + 20;
        VAR_6 = FUNC_3( VAR_7 * sizeof(WCHAR) );
        FUNC_5( VAR_6, VAR_2, VAR_8, VAR_9 );
        FUNC_4( VAR_3 );
    }
    return VAR_6;
}
