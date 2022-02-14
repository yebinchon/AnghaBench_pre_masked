
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef int ngx_int_t ;
struct TYPE_20__ {int pool; struct TYPE_20__* main; TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_21__ {scalar_t__ end; scalar_t__ start; } ;
typedef TYPE_4__ ngx_http_range_t ;
struct TYPE_18__ {TYPE_4__* elts; } ;
struct TYPE_22__ {scalar_t__ offset; TYPE_1__ ranges; } ;
typedef TYPE_5__ ngx_http_range_filter_ctx_t ;
struct TYPE_23__ {struct TYPE_23__* next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_24__ {size_t pos; size_t last; int sync; int last_buf; int last_in_chain; int file_last; scalar_t__ in_file; int file_pos; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_19__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_2,
    ngx_http_range_filter_ctx_t *VAR_3, ngx_chain_t *VAR_4)
{
    off_t VAR_5, VAR_6;
    ngx_int_t VAR_7;
    ngx_buf_t *VAR_8;
    ngx_chain_t *VAR_9, *VAR_10, *VAR_11, **VAR_12;
    ngx_http_range_t *VAR_13;

    VAR_9 = ((void*)0);
    VAR_12 = &VAR_9;
    VAR_13 = VAR_3->ranges.elts;

    for (VAR_10 = VAR_4; VAR_10; VAR_10 = VAR_10->next) {

        VAR_8 = VAR_10->buf;

        VAR_5 = VAR_3->offset;
        VAR_6 = VAR_3->offset + FUNC_2(VAR_8);

        VAR_3->offset = VAR_6;

        FUNC_7(VAR_1, VAR_2->connection->log, 0,
                       "http range body buf: %O-%O", VAR_5, VAR_6);

        if (FUNC_3(VAR_8)) {

            if (VAR_13->end <= VAR_5) {
                continue;
            }

            VAR_11 = FUNC_0(VAR_2->pool);
            if (VAR_11 == ((void*)0)) {
                return VAR_0;
            }

            VAR_11->buf = VAR_8;
            VAR_11->next = ((void*)0);

            *VAR_12 = VAR_11;
            VAR_12 = &VAR_11->next;

            continue;
        }

        if (VAR_13->end <= VAR_5 || VAR_13->start >= VAR_6) {

            FUNC_6(VAR_1, VAR_2->connection->log, 0,
                           "http range body skip");

            if (VAR_8->in_file) {
                VAR_8->file_pos = VAR_8->file_last;
            }

            VAR_8->pos = VAR_8->last;
            VAR_8->sync = 1;

            continue;
        }

        if (VAR_13->start > VAR_5) {

            if (VAR_8->in_file) {
                VAR_8->file_pos += VAR_13->start - VAR_5;
            }

            if (FUNC_1(VAR_8)) {
                VAR_8->pos += (size_t) (VAR_13->start - VAR_5);
            }
        }

        if (VAR_13->end <= VAR_6) {

            if (VAR_8->in_file) {
                VAR_8->file_last -= VAR_6 - VAR_13->end;
            }

            if (FUNC_1(VAR_8)) {
                VAR_8->last -= (size_t) (VAR_6 - VAR_13->end);
            }

            VAR_8->last_buf = (VAR_2 == VAR_2->main) ? 1 : 0;
            VAR_8->last_in_chain = 1;

            VAR_11 = FUNC_0(VAR_2->pool);
            if (VAR_11 == ((void*)0)) {
                return VAR_0;
            }

            VAR_11->buf = VAR_8;
            VAR_11->next = ((void*)0);

            *VAR_12 = VAR_11;
            VAR_12 = &VAR_11->next;

            continue;
        }

        VAR_11 = FUNC_0(VAR_2->pool);
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }

        VAR_11->buf = VAR_8;
        VAR_11->next = ((void*)0);

        *VAR_12 = VAR_11;
        VAR_12 = &VAR_11->next;
    }

    VAR_7 = FUNC_5(VAR_2, VAR_9);

    while (VAR_9) {
        VAR_10 = VAR_9;
        VAR_9 = VAR_9->next;
        FUNC_4(VAR_2->pool, VAR_10);
    }

    return VAR_7;
}
