
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {scalar_t__ size; } ;
typedef TYPE_3__ ngx_http_slice_loc_conf_t ;
struct TYPE_27__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_24__ {int last; scalar_t__ start; scalar_t__ end; TYPE_7__ range; scalar_t__ active; TYPE_5__* sr; } ;
typedef TYPE_4__ ngx_http_slice_ctx_t ;
struct TYPE_25__ {TYPE_2__* connection; int args; int uri; scalar_t__ buffered; int done; struct TYPE_25__* main; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_26__ {TYPE_1__* buf; struct TYPE_26__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_22__ {int log; } ;
struct TYPE_21__ {int last_in_chain; int sync; scalar_t__ last_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_5__*,int *,int *,TYPE_5__**,int *,int ) ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_7__*) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_8 (scalar_t__,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_7, ngx_chain_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_chain_t *VAR_10;
    ngx_http_slice_ctx_t *VAR_11;
    ngx_http_slice_loc_conf_t *VAR_12;

    VAR_11 = FUNC_0(VAR_7, VAR_6);

    if (VAR_11 == ((void*)0) || VAR_7 != VAR_7->main) {
        return FUNC_2(VAR_7, VAR_8);
    }

    for (VAR_10 = VAR_8; VAR_10; VAR_10 = VAR_10->next) {
        if (VAR_10->buf->last_buf) {
            VAR_10->buf->last_buf = 0;
            VAR_10->buf->last_in_chain = 1;
            VAR_10->buf->sync = 1;
            VAR_11->last = 1;
        }
    }

    VAR_9 = FUNC_2(VAR_7, VAR_8);

    if (VAR_9 == VAR_0 || !VAR_11->last) {
        return VAR_9;
    }

    if (VAR_11->sr && !VAR_11->sr->done) {
        return VAR_9;
    }

    if (!VAR_11->active) {
        FUNC_7(VAR_4, VAR_7->connection->log, 0,
                      "missing slice response");
        return VAR_0;
    }

    if (VAR_11->start >= VAR_11->end) {
        FUNC_4(VAR_7, ((void*)0), VAR_6);
        FUNC_3(VAR_7, VAR_1);
        return VAR_9;
    }

    if (VAR_7->buffered) {
        return VAR_9;
    }

    if (FUNC_5(VAR_7, &VAR_7->uri, &VAR_7->args, &VAR_11->sr, ((void*)0),
                            VAR_2)
        != VAR_5)
    {
        return VAR_0;
    }

    FUNC_4(VAR_11->sr, VAR_11, VAR_6);

    VAR_12 = FUNC_1(VAR_7, VAR_6);

    VAR_11->range.len = FUNC_8(VAR_11->range.data, "bytes=%O-%O", VAR_11->start,
                                 VAR_11->start + (off_t) VAR_12->size - 1)
                     - VAR_11->range.data;

    VAR_11->active = 0;

    FUNC_6(VAR_3, VAR_7->connection->log, 0,
                   "http slice subrequest: \"%V\"", &VAR_11->range);

    return VAR_9;
}
