
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


typedef int ngx_int_t ;
struct TYPE_14__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ buffering; TYPE_5__* in; TYPE_2__* request; } ;
typedef TYPE_3__ ngx_http_gzip_ctx_t ;
struct TYPE_16__ {size_t postpone_gzipping; } ;
typedef TYPE_4__ ngx_http_gzip_conf_t ;
struct TYPE_17__ {struct TYPE_17__* next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_18__ {size_t last; size_t pos; scalar_t__ tag; scalar_t__ last_buf; scalar_t__ flush; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_13__ {int buffered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,size_t,size_t) ;
 TYPE_6__* FUNC_2 (int ,size_t) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_gzip_ctx_t *VAR_5, ngx_chain_t *VAR_6)
{
    size_t VAR_7, VAR_8;
    ngx_buf_t *VAR_9, *VAR_10;
    ngx_chain_t *VAR_11, **VAR_12;
    ngx_http_request_t *VAR_13;
    ngx_http_gzip_conf_t *VAR_14;

    VAR_13 = VAR_5->request;

    VAR_13->connection->buffered |= VAR_2;

    VAR_8 = 0;
    VAR_12 = &VAR_5->in;

    for (VAR_11 = VAR_5->in; VAR_11; VAR_11 = VAR_11->next) {
        VAR_8 += VAR_11->buf->last - VAR_11->buf->pos;
        VAR_12 = &VAR_11->next;
    }

    VAR_14 = FUNC_3(VAR_13, VAR_4);

    while (VAR_6) {
        VAR_11 = FUNC_0(VAR_13->pool);
        if (VAR_11 == ((void*)0)) {
            return VAR_1;
        }

        VAR_9 = VAR_6->buf;

        VAR_7 = VAR_9->last - VAR_9->pos;
        VAR_8 += VAR_7;

        if (VAR_9->flush || VAR_9->last_buf || VAR_8 > VAR_14->postpone_gzipping) {
            VAR_5->buffering = 0;
        }

        if (VAR_5->buffering && VAR_7) {

            VAR_10 = FUNC_2(VAR_13->pool, VAR_7);
            if (VAR_10 == ((void*)0)) {
                return VAR_1;
            }

            VAR_10->last = FUNC_1(VAR_10->pos, VAR_9->pos, VAR_7);
            VAR_9->pos = VAR_9->last;

            VAR_10->last_buf = VAR_9->last_buf;
            VAR_10->tag = (ngx_buf_tag_t) &VAR_4;

            VAR_11->buf = VAR_10;

        } else {
            VAR_11->buf = VAR_9;
        }

        *VAR_12 = VAR_11;
        VAR_12 = &VAR_11->next;
        VAR_6 = VAR_6->next;
    }

    *VAR_12 = ((void*)0);

    return VAR_5->buffering ? VAR_3 : VAR_0;
}
