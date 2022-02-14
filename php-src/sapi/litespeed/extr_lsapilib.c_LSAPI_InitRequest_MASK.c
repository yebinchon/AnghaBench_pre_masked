
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* m_pRespBuf; char* m_pRespBufPos; char* m_pRespBufEnd; int m_fdListen; int m_fd; int * m_respPktHeader; int * m_respPktHeaderEnd; scalar_t__ m_pIovec; scalar_t__ m_pIovecToWrite; scalar_t__ m_pIovecCur; } ;
typedef TYPE_1__ LSAPI_Request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (char*,int ) ;

int FUNC_9( LSAPI_Request * VAR_4, int VAR_5 )
{
    int VAR_6;
    if ( !VAR_4 )
        return -1;
    FUNC_7( VAR_4, 0, sizeof( LSAPI_Request ) );
    if ( FUNC_0( VAR_4, 16 ) == -1 )
        return -1;
    VAR_4->m_pRespBuf = VAR_4->m_pRespBufPos = (char *)FUNC_6( VAR_1 );
    if ( !VAR_4->m_pRespBuf )
        return -1;
    VAR_4->m_pRespBufEnd = VAR_4->m_pRespBuf + VAR_1;
    VAR_4->m_pIovecCur = VAR_4->m_pIovecToWrite = VAR_4->m_pIovec + 1;
    VAR_4->m_respPktHeaderEnd = &VAR_4->m_respPktHeader[5];
    if ( FUNC_1( VAR_4, VAR_0 ) == -1 )
        return -1;

    if ( VAR_5 == VAR_3 )
    {
        VAR_5 = FUNC_2( VAR_5 );
        VAR_6 = FUNC_8( "/dev/null", VAR_2 );
        FUNC_3( VAR_6, VAR_3 );
    }

    if ( FUNC_4( VAR_5 ) )
    {
        VAR_4->m_fdListen = -1;
        VAR_4->m_fd = VAR_5;
    }
    else
    {
        VAR_4->m_fdListen = VAR_5;
        VAR_4->m_fd = -1;
        FUNC_5( VAR_5, 1 );
    }
    return 0;
}
