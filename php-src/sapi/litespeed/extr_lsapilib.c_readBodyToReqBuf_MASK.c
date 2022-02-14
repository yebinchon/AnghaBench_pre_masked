
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_9__ {scalar_t__ m_bufRead; scalar_t__ m_bufProcessed; scalar_t__ m_reqBodyLen; scalar_t__ m_reqBodyRead; scalar_t__ m_reqBufSize; scalar_t__ m_pReqBuf; int m_fd; TYPE_3__* m_pHeader; } ;
struct TYPE_6__ {scalar_t__ m_iLen; } ;
struct TYPE_7__ {TYPE_1__ m_packetLen; } ;
struct TYPE_8__ {TYPE_2__ m_pktHeader; } ;
typedef TYPE_4__ LSAPI_Request ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1( LSAPI_Request * VAR_0 )
{
    off_t VAR_1;
    ssize_t VAR_2 = VAR_0->m_bufRead - VAR_0->m_bufProcessed;
    if ( VAR_2 > 0 )
        return VAR_2;
    VAR_0->m_bufRead = VAR_0->m_bufProcessed = VAR_0->m_pHeader->m_pktHeader.m_packetLen.m_iLen;

    VAR_1 = VAR_0->m_reqBodyLen - VAR_0->m_reqBodyRead;
    VAR_2 = VAR_0->m_reqBufSize - VAR_0->m_bufRead;
    if ( VAR_2 < 0 )
        return -1;
    if ( VAR_2 > VAR_1 )
        VAR_2 = VAR_1;

    VAR_2 = FUNC_0( VAR_0->m_fd, VAR_0->m_pReqBuf + VAR_0->m_bufRead, VAR_2 );
    if ( VAR_2 > 0 )
        VAR_0->m_bufRead += VAR_2;
    return VAR_2;
}
