
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int m_reqState; int m_fd; scalar_t__ m_pRespBufPos; scalar_t__ m_pRespBuf; TYPE_1__* m_pIovecCur; int m_totalLen; } ;
struct TYPE_8__ {scalar_t__ iov_len; void* iov_base; } ;
typedef TYPE_2__ LSAPI_Request ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_4( LSAPI_Request * VAR_3 )
{

    if ( !VAR_3 )
        return -1;
    if (VAR_3->m_reqState)
    {
        if ( VAR_3->m_fd != -1 )
        {
            if ( VAR_3->m_reqState & VAR_1 )
            {
                FUNC_1( VAR_3 );
            }
            if ( VAR_3->m_pRespBufPos != VAR_3->m_pRespBuf )
            {
                FUNC_0( VAR_3 );
            }

            VAR_3->m_pIovecCur->iov_base = (void *)VAR_2;
            VAR_3->m_pIovecCur->iov_len = VAR_0;
            VAR_3->m_totalLen += VAR_0;
            ++VAR_3->m_pIovecCur;
            FUNC_2( VAR_3 );
        }
        FUNC_3( VAR_3 );
    }
    return 0;
}
