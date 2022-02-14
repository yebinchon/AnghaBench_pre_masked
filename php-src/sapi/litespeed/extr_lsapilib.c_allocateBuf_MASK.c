
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lsapi_req_header {int dummy; } ;
struct TYPE_3__ {char* m_pReqBuf; int m_reqBufSize; struct lsapi_req_header* m_pHeader; } ;
typedef TYPE_1__ LSAPI_Request ;


 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static inline int FUNC_1( LSAPI_Request * VAR_0, int VAR_1 )
{
    char * VAR_2 = (char *)FUNC_0( VAR_0->m_pReqBuf, VAR_1 );
    if ( VAR_2 )
    {
        VAR_0->m_pReqBuf = VAR_2;
        VAR_0->m_reqBufSize = VAR_1;
        VAR_0->m_pHeader = (struct lsapi_req_header *)VAR_0->m_pReqBuf;
        return 0;
    }
    return -1;
}
