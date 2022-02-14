
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_pHeaderIndex; scalar_t__ m_respHeaderLen; int m_pRespHeaderBuf; int m_pRespHeaderBufPos; scalar_t__ m_pIovec; scalar_t__ m_pIovecToWrite; scalar_t__ m_pIovecCur; int m_pRespBuf; int m_pRespBufPos; } ;
typedef TYPE_1__ LSAPI_Request ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1( LSAPI_Request * VAR_0 )
{
    VAR_0->m_pRespBufPos = VAR_0->m_pRespBuf;
    VAR_0->m_pIovecCur = VAR_0->m_pIovecToWrite = VAR_0->m_pIovec + 1;
    VAR_0->m_pRespHeaderBufPos = VAR_0->m_pRespHeaderBuf;

    FUNC_0( &VAR_0->m_pHeaderIndex, 0,
            (char *)(VAR_0->m_respHeaderLen) - (char *)&VAR_0->m_pHeaderIndex );
}
