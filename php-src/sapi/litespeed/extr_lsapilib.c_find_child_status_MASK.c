
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_pid; } ;
typedef TYPE_1__ lsapi_child_status ;
struct TYPE_5__ {TYPE_1__* m_pChildrenStatusCur; TYPE_1__* m_pChildrenStatusEnd; TYPE_1__* m_pChildrenStatus; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static lsapi_child_status * FUNC_0( int VAR_1 )
{
    lsapi_child_status * VAR_2 = VAR_0->m_pChildrenStatus;
    lsapi_child_status * VAR_3 = VAR_0->m_pChildrenStatusEnd;
    while( VAR_2 < VAR_3 )
    {
        if ( VAR_2->m_pid == VAR_1 )
        {
            if ( VAR_2 + 1 > VAR_0->m_pChildrenStatusCur )
                VAR_0->m_pChildrenStatusCur = VAR_2 + 1;
            return VAR_2;
        }
        ++VAR_2;
    }
    return ((void*)0);
}
