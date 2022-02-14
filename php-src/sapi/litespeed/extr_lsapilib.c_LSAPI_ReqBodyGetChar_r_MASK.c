
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_fd; scalar_t__ m_bufProcessed; scalar_t__ m_bufRead; scalar_t__* m_pReqBuf; int m_reqBodyRead; } ;
typedef TYPE_1__ LSAPI_Request ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

int FUNC_1( LSAPI_Request * VAR_1 )
{
    if (!VAR_1 || (VAR_1->m_fd ==-1) )
        return VAR_0;
    if ( VAR_1->m_bufProcessed >= VAR_1->m_bufRead )
    {
        if ( FUNC_0( VAR_1 ) <= 0 )
            return VAR_0;
    }
    ++VAR_1->m_reqBodyRead;
    return (unsigned char)*(VAR_1->m_pReqBuf + VAR_1->m_bufProcessed++);
}
