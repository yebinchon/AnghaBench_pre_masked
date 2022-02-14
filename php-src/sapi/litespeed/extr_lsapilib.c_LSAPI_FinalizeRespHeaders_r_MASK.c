
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lsapi_resp_header {int dummy; } ;
struct TYPE_8__ {int m_cntHeaders; } ;
struct TYPE_9__ {int m_pktHeader; TYPE_2__ m_respInfo; } ;
struct TYPE_11__ {int m_reqState; scalar_t__ m_pRespHeaderBufPos; scalar_t__ m_pRespHeaderBuf; int m_totalLen; TYPE_4__* m_pIovec; TYPE_4__* m_pIovecToWrite; TYPE_3__ m_respHeader; TYPE_1__* m_pIovecCur; } ;
struct TYPE_10__ {int iov_len; void* iov_base; } ;
struct TYPE_7__ {scalar_t__ iov_len; void* iov_base; } ;
typedef TYPE_5__ LSAPI_Request ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

int FUNC_1( LSAPI_Request * VAR_2 )
{
    if ( !VAR_2 || !VAR_2->m_pIovec )
        return -1;
    if ( !( VAR_2->m_reqState & VAR_1 ) )
        return 0;
    VAR_2->m_reqState &= ~VAR_1;
    if ( VAR_2->m_pRespHeaderBufPos > VAR_2->m_pRespHeaderBuf )
    {
        VAR_2->m_pIovecCur->iov_base = (void *)VAR_2->m_pRespHeaderBuf;
        VAR_2->m_pIovecCur->iov_len = VAR_2->m_pRespHeaderBufPos - VAR_2->m_pRespHeaderBuf;
        VAR_2->m_totalLen += VAR_2->m_pIovecCur->iov_len;
        ++VAR_2->m_pIovecCur;
    }

    VAR_2->m_pIovec->iov_len = sizeof( struct lsapi_resp_header)
            + VAR_2->m_respHeader.m_respInfo.m_cntHeaders * sizeof( short );
    VAR_2->m_totalLen += VAR_2->m_pIovec->iov_len;

    FUNC_0( &VAR_2->m_respHeader.m_pktHeader,
                    VAR_0, VAR_2->m_totalLen );
    VAR_2->m_pIovec->iov_base = (void *)&VAR_2->m_respHeader;
    VAR_2->m_pIovecToWrite = VAR_2->m_pIovec;
    return 0;
}
