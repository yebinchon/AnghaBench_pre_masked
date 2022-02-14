
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lsapi_header_offset {int nameOff; int nameLen; int valueOff; int valueLen; } ;
struct _headerInfo {char* _name; int _nameLen; char* _value; int _valueLen; } ;
struct TYPE_7__ {char* m_pHttpHeader; TYPE_2__* m_pHeader; struct lsapi_header_offset* m_pUnknownHeader; TYPE_1__* m_pHeaderIndex; } ;
struct TYPE_6__ {scalar_t__ m_cntUnknownHeaders; } ;
struct TYPE_5__ {int* m_headerOff; int* m_headerLen; } ;
typedef TYPE_3__ LSAPI_Request ;
typedef int (* LSAPI_CB_EnvHandler ) (char*,int,char*,int,void*) ;


 char** VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct _headerInfo*,int,int,int ) ;
 int FUNC_1 (char*,int,char*,int,void*) ;

int FUNC_2( LSAPI_Request * VAR_4,
            LSAPI_CB_EnvHandler VAR_5, void * VAR_6 )
{
    int VAR_7;
    int VAR_8 = 0;
    char * VAR_9;
    int VAR_10;
    int VAR_11 = 0;
    struct _headerInfo VAR_12[512];

    if ( !VAR_4 || !VAR_5 )
        return -1;

    if ( !VAR_4->m_pHeaderIndex )
        return 0;

    for( VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7 )
    {
        if ( VAR_4->m_pHeaderIndex->m_headerOff[VAR_7] )
        {
            VAR_8 = VAR_4->m_pHeaderIndex->m_headerLen[VAR_7];
            VAR_9 = VAR_4->m_pHttpHeader + VAR_4->m_pHeaderIndex->m_headerOff[VAR_7];
            *(VAR_9 + VAR_8 ) = 0;
            VAR_12[VAR_11]._name = VAR_0[VAR_7];
            VAR_12[VAR_11]._nameLen = VAR_1[VAR_7];
            VAR_12[VAR_11]._value = VAR_9;
            VAR_12[VAR_11]._valueLen = VAR_8;
            ++VAR_11;





        }
    }
    if ( VAR_4->m_pHeader->m_cntUnknownHeaders > 0 )
    {
        char *VAR_13;
        int VAR_14;
        struct lsapi_header_offset * VAR_15, *VAR_16;
        VAR_15 = VAR_4->m_pUnknownHeader;
        VAR_16 = VAR_15 + VAR_4->m_pHeader->m_cntUnknownHeaders;
        while( VAR_15 < VAR_16 )
        {
            VAR_13 = VAR_4->m_pHttpHeader + VAR_15->nameOff;
            VAR_14 = VAR_15->nameLen;
            *(VAR_13 + VAR_14 ) = 0;

            VAR_9 = VAR_4->m_pHttpHeader + VAR_15->valueOff;
            *(VAR_9 + VAR_15->valueLen ) = 0;
            VAR_12[VAR_11]._name = VAR_13;
            VAR_12[VAR_11]._nameLen = VAR_14;
            VAR_12[VAR_11]._value = VAR_9;
            VAR_12[VAR_11]._valueLen = VAR_15->valueLen;
            ++VAR_11;
            if ( VAR_11 == 512 )
                break;




            ++VAR_15;
        }
    }
    FUNC_0( VAR_12, VAR_11, sizeof( struct _headerInfo ), VAR_3 );
    for( VAR_7 = 0; VAR_7 < VAR_11; ++VAR_7 )
    {
        VAR_10 = (*VAR_5)( VAR_12[VAR_7]._name, VAR_12[VAR_7]._nameLen,
                    VAR_12[VAR_7]._value, VAR_12[VAR_7]._valueLen, VAR_6 );
        if ( VAR_10 <= 0 )
            return VAR_10;
    }
    return VAR_11;
}
