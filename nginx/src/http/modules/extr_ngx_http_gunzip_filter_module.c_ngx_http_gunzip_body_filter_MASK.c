
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_18__ {int done; scalar_t__ nomem; int * out; int ** last_out; scalar_t__ busy; int free; int in; int started; } ;
typedef TYPE_3__ ngx_http_gunzip_ctx_t ;
typedef int ngx_chain_t ;
typedef int ngx_buf_tag_t ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int *,scalar_t__*,int **,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 int FUNC_9 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_6, ngx_chain_t *VAR_7)
{
    int VAR_8;
    ngx_uint_t VAR_9;
    ngx_chain_t *VAR_10;
    ngx_http_gunzip_ctx_t *VAR_11;

    VAR_11 = FUNC_2(VAR_6, VAR_5);

    if (VAR_11 == ((void*)0) || VAR_11->done) {
        return FUNC_7(VAR_6, VAR_7);
    }

    FUNC_8(VAR_3, VAR_6->connection->log, 0,
                   "http gunzip filter");

    if (!VAR_11->started) {
        if (FUNC_6(VAR_6, VAR_11) != VAR_4) {
            goto failed;
        }
    }

    if (VAR_7) {
        if (FUNC_0(VAR_6->pool, &VAR_11->in, VAR_7) != VAR_4) {
            goto failed;
        }
    }

    if (VAR_11->nomem) {



        if (FUNC_7(VAR_6, ((void*)0)) == VAR_2) {
            goto failed;
        }

        VAR_10 = ((void*)0);

        FUNC_1(VAR_6->pool, &VAR_11->free, &VAR_11->busy, &VAR_10,
                                (ngx_buf_tag_t) &VAR_5);
        VAR_11->nomem = 0;
        VAR_9 = 0;

    } else {
        VAR_9 = VAR_11->busy ? 1 : 0;
    }

    for ( ;; ) {



        for ( ;; ) {



            VAR_8 = FUNC_3(VAR_6, VAR_11);

            if (VAR_8 == VAR_1) {
                break;
            }

            if (VAR_8 == VAR_0) {
                continue;
            }




            VAR_8 = FUNC_4(VAR_6, VAR_11);

            if (VAR_8 == VAR_1) {
                break;
            }

            if (VAR_8 == VAR_2) {
                goto failed;
            }

            VAR_8 = FUNC_5(VAR_6, VAR_11);

            if (VAR_8 == VAR_4) {
                break;
            }

            if (VAR_8 == VAR_2) {
                goto failed;
            }


        }

        if (VAR_11->out == ((void*)0) && !VAR_9) {
            return VAR_11->busy ? VAR_0 : VAR_4;
        }

        VAR_8 = FUNC_7(VAR_6, VAR_11->out);

        if (VAR_8 == VAR_2) {
            goto failed;
        }

        FUNC_1(VAR_6->pool, &VAR_11->free, &VAR_11->busy, &VAR_11->out,
                                (ngx_buf_tag_t) &VAR_5);
        VAR_11->last_out = &VAR_11->out;

        FUNC_9(VAR_3, VAR_6->connection->log, 0,
                       "gunzip out: %p", VAR_11->out);

        VAR_11->nomem = 0;
        VAR_9 = 0;

        if (VAR_11->done) {
            return VAR_8;
        }
    }



failed:

    VAR_11->done = 1;

    return VAR_2;
}
