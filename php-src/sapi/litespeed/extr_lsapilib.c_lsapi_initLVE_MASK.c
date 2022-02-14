
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
    const char * VAR_2;
    if ( (VAR_2 = FUNC_1( "LSAPI_LVE_ENABLE" ))!= ((void*)0) )
    {
        VAR_0 = FUNC_0( VAR_2 );
        VAR_2 = ((void*)0);
    }
    else if ( (VAR_2 = FUNC_1( "LVE_ENABLE" ))!= ((void*)0) )
    {
        VAR_0 = FUNC_0( VAR_2 );
        VAR_2 = ((void*)0);
    }
    if ( VAR_0 && !VAR_1 )
    {
        FUNC_3();
        if ( VAR_0 )
        {
            return FUNC_2();
        }

    }
    return 0;
}
