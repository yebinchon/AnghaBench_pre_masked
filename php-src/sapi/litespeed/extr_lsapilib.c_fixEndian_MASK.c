
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lsapi_req_header {int m_cntSpecialEnv; int m_cntEnv; int m_cntUnknownHeaders; int m_requestMethodOff; int m_queryStringOff; int m_scriptNameOff; int m_scriptFileOff; int m_reqBodyLen; int m_httpHeaderLen; } ;
struct TYPE_3__ {struct lsapi_req_header* m_pHeader; } ;
typedef TYPE_1__ LSAPI_Request ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1( LSAPI_Request * VAR_0 )
{
    struct lsapi_req_header *VAR_1= VAR_0->m_pHeader;
    FUNC_0( &VAR_1->m_httpHeaderLen );
    FUNC_0( &VAR_1->m_reqBodyLen );
    FUNC_0( &VAR_1->m_scriptFileOff );
    FUNC_0( &VAR_1->m_scriptNameOff );
    FUNC_0( &VAR_1->m_queryStringOff );
    FUNC_0( &VAR_1->m_requestMethodOff );
    FUNC_0( &VAR_1->m_cntUnknownHeaders );
    FUNC_0( &VAR_1->m_cntEnv );
    FUNC_0( &VAR_1->m_cntSpecialEnv );
}
