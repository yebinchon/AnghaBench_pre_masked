
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lsapi_packet_header {int dummy; } ;
typedef int ssize_t ;
struct TYPE_7__ {int m_reqState; int m_fd; int m_pRespBufEnd; int m_pRespBufPos; int m_pRespBuf; struct lsapi_packet_header* m_respPktHeader; struct lsapi_packet_header* m_respPktHeaderEnd; TYPE_1__* m_pIovecCur; int m_totalLen; } ;
struct TYPE_6__ {int iov_len; void* iov_base; } ;
typedef TYPE_2__ LSAPI_Request ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct lsapi_packet_header*,int ,int) ;
 int FUNC_3 (int,char const*,size_t) ;

ssize_t FUNC_4( LSAPI_Request * VAR_6, const char * VAR_7, size_t VAR_8 )
{
    struct lsapi_packet_header * VAR_9;
    const char * VAR_10;
    const char * VAR_11;
    ssize_t VAR_12;
    ssize_t VAR_13;
    ssize_t VAR_14;
    int VAR_15 = 0;

    if (!VAR_6 || !VAR_7)
        return -1;
    if (VAR_6->m_reqState & VAR_3)
        return VAR_8;
    if (VAR_6->m_fd == -1)
        return -1;
    if ( VAR_6->m_reqState & VAR_5 )
    {
        FUNC_0( VAR_6 );
    }
    VAR_6->m_reqState |= VAR_4;

    if ( ((ssize_t)VAR_8 - VAR_15) < VAR_6->m_pRespBufEnd - VAR_6->m_pRespBufPos )
    {
        FUNC_3( VAR_6->m_pRespBufPos, VAR_7 + VAR_15, VAR_8 - VAR_15 );
        VAR_6->m_pRespBufPos += VAR_8 - VAR_15;
        return VAR_8;
    }


    VAR_9 = VAR_6->m_respPktHeader;
    VAR_11 = VAR_7 + VAR_15;
    VAR_10 = VAR_7 + VAR_8;
    VAR_12 = VAR_6->m_pRespBufPos - VAR_6->m_pRespBuf;

    while( ( VAR_13 = VAR_10 - VAR_11 ) > 0 )
    {
        VAR_14 = VAR_13 + VAR_12;
        if ( VAR_0 < VAR_14)
        {
            VAR_14 = VAR_0;
            VAR_13 = VAR_14 - VAR_12;
        }

        FUNC_2( VAR_9, VAR_2,
                            VAR_14 + VAR_1 );
        VAR_6->m_totalLen += VAR_14 + VAR_1;

        VAR_6->m_pIovecCur->iov_base = (void *)VAR_9;
        VAR_6->m_pIovecCur->iov_len = VAR_1;
        ++VAR_6->m_pIovecCur;
        ++VAR_9;
        if ( VAR_12 > 0 )
        {
            VAR_6->m_pIovecCur->iov_base = (void *)VAR_6->m_pRespBuf;
            VAR_6->m_pIovecCur->iov_len = VAR_12;
            VAR_6->m_pRespBufPos = VAR_6->m_pRespBuf;
            ++VAR_6->m_pIovecCur;
            VAR_12 = 0;
        }

        VAR_6->m_pIovecCur->iov_base = (void *)VAR_11;
        VAR_6->m_pIovecCur->iov_len = VAR_13;
        ++VAR_6->m_pIovecCur;
        VAR_11 += VAR_13;

        if ( VAR_9 >= VAR_6->m_respPktHeaderEnd - 1)
        {
            if ( FUNC_1( VAR_6 ) == -1 )
                return -1;
            VAR_9 = VAR_6->m_respPktHeader;
        }
    }
    if ( VAR_9 != VAR_6->m_respPktHeader )
        if ( FUNC_1( VAR_6 ) == -1 )
            return -1;
    return VAR_11 - VAR_7;
}
