
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {int m_fd; scalar_t__ m_reqBodyLen; scalar_t__ m_reqBodyRead; scalar_t__ m_bufRead; scalar_t__ m_bufProcessed; scalar_t__ m_pReqBuf; } ;
typedef TYPE_1__ LSAPI_Request ;


 scalar_t__ FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

ssize_t FUNC_2( LSAPI_Request * VAR_0, char * VAR_1, size_t VAR_2 )
{
    ssize_t VAR_3;
    off_t VAR_4;

    if (!VAR_0 || VAR_0->m_fd == -1 || !VAR_1 || (ssize_t)VAR_2 < 0)
        return -1;

    VAR_4 = VAR_0->m_reqBodyLen - VAR_0->m_reqBodyRead;

    if ( VAR_4 <= 0 )
        return 0;
    if ( VAR_4 < (ssize_t)VAR_2 )
        VAR_2 = VAR_4;

    VAR_4 = 0;
    VAR_3 = VAR_0->m_bufRead - VAR_0->m_bufProcessed;
    if ( VAR_3 > 0 )
    {
        if ( VAR_3 > (ssize_t)VAR_2 )
            VAR_3 = VAR_2;
        FUNC_1( VAR_1, VAR_0->m_pReqBuf + VAR_0->m_bufProcessed, VAR_3 );
        VAR_0->m_bufProcessed += VAR_3;
        VAR_4 += VAR_3;
        VAR_1 += VAR_3;
        VAR_2 -= VAR_3;
    }
    while( VAR_2 > 0 )
    {
        VAR_3 = FUNC_0( VAR_0->m_fd, VAR_1, VAR_2 );
        if ( VAR_3 > 0 )
        {
            VAR_4 += VAR_3;
            VAR_1 += VAR_3;
            VAR_2 -= VAR_3;
        }
        else if ( VAR_3 <= 0 )
        {
            if ( !VAR_4)
                return -1;
            break;
        }
    }
    VAR_0->m_reqBodyRead += VAR_4;
    return VAR_4;

}
