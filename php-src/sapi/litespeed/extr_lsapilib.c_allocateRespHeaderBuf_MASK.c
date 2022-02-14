
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* m_pRespHeaderBuf; char* m_pRespHeaderBufPos; char* m_pRespHeaderBufEnd; } ;
typedef TYPE_1__ LSAPI_Request ;


 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1( LSAPI_Request * VAR_0, int VAR_1 )
{
    char * VAR_2 = (char *)FUNC_0( VAR_0->m_pRespHeaderBuf, VAR_1 );
    if ( !VAR_2 )
        return -1;
    VAR_0->m_pRespHeaderBufPos = VAR_2 + ( VAR_0->m_pRespHeaderBufPos - VAR_0->m_pRespHeaderBuf );
    VAR_0->m_pRespHeaderBuf = VAR_2;
    VAR_0->m_pRespHeaderBufEnd = VAR_2 + VAR_1;
    return 0;
}
