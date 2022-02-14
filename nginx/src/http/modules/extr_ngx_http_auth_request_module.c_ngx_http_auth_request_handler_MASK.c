
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;


typedef int ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_27__ {int * www_authenticate; int headers; } ;
struct TYPE_29__ {int header_only; int * request_body; int pool; TYPE_4__* connection; TYPE_3__ headers_out; TYPE_2__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
typedef int ngx_http_request_body_t ;
struct TYPE_30__ {TYPE_7__* data; int handler; } ;
typedef TYPE_6__ ngx_http_post_subrequest_t ;
struct TYPE_31__ {scalar_t__ status; TYPE_5__* subrequest; int done; } ;
typedef TYPE_7__ ngx_http_auth_request_ctx_t ;
struct TYPE_24__ {scalar_t__ len; } ;
struct TYPE_32__ {TYPE_11__ uri; } ;
typedef TYPE_8__ ngx_http_auth_request_conf_t ;
struct TYPE_28__ {int log; } ;
struct TYPE_25__ {int * www_authenticate; } ;
struct TYPE_26__ {TYPE_1__ headers_in; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_8__*,TYPE_7__*) ;
 TYPE_7__* FUNC_1 (TYPE_5__*,int ) ;
 TYPE_8__* FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_7__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_11__*,int *,TYPE_5__**,TYPE_6__*,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,scalar_t__) ;
 TYPE_6__* FUNC_8 (int ,int) ;
 void* FUNC_9 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_14)
{
    ngx_table_elt_t *VAR_15, *VAR_16;
    ngx_http_request_t *VAR_17;
    ngx_http_post_subrequest_t *VAR_18;
    ngx_http_auth_request_ctx_t *VAR_19;
    ngx_http_auth_request_conf_t *VAR_20;

    VAR_20 = FUNC_2(VAR_14, VAR_13);

    if (VAR_20->uri.len == 0) {
        return VAR_1;
    }

    FUNC_6(VAR_9, VAR_14->connection->log, 0,
                   "auth request handler");

    VAR_19 = FUNC_1(VAR_14, VAR_13);

    if (VAR_19 != ((void*)0)) {
        if (!VAR_19->done) {
            return VAR_0;
        }






        if (FUNC_0(VAR_14, VAR_20, VAR_19) != VAR_11) {
            return VAR_2;
        }



        if (VAR_19->status == VAR_3) {
            return VAR_19->status;
        }

        if (VAR_19->status == VAR_8) {
            VAR_17 = VAR_19->subrequest;

            VAR_15 = VAR_17->headers_out.www_authenticate;

            if (!VAR_15 && VAR_17->upstream) {
                VAR_15 = VAR_17->upstream->headers_in.www_authenticate;
            }

            if (VAR_15) {
                VAR_16 = FUNC_5(&VAR_14->headers_out.headers);
                if (VAR_16 == ((void*)0)) {
                    return VAR_2;
                }

                *VAR_16 = *VAR_15;

                VAR_14->headers_out.www_authenticate = VAR_16;
            }

            return VAR_19->status;
        }

        if (VAR_19->status >= VAR_5
            && VAR_19->status < VAR_6)
        {
            return VAR_11;
        }

        FUNC_7(VAR_10, VAR_14->connection->log, 0,
                      "auth request unexpected status: %ui", VAR_19->status);

        return VAR_4;
    }

    VAR_19 = FUNC_9(VAR_14->pool, sizeof(ngx_http_auth_request_ctx_t));
    if (VAR_19 == ((void*)0)) {
        return VAR_2;
    }

    VAR_18 = FUNC_8(VAR_14->pool, sizeof(ngx_http_post_subrequest_t));
    if (VAR_18 == ((void*)0)) {
        return VAR_2;
    }

    VAR_18->handler = VAR_12;
    VAR_18->data = VAR_19;

    if (FUNC_4(VAR_14, &VAR_20->uri, ((void*)0), &VAR_17, VAR_18,
                            VAR_7)
        != VAR_11)
    {
        return VAR_2;
    }






    VAR_17->request_body = FUNC_9(VAR_14->pool, sizeof(ngx_http_request_body_t));
    if (VAR_17->request_body == ((void*)0)) {
        return VAR_2;
    }

    VAR_17->header_only = 1;

    VAR_19->subrequest = VAR_17;

    FUNC_3(VAR_14, VAR_19, VAR_13);

    return VAR_0;
}
