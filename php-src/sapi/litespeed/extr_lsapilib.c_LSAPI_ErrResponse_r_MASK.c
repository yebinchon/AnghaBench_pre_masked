
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LSAPI_Request ;


 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (char const*) ;

int FUNC_5( LSAPI_Request * VAR_0, int VAR_1, const char ** VAR_2,
                         const char * VAR_3, int VAR_4 )
{
    FUNC_2( VAR_0, VAR_1 );
    if ( VAR_2 )
    {
        while( *VAR_2 )
        {
            FUNC_0( VAR_0, *VAR_2, FUNC_4( *VAR_2 ) );
            ++VAR_2;
        }
    }
    if ( VAR_3 &&( VAR_4 > 0 ))
    {
        FUNC_3( VAR_0, VAR_3, VAR_4 );
    }
    FUNC_1( VAR_0 );
    return 0;
}
