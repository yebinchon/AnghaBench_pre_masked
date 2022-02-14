
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int m_pIovecCur; int m_pIovecToWrite; scalar_t__ m_pRespBufPos; scalar_t__ m_pRespBuf; int m_fd; int m_totalLen; int m_pIovec; int m_reqState; } ;
typedef TYPE_1__ LSAPI_Request ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int*,int,int) ;

int FUNC_4( LSAPI_Request * VAR_1 )
{
    int VAR_2 = 0;
    int VAR_3;
    if ( !VAR_1 )
        return -1;
    VAR_3 = VAR_1->m_pIovecCur - VAR_1->m_pIovecToWrite;
    if (( 0 == VAR_3 )&&( VAR_1->m_pRespBufPos == VAR_1->m_pRespBuf ))
        return 0;
    if ( VAR_1->m_fd == -1 )
    {
        VAR_1->m_pRespBufPos = VAR_1->m_pRespBuf;
        VAR_1->m_totalLen = 0;
        VAR_1->m_pIovecCur = VAR_1->m_pIovecToWrite = VAR_1->m_pIovec;
        return -1;
    }
    if ( VAR_1->m_reqState & VAR_0 )
    {
        FUNC_1( VAR_1 );
    }
    if ( VAR_1->m_pRespBufPos != VAR_1->m_pRespBuf )
    {
        FUNC_0( VAR_1 );
    }

    VAR_3 = VAR_1->m_pIovecCur - VAR_1->m_pIovecToWrite;
    if ( VAR_3 > 0 )
    {

        VAR_2 = FUNC_3( VAR_1->m_fd, &VAR_1->m_pIovecToWrite,
                  VAR_3, VAR_1->m_totalLen );
        if ( VAR_2 < VAR_1->m_totalLen )
        {
            FUNC_2(VAR_1);
            VAR_2 = -1;
        }
        VAR_1->m_totalLen = 0;
        VAR_1->m_pIovecCur = VAR_1->m_pIovecToWrite = VAR_1->m_pIovec;
    }
    return VAR_2;
}
