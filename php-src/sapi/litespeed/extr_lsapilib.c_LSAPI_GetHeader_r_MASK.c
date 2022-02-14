
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* m_pHttpHeader; TYPE_1__* m_pHeaderIndex; } ;
struct TYPE_4__ {int* m_headerOff; int* m_headerLen; } ;
typedef TYPE_2__ LSAPI_Request ;


 unsigned int VAR_0 ;

char * FUNC_0( LSAPI_Request * VAR_1, int VAR_2 )
{
    int VAR_3;
    if ( !VAR_1 || ((unsigned int)VAR_2 > VAR_0) )
        return ((void*)0);
    VAR_3 = VAR_1->m_pHeaderIndex->m_headerOff[ VAR_2 ];
    if ( !VAR_3 )
        return ((void*)0);
    if ( *(VAR_1->m_pHttpHeader + VAR_3
        + VAR_1->m_pHeaderIndex->m_headerLen[ VAR_2 ]) )
    {
        *( VAR_1->m_pHttpHeader + VAR_3
            + VAR_1->m_pHeaderIndex->m_headerLen[ VAR_2 ]) = 0;
    }
    return VAR_1->m_pHttpHeader + VAR_3;
}
