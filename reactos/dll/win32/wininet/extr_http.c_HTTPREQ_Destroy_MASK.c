
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int object_header_t ;
struct TYPE_10__ {TYPE_1__* DebugInfo; } ;
struct TYPE_8__ {size_t nCustHeaders; TYPE_4__* custHeaders; int data_stream; TYPE_4__* statusText; TYPE_4__* version; TYPE_4__* verb; TYPE_4__* path; scalar_t__ proxy; scalar_t__ server; int proxyAuthInfo; int authInfo; TYPE_2__* session; TYPE_5__ read_section; TYPE_5__ headers_section; scalar_t__ req_file; scalar_t__ hCacheFile; } ;
typedef TYPE_3__ http_request_t ;
struct TYPE_9__ {struct TYPE_9__* lpszValue; struct TYPE_9__* lpszField; } ;
struct TYPE_7__ {int hdr; } ;
struct TYPE_6__ {scalar_t__* Spare; } ;
typedef size_t DWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(object_header_t *VAR_0)
{
    http_request_t *VAR_1 = (http_request_t*) VAR_0;
    DWORD VAR_2;

    FUNC_2("\n");

    if(VAR_1->hCacheFile)
        FUNC_0(VAR_1->hCacheFile);
    if(VAR_1->req_file)
        FUNC_7(VAR_1->req_file);

    VAR_1->headers_section.DebugInfo->Spare[0] = 0;
    FUNC_1( &VAR_1->headers_section );
    VAR_1->read_section.DebugInfo->Spare[0] = 0;
    FUNC_1( &VAR_1->read_section );
    FUNC_3(&VAR_1->session->hdr);

    FUNC_4(VAR_1->authInfo);
    FUNC_4(VAR_1->proxyAuthInfo);

    if(VAR_1->server)
        FUNC_8(VAR_1->server);
    if(VAR_1->proxy)
        FUNC_8(VAR_1->proxy);

    FUNC_6(VAR_1->path);
    FUNC_6(VAR_1->verb);
    FUNC_6(VAR_1->version);
    FUNC_6(VAR_1->statusText);

    for (VAR_2 = 0; VAR_2 < VAR_1->nCustHeaders; VAR_2++)
    {
        FUNC_6(VAR_1->custHeaders[VAR_2].lpszField);
        FUNC_6(VAR_1->custHeaders[VAR_2].lpszValue);
    }
    FUNC_5(VAR_1->data_stream);
    FUNC_6(VAR_1->custHeaders);
}
