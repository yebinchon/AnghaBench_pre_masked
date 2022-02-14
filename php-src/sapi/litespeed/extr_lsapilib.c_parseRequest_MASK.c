
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lsapi_req_header {int dummy; } ;
struct lsapi_http_header_index {int dummy; } ;
struct lsapi_header_offset {int dummy; } ;
struct TYPE_11__ {char* m_pReqBuf; scalar_t__ m_specialEnvListSize; scalar_t__ m_envListSize; char* m_pScriptFile; char* m_pScriptName; char* m_pQueryString; char* m_pRequestMethod; char* m_pHttpHeader; int m_reqBodyLen; TYPE_2__* m_pHeader; struct lsapi_header_offset* m_pUnknownHeader; struct lsapi_http_header_index* m_pHeaderIndex; int m_pEnvList; int m_pSpecialEnvList; } ;
struct TYPE_9__ {int m_flag; } ;
struct TYPE_10__ {scalar_t__ m_cntSpecialEnv; scalar_t__ m_cntEnv; int m_scriptFileOff; int m_scriptNameOff; int m_queryStringOff; int m_requestMethodOff; int m_cntUnknownHeaders; int m_reqBodyLen; int m_httpHeaderLen; TYPE_1__ m_pktHeader; } ;
typedef TYPE_3__ LSAPI_Request ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,scalar_t__,char**,char*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7( LSAPI_Request * VAR_2, int VAR_3 )
{
    int VAR_4;
    char * VAR_5 = VAR_2->m_pReqBuf + sizeof( struct lsapi_req_header );
    char * VAR_6 = VAR_2->m_pReqBuf + VAR_3;
    VAR_4 = ( VAR_0 != (
                VAR_2->m_pHeader->m_pktHeader.m_flag & VAR_1 ) );
    if ( VAR_4 )
    {
        FUNC_1( VAR_2 );
    }
    if ( (VAR_2->m_specialEnvListSize < VAR_2->m_pHeader->m_cntSpecialEnv )&&
            FUNC_0( &VAR_2->m_pSpecialEnvList,
                &VAR_2->m_specialEnvListSize,
                VAR_2->m_pHeader->m_cntSpecialEnv ) == -1 )
        return -1;
    if ( (VAR_2->m_envListSize < VAR_2->m_pHeader->m_cntEnv )&&
            FUNC_0( &VAR_2->m_pEnvList, &VAR_2->m_envListSize,
                VAR_2->m_pHeader->m_cntEnv ) == -1 )
        return -1;

    if ( FUNC_5( VAR_2->m_pSpecialEnvList,
                VAR_2->m_pHeader->m_cntSpecialEnv,
                &VAR_5, VAR_6 ) == -1 )
        return -1;
    if ( FUNC_5( VAR_2->m_pEnvList, VAR_2->m_pHeader->m_cntEnv,
                &VAR_5, VAR_6 ) == -1 )
        return -1;
    if (VAR_2->m_pHeader->m_scriptFileOff < 0
        || VAR_2->m_pHeader->m_scriptFileOff >= VAR_3
        || VAR_2->m_pHeader->m_scriptNameOff < 0
        || VAR_2->m_pHeader->m_scriptNameOff >= VAR_3
        || VAR_2->m_pHeader->m_queryStringOff < 0
        || VAR_2->m_pHeader->m_queryStringOff >= VAR_3
        || VAR_2->m_pHeader->m_requestMethodOff < 0
        || VAR_2->m_pHeader->m_requestMethodOff >= VAR_3)
    {
        FUNC_3("Bad request header - ERROR#1\n");
        return -1;
    }
    VAR_2->m_pScriptFile = VAR_2->m_pReqBuf + VAR_2->m_pHeader->m_scriptFileOff;
    VAR_2->m_pScriptName = VAR_2->m_pReqBuf + VAR_2->m_pHeader->m_scriptNameOff;
    VAR_2->m_pQueryString = VAR_2->m_pReqBuf + VAR_2->m_pHeader->m_queryStringOff;
    VAR_2->m_pRequestMethod = VAR_2->m_pReqBuf + VAR_2->m_pHeader->m_requestMethodOff;

    VAR_5 = VAR_2->m_pReqBuf + (( VAR_5 - VAR_2->m_pReqBuf + 7 ) & (~0x7));
    VAR_2->m_pHeaderIndex = ( struct lsapi_http_header_index * )VAR_5;
    VAR_5 += sizeof( struct lsapi_http_header_index );

    VAR_2->m_pUnknownHeader = (struct lsapi_header_offset *)VAR_5;
    VAR_5 += sizeof( struct lsapi_header_offset) *
                    VAR_2->m_pHeader->m_cntUnknownHeaders;

    VAR_2->m_pHttpHeader = VAR_5;
    VAR_5 += VAR_2->m_pHeader->m_httpHeaderLen;
    if ( VAR_5 != VAR_6 )
    {
        FUNC_3("Request header does match total size, total: %d, "
                 "real: %ld\n", VAR_3, VAR_5 - VAR_2->m_pReqBuf );
        return -1;
    }
    if ( VAR_4 )
    {
        FUNC_2( VAR_2 );
    }

    if (FUNC_6(VAR_2) == -1)
    {
        FUNC_3("Bad request header - ERROR#2\n");
        return -1;
    }

    VAR_2->m_reqBodyLen = VAR_2->m_pHeader->m_reqBodyLen;
    if ( VAR_2->m_reqBodyLen == -2 )
    {
        FUNC_4(VAR_2);
    }

    return 0;
}
