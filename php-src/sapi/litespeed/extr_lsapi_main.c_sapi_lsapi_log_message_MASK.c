
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, int VAR_1)
{
    char VAR_2[8192];
    int VAR_3 = FUNC_2( VAR_0 );
    if ( *(VAR_0 + VAR_3 - 1 ) != '\n' )
    {
        FUNC_1( VAR_2, 8191, "%s\n", VAR_0 );
        VAR_0 = VAR_2;
        if (VAR_3 > 8191)
            VAR_3 = 8191;
        ++VAR_3;
    }
    FUNC_0( VAR_0, VAR_3);
}
