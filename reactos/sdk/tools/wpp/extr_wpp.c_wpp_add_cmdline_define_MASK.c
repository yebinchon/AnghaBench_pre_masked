
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4( const char *VAR_0 )
{
    char *VAR_1;
    char *VAR_2 = FUNC_1(VAR_0);
    if(!VAR_2)
        return 1;
    VAR_1 = FUNC_2( VAR_2, '=' );
    if (VAR_1) *VAR_1++ = 0;
    FUNC_3( VAR_2, VAR_1 );
    FUNC_0( VAR_2 );
    return 0;
}
