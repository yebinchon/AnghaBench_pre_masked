
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_iAvoidFork; int m_iMaxChildren; int m_iExtraChildren; int m_iMaxIdleChildren; int m_iChildrenMaxIdleTime; int m_iMaxReqProcessTime; } ;
typedef TYPE_1__ lsapi_prefork_server ;
typedef int * fn_select_t ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

int FUNC_6( int VAR_7, fn_select_t VAR_8, int VAR_9 )
{
    if ( VAR_2 )
        return 0;
    if ( VAR_7 <= 1 )
        return -1;
    if ( VAR_7 >= 10000)
        VAR_7 = 10000;

    if (VAR_3 == 0)
        VAR_3 = VAR_7 / 2 + 1;

    VAR_2 = (lsapi_prefork_server *)FUNC_2( sizeof( lsapi_prefork_server ) );
    if ( !VAR_2 )
        return -1;
    FUNC_3( VAR_2, 0, sizeof( lsapi_prefork_server ) );

    if ( VAR_8 != ((void*)0) )
        VAR_1 = VAR_8;

    VAR_5 = FUNC_1();
    VAR_4 = FUNC_0();
    FUNC_4( VAR_4, VAR_4 );

    VAR_6 = FUNC_5(VAR_0);

    VAR_2->m_iAvoidFork = VAR_9;
    VAR_2->m_iMaxChildren = VAR_7;

    VAR_2->m_iExtraChildren = ( VAR_9 ) ? 0 : (VAR_7 / 3) ;
    VAR_2->m_iMaxIdleChildren = ( VAR_9 ) ? (VAR_7 + 1) : (VAR_7 / 3);
    if ( VAR_2->m_iMaxIdleChildren == 0 )
        VAR_2->m_iMaxIdleChildren = 1;
    VAR_2->m_iChildrenMaxIdleTime = 300;
    VAR_2->m_iMaxReqProcessTime = 3600;
    return 0;
}
