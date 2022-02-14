
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lsapi_packet_header {int dummy; } ;
struct iovec {int iov_len; void* iov_base; } ;
typedef int ssize_t ;
struct TYPE_5__ {int m_fd; int m_fdListen; scalar_t__ m_pRespBufPos; scalar_t__ m_pRespBuf; } ;
typedef TYPE_1__ LSAPI_Request ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct lsapi_packet_header*,int ,void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,struct iovec**,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char const*,size_t) ;

ssize_t FUNC_5( LSAPI_Request * VAR_4, const char * VAR_5, size_t VAR_6 )
{
    struct lsapi_packet_header VAR_7;
    const char * VAR_8;
    const char * VAR_9;
    ssize_t VAR_10;
    ssize_t VAR_11;
    int VAR_12;
    struct iovec VAR_13[2];
    struct iovec *VAR_14;

    if ( !VAR_4 )
        return -1;
    if (VAR_3 || VAR_4->m_fd == -1 || VAR_4->m_fd == VAR_4->m_fdListen)
        return FUNC_4( 2, VAR_5, VAR_6 );
    if ( VAR_4->m_pRespBufPos != VAR_4->m_pRespBuf )
    {
        FUNC_0( VAR_4 );
    }

    VAR_9 = VAR_5;
    VAR_8 = VAR_5 + VAR_6;

    while( ( VAR_10 = VAR_8 - VAR_9 ) > 0 )
    {
        if ( VAR_0 < VAR_10)
        {
            VAR_10 = VAR_0;
        }

        FUNC_1( &VAR_7, VAR_2,
                            VAR_10 + VAR_1 );
        VAR_11 = VAR_10 + VAR_1;

        VAR_13[0].iov_base = (void *)&VAR_7;
        VAR_13[0].iov_len = VAR_1;

        VAR_13[1].iov_base = (void *)VAR_9;
        VAR_13[1].iov_len = VAR_10;
        VAR_9 += VAR_10;
        VAR_14 = VAR_13;
        VAR_12 = FUNC_3( VAR_4->m_fd, &VAR_14,
                  2, VAR_11 );
        if ( VAR_12 < VAR_11 )
        {
            FUNC_2(VAR_4);
            VAR_12 = -1;
        }
    }
    return VAR_9 - VAR_5;
}
