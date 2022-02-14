
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lsapi_header_offset {int nameOff; int nameLen; int valueOff; int valueLen; } ;
struct TYPE_7__ {char* m_pHttpHeader; TYPE_2__* m_pHeader; struct lsapi_header_offset* m_pUnknownHeader; TYPE_1__* m_pHeaderIndex; } ;
struct TYPE_6__ {scalar_t__ m_cntUnknownHeaders; } ;
struct TYPE_5__ {int* m_headerOff; int* m_headerLen; } ;
typedef TYPE_3__ LSAPI_Request ;
typedef int (* LSAPI_CB_EnvHandler ) (char*,int,char*,int,void*) ;


 char** VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,char*,int,void*) ;
 int FUNC_2 (char*,int,char*,int,void*) ;
 int FUNC_3 (char) ;

int FUNC_4( LSAPI_Request * VAR_3,
            LSAPI_CB_EnvHandler VAR_4, void * VAR_5 )
{
    int VAR_6;
    int VAR_7 = 0;
    char * VAR_8;
    int VAR_9;
    int VAR_10 = 0;
    if ( !VAR_3 || !VAR_4 )
        return -1;
    for( VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6 )
    {
        if ( VAR_3->m_pHeaderIndex->m_headerOff[VAR_6] )
        {
            VAR_7 = VAR_3->m_pHeaderIndex->m_headerLen[VAR_6];
            VAR_8 = VAR_3->m_pHttpHeader + VAR_3->m_pHeaderIndex->m_headerOff[VAR_6];
            *(VAR_8 + VAR_7 ) = 0;
            VAR_9 = (*VAR_4)( VAR_0[VAR_6], VAR_1[VAR_6],
                        VAR_8, VAR_7, VAR_5 );
            ++VAR_10;
            if ( VAR_9 <= 0 )
                return VAR_9;
        }
    }
    if ( VAR_3->m_pHeader->m_cntUnknownHeaders > 0 )
    {
        char VAR_11[256];
        char *VAR_12;
        char *VAR_13;
        char *VAR_14 ;
        int VAR_15;
        struct lsapi_header_offset * VAR_16, *VAR_17;
        VAR_16 = VAR_3->m_pUnknownHeader;
        VAR_17 = VAR_16 + VAR_3->m_pHeader->m_cntUnknownHeaders;
        while( VAR_16 < VAR_17 )
        {
            VAR_13 = VAR_3->m_pHttpHeader + VAR_16->nameOff;
            VAR_15 = VAR_16->nameLen;
            if ( VAR_15 > 250 )
                VAR_15 = 250;
            VAR_14 = VAR_13 + VAR_15;
            FUNC_0( VAR_11, "HTTP_", 5 );
            VAR_12 = &VAR_11[5];

            while( VAR_13 < VAR_14 )
            {
                char VAR_18 = *VAR_13++;
                if ( VAR_18 == '-' )
                    *VAR_12++ = '_';
                else
                    *VAR_12++ = FUNC_3( VAR_18 );
            }
            *VAR_12 = 0;
            VAR_15 += 5;

            VAR_8 = VAR_3->m_pHttpHeader + VAR_16->valueOff;
            *(VAR_8 + VAR_16->valueLen ) = 0;
            VAR_9 = (*VAR_4)( VAR_11, VAR_15,
                        VAR_8, VAR_16->valueLen, VAR_5 );
            if ( VAR_9 <= 0 )
                return VAR_9;
            ++VAR_16;
        }
    }
    return VAR_10 + VAR_3->m_pHeader->m_cntUnknownHeaders;
}
