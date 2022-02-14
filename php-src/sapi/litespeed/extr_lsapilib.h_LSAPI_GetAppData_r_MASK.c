
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* m_pAppData; } ;
typedef TYPE_1__ LSAPI_Request ;



__attribute__((used)) static inline void * FUNC_0( LSAPI_Request * VAR_0 )
{
    if ( !VAR_0 )
        return ((void*)0);
    return VAR_0->m_pAppData;
}
