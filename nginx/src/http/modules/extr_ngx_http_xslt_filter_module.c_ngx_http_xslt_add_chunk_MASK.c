
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef int ngx_int_t ;
struct TYPE_16__ {TYPE_3__* ctxt; TYPE_5__* request; } ;
typedef TYPE_4__ ngx_http_xslt_filter_ctx_t ;
struct TYPE_17__ {TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_18__ {scalar_t__ last; scalar_t__ pos; scalar_t__ last_in_chain; scalar_t__ last_buf; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_15__ {TYPE_1__* sax; } ;
struct TYPE_14__ {int log; } ;
struct TYPE_13__ {TYPE_4__* _private; void* fatalError; void* error; int * setDocumentLocator; int externalSubset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,char*,...) ;
 TYPE_3__* FUNC_1 (int *,int *,int *,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,char*,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_8, ngx_http_xslt_filter_ctx_t *VAR_9,
    ngx_buf_t *VAR_10)
{
    int VAR_11;
    xmlParserCtxtPtr VAR_12;

    if (VAR_9->ctxt == ((void*)0)) {

        VAR_12 = FUNC_1(((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
        if (VAR_12 == ((void*)0)) {
            FUNC_0(VAR_1, VAR_8->connection->log, 0,
                          "xmlCreatePushParserCtxt() failed");
            return VAR_0;
        }
        FUNC_2(VAR_12, VAR_4|VAR_3
                                               |VAR_5);

        VAR_12->sax->externalSubset = VAR_7;
        VAR_12->sax->setDocumentLocator = ((void*)0);
        VAR_12->sax->error = VAR_6;
        VAR_12->sax->fatalError = VAR_6;
        VAR_12->sax->_private = VAR_9;

        VAR_9->ctxt = VAR_12;
        VAR_9->request = VAR_8;
    }

    VAR_11 = FUNC_3(VAR_9->ctxt, (char *) VAR_10->pos, (int) (VAR_10->last - VAR_10->pos),
                        (VAR_10->last_buf) || (VAR_10->last_in_chain));

    if (VAR_11 == 0) {
        VAR_10->pos = VAR_10->last;
        return VAR_2;
    }

    FUNC_0(VAR_1, VAR_8->connection->log, 0,
                  "xmlParseChunk() failed, error:%d", VAR_11);

    return VAR_0;
}
