
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct passwd {int pw_uid; int pw_gid; } ;
struct TYPE_2__ {int m_iMaxChildren; int m_iExtraChildren; } ;


 int FUNC_0 (char const*) ;
 TYPE_1__* VAR_0 ;
 char* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(void)
{
    int VAR_4;
    struct passwd * VAR_5;
    VAR_2 = 0;
    VAR_1 = 0;
    if ( VAR_3 == 0 )
    {
        const char * VAR_6 = FUNC_1( "LSAPI_DEFAULT_UID" );
        if ( VAR_6 )
        {
            VAR_4 = FUNC_0( VAR_6 );
            if ( VAR_4 > 0 )
                VAR_2 = VAR_4;
        }
        VAR_6 = FUNC_1( "LSAPI_DEFAULT_GID" );
        if ( VAR_6 )
        {
            VAR_4 = FUNC_0( VAR_6 );
            if ( VAR_4 > 0 )
                VAR_1 = VAR_4;
        }
        VAR_6 = FUNC_1( "LSAPI_SECRET" );
        if (( !VAR_6 )||( FUNC_3(VAR_6) == -1 ))
                return -1;
        if ( VAR_0 )
        {
            if ( VAR_0->m_iMaxChildren < 100 )
                VAR_0->m_iMaxChildren = 100;
            if ( VAR_0->m_iExtraChildren < 1000 )
                VAR_0->m_iExtraChildren = 1000;
        }
    }
    if ( !VAR_2 || !VAR_1 )
    {
        VAR_5 = FUNC_2( "nobody" );
        if ( VAR_5 )
        {
            if ( !VAR_2 )
                VAR_2 = VAR_5->pw_uid;
            if ( !VAR_1 )
                VAR_1 = VAR_5->pw_gid;
        }
        else
        {
            if ( !VAR_2 )
                VAR_2 = 10000;
            if ( !VAR_1 )
                VAR_1 = 10000;
        }
    }
    return 0;
}
