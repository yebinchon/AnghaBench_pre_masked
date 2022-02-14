
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ m_pRespHeaderBuf; scalar_t__ m_pEnvList; scalar_t__ m_pSpecialEnvList; scalar_t__ m_pReqBuf; } ;
typedef TYPE_1__ LSAPI_Request ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1( LSAPI_Request * VAR_0 )
{
    if ( VAR_0->m_pReqBuf )
        FUNC_0( VAR_0->m_pReqBuf );
    if ( VAR_0->m_pSpecialEnvList )
        FUNC_0( VAR_0->m_pSpecialEnvList );
    if ( VAR_0->m_pEnvList )
        FUNC_0( VAR_0->m_pEnvList );
    if ( VAR_0->m_pRespHeaderBuf )
        FUNC_0( VAR_0->m_pRespHeaderBuf );
    return 0;
}
