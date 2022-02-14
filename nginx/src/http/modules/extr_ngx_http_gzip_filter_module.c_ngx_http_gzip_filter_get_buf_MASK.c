
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int ngx_int_t ;
struct TYPE_16__ {int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_14__ {int avail_out; int next_out; } ;
struct TYPE_17__ {scalar_t__ bufs; int nomem; TYPE_1__ zstream; TYPE_12__* out_buf; TYPE_6__* free; } ;
typedef TYPE_4__ ngx_http_gzip_ctx_t ;
struct TYPE_15__ {scalar_t__ num; int size; } ;
struct TYPE_18__ {TYPE_2__ bufs; } ;
typedef TYPE_5__ ngx_http_gzip_conf_t ;
struct TYPE_19__ {struct TYPE_19__* next; TYPE_12__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_13__ {int recycled; int pos; scalar_t__ tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_12__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_6__*) ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4, ngx_http_gzip_ctx_t *VAR_5)
{
    ngx_chain_t *VAR_6;
    ngx_http_gzip_conf_t *VAR_7;

    if (VAR_5->zstream.avail_out) {
        return VAR_2;
    }

    VAR_7 = FUNC_2(VAR_4, VAR_3);

    if (VAR_5->free) {

        VAR_6 = VAR_5->free;
        VAR_5->out_buf = VAR_6->buf;
        VAR_5->free = VAR_6->next;

        FUNC_1(VAR_4->pool, VAR_6);

    } else if (VAR_5->bufs < VAR_7->bufs.num) {

        VAR_5->out_buf = FUNC_0(VAR_4->pool, VAR_7->bufs.size);
        if (VAR_5->out_buf == ((void*)0)) {
            return VAR_1;
        }

        VAR_5->out_buf->tag = (ngx_buf_tag_t) &VAR_3;
        VAR_5->out_buf->recycled = 1;
        VAR_5->bufs++;

    } else {
        VAR_5->nomem = 1;
        return VAR_0;
    }

    VAR_5->zstream.next_out = VAR_5->out_buf->pos;
    VAR_5->zstream.avail_out = VAR_7->bufs.size;

    return VAR_2;
}
