
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef int xmlNodePtr ;
typedef int * xmlDtdPtr ;
typedef TYPE_4__* xmlDocPtr ;
typedef int const xmlChar ;
struct TYPE_14__ {int * dtd; } ;
typedef TYPE_5__ ngx_http_xslt_filter_loc_conf_t ;
struct TYPE_15__ {TYPE_7__* request; } ;
typedef TYPE_6__ ngx_http_xslt_filter_ctx_t ;
struct TYPE_16__ {TYPE_2__* connection; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_13__ {int * extSubset; int * children; } ;
struct TYPE_12__ {TYPE_4__* myDoc; TYPE_1__* sax; } ;
struct TYPE_11__ {int log; } ;
struct TYPE_10__ {TYPE_6__* _private; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_7__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,int const*,int const*,int const*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3, const xmlChar *VAR_4,
    const xmlChar *VAR_5, const xmlChar *VAR_6)
{
    xmlParserCtxtPtr VAR_7 = VAR_3;

    xmlDocPtr VAR_8;
    xmlDtdPtr VAR_9;
    ngx_http_request_t *VAR_10;
    ngx_http_xslt_filter_ctx_t *VAR_11;
    ngx_http_xslt_filter_loc_conf_t *VAR_12;

    VAR_11 = VAR_7->sax->_private;
    VAR_10 = VAR_11->request;

    VAR_12 = FUNC_0(VAR_10, VAR_2);

    FUNC_1(VAR_0, VAR_10->connection->log, 0,
                   "xslt filter extSubset: \"%s\" \"%s\" \"%s\"",
                   VAR_4 ? VAR_4 : (xmlChar *) "",
                   VAR_5 ? VAR_5 : (xmlChar *) "",
                   VAR_6 ? VAR_6 : (xmlChar *) "");

    VAR_8 = VAR_7->myDoc;







    VAR_9 = FUNC_5(VAR_12->dtd);
    if (VAR_9 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_10->connection->log, 0,
                      "xmlCopyDtd() failed");
        return;
    }

    if (VAR_8->children == ((void*)0)) {
        FUNC_3((xmlNodePtr) VAR_8, (xmlNodePtr) VAR_9);

    } else {
        FUNC_4(VAR_8->children, (xmlNodePtr) VAR_9);
    }



    VAR_8->extSubset = VAR_9;
}
