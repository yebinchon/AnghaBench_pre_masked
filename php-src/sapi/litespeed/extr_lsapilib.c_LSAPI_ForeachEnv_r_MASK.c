
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* m_pHeader; int m_pEnvList; } ;
struct TYPE_4__ {scalar_t__ m_cntEnv; } ;
typedef TYPE_2__ LSAPI_Request ;
typedef int LSAPI_CB_EnvHandler ;


 int FUNC_0 (int ,scalar_t__,int ,void*) ;

int FUNC_1( LSAPI_Request * VAR_0,
            LSAPI_CB_EnvHandler VAR_1, void * VAR_2 )
{
    if ( !VAR_0 || !VAR_1 )
        return -1;
    if ( VAR_0->m_pHeader->m_cntEnv > 0 )
    {
        return FUNC_0( VAR_0->m_pEnvList, VAR_0->m_pHeader->m_cntEnv,
                    VAR_1, VAR_2 );
    }
    return 0;
}
