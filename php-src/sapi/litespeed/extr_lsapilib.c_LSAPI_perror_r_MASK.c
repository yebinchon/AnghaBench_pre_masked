
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int achError ;
typedef int LSAPI_Request ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int,char const*,char const*,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5( LSAPI_Request * VAR_2, const char * VAR_3, const char *VAR_4 )
{
    char VAR_5[4096];
    int VAR_6 = FUNC_2(VAR_5, sizeof(VAR_5), "[%d] %s:%s: %s\n", FUNC_1(),
                     VAR_3, (VAR_4)?VAR_4:"", FUNC_3(VAR_1));
    if (VAR_6 > (int)sizeof(VAR_5))
        VAR_6 = sizeof(VAR_5);
    if ( VAR_2 )
        FUNC_0( VAR_2, VAR_5, VAR_6 );
    else
        FUNC_4( VAR_0, VAR_5, VAR_6 );
    return 0;
}
