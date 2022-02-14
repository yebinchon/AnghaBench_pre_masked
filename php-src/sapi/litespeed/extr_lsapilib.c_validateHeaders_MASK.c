
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lsapi_header_offset {int nameOff; int nameLen; int valueOff; int valueLen; } ;
struct TYPE_7__ {TYPE_2__* m_pHeader; struct lsapi_header_offset* m_pUnknownHeader; TYPE_1__* m_pHeaderIndex; } ;
struct TYPE_6__ {int m_httpHeaderLen; scalar_t__ m_cntUnknownHeaders; } ;
struct TYPE_5__ {int* m_headerOff; int* m_headerLen; } ;
typedef TYPE_3__ LSAPI_Request ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0( LSAPI_Request * VAR_1 )
{
    int VAR_2 = VAR_1->m_pHeader->m_httpHeaderLen;
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    {
        if ( VAR_1->m_pHeaderIndex->m_headerOff[VAR_3] )
        {
            if (VAR_1->m_pHeaderIndex->m_headerOff[VAR_3] > VAR_2
                || VAR_1->m_pHeaderIndex->m_headerLen[VAR_3]
                    + VAR_1->m_pHeaderIndex->m_headerOff[VAR_3] > VAR_2)
                return -1;
        }
    }
    if (VAR_1->m_pHeader->m_cntUnknownHeaders > 0)
    {
        struct lsapi_header_offset * VAR_4, *VAR_5;
        VAR_4 = VAR_1->m_pUnknownHeader;
        VAR_5 = VAR_4 + VAR_1->m_pHeader->m_cntUnknownHeaders;
        while( VAR_4 < VAR_5 )
        {
            if (VAR_4->nameOff > VAR_2
                || VAR_4->nameOff + VAR_4->nameLen > VAR_2
                || VAR_4->valueOff > VAR_2
                || VAR_4->valueOff + VAR_4->valueLen > VAR_2)
                return -1;
            ++VAR_4;
        }
    }
    return 0;
}
