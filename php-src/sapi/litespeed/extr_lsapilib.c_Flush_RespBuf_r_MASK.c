
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lsapi_packet_header {int dummy; } ;
struct TYPE_5__ {int m_pRespBufPos; int m_pRespBuf; TYPE_1__* m_pIovecCur; int m_totalLen; int m_reqState; struct lsapi_packet_header* m_respPktHeader; } ;
struct TYPE_4__ {int iov_len; void* iov_base; } ;
typedef TYPE_2__ LSAPI_Request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lsapi_packet_header*,int ,int) ;

void FUNC_1( LSAPI_Request * VAR_3 )
{
    struct lsapi_packet_header * VAR_4 = VAR_3->m_respPktHeader;
    int VAR_5 = VAR_3->m_pRespBufPos - VAR_3->m_pRespBuf;
    VAR_3->m_reqState |= VAR_2;
    FUNC_0( VAR_4, VAR_1,
                        VAR_5 + VAR_0 );
    VAR_3->m_totalLen += VAR_5 + VAR_0;

    VAR_3->m_pIovecCur->iov_base = (void *)VAR_4;
    VAR_3->m_pIovecCur->iov_len = VAR_0;
    ++VAR_3->m_pIovecCur;
    ++VAR_4;
    if ( VAR_5 > 0 )
    {
        VAR_3->m_pIovecCur->iov_base = (void *)VAR_3->m_pRespBuf;
        VAR_3->m_pIovecCur->iov_len = VAR_5;
        VAR_3->m_pRespBufPos = VAR_3->m_pRespBuf;
        ++VAR_3->m_pIovecCur;
        VAR_5 = 0;
    }
}
