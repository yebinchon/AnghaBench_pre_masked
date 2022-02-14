
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct TYPE_3__ {struct iovec* m_pIovecEnd; struct iovec* m_pIovec; struct iovec* m_pIovecCur; struct iovec* m_pIovecToWrite; } ;
typedef TYPE_1__ LSAPI_Request ;


 scalar_t__ FUNC_0 (struct iovec*,int) ;

__attribute__((used)) static int FUNC_1( LSAPI_Request * VAR_0, int VAR_1 )
{
    struct iovec * VAR_2 = (struct iovec *)FUNC_0(
                VAR_0->m_pIovec, sizeof(struct iovec) * VAR_1 );
    if ( !VAR_2 )
        return -1;
    VAR_0->m_pIovecToWrite = VAR_2 + ( VAR_0->m_pIovecToWrite - VAR_0->m_pIovec );
    VAR_0->m_pIovecCur = VAR_2 + ( VAR_0->m_pIovecCur - VAR_0->m_pIovec );
    VAR_0->m_pIovec = VAR_2;
    VAR_0->m_pIovecEnd = VAR_2 + VAR_1;
    return 0;
}
