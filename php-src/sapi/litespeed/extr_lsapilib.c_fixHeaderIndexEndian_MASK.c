
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lsapi_header_offset {scalar_t__ valueLen; scalar_t__ valueOff; scalar_t__ nameLen; scalar_t__ nameOff; } ;
struct TYPE_7__ {TYPE_2__* m_pHeader; struct lsapi_header_offset* m_pUnknownHeader; TYPE_1__* m_pHeaderIndex; } ;
struct TYPE_6__ {scalar_t__ m_cntUnknownHeaders; } ;
struct TYPE_5__ {scalar_t__* m_headerOff; int * m_headerLen; } ;
typedef TYPE_3__ LSAPI_Request ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void FUNC_1( LSAPI_Request * VAR_1 )
{
    int VAR_2;
    for( VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2 )
    {
        if ( VAR_1->m_pHeaderIndex->m_headerOff[VAR_2] )
        {
            register char VAR_3;
            char * VAR_4 = (char *)(&VAR_1->m_pHeaderIndex->m_headerLen[VAR_2]);
            VAR_3 = VAR_4[0];
            VAR_4[0] = VAR_4[1];
            VAR_4[1] = VAR_3;
            FUNC_0( &VAR_1->m_pHeaderIndex->m_headerOff[VAR_2] );
        }
    }
    if ( VAR_1->m_pHeader->m_cntUnknownHeaders > 0 )
    {
        struct lsapi_header_offset * VAR_5, *VAR_6;
        VAR_5 = VAR_1->m_pUnknownHeader;
        VAR_6 = VAR_5 + VAR_1->m_pHeader->m_cntUnknownHeaders;
        while( VAR_5 < VAR_6 )
        {
            FUNC_0( &VAR_5->nameOff );
            FUNC_0( &VAR_5->nameLen );
            FUNC_0( &VAR_5->valueOff );
            FUNC_0( &VAR_5->valueLen );
            ++VAR_5;
        }
    }
}
