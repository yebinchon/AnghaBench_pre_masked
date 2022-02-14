
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int m_reqState; int m_fd; scalar_t__ m_pRespHeaderBufPos; scalar_t__ m_pRespHeaderBuf; scalar_t__ m_pRespBufPos; scalar_t__ m_pRespBuf; int m_totalLen; TYPE_1__* m_pIovecCur; } ;
struct TYPE_8__ {int iov_len; void* iov_base; } ;
typedef TYPE_2__ LSAPI_Request ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(LSAPI_Request * VAR_4)
{
    if (!VAR_4)
        return -1;
    if (VAR_4->m_reqState & VAR_1)
        return 0;
    if (VAR_4->m_reqState)
    {
        if ( VAR_4->m_fd != -1 )
        {
            if ( VAR_4->m_reqState & VAR_2 )
            {
                if ( VAR_4->m_pRespHeaderBufPos <= VAR_4->m_pRespHeaderBuf )
                    return 0;

                FUNC_1( VAR_4 );
            }
            if ( VAR_4->m_pRespBufPos != VAR_4->m_pRespBuf )
            {
                FUNC_0( VAR_4 );
            }

            VAR_4->m_pIovecCur->iov_base = (void *)VAR_3;
            VAR_4->m_pIovecCur->iov_len = VAR_0 << 1;
            VAR_4->m_totalLen += VAR_0 << 1;
            ++VAR_4->m_pIovecCur;
            FUNC_2( VAR_4 );
            FUNC_3(VAR_4);
        }
        VAR_4->m_reqState |= VAR_1;
    }
    return 0;
}
