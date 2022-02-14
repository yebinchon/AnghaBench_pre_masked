
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {int pool; scalar_t__ request_body_in_file_only; scalar_t__ request_body_no_buffering; TYPE_1__* connection; TYPE_6__* request_body; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_21__ {scalar_t__ rest; TYPE_7__* bufs; TYPE_4__* temp_file; int free; TYPE_2__* buf; } ;
typedef TYPE_6__ ngx_http_request_body_t ;
struct TYPE_22__ {TYPE_8__* buf; struct TYPE_22__* next; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_23__ {int in_file; scalar_t__ file_pos; scalar_t__ file_last; TYPE_3__* file; scalar_t__ pos; scalar_t__ last; int start; int temporary; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_18__ {scalar_t__ offset; } ;
struct TYPE_19__ {TYPE_3__ file; } ;
struct TYPE_17__ {scalar_t__ last; scalar_t__ end; } ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_7__**,TYPE_7__*) ;
 TYPE_7__* FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_8__*,int) ;

ngx_int_t
FUNC_5(ngx_http_request_t *VAR_3, ngx_chain_t *VAR_4)
{
    ngx_buf_t *VAR_5;
    ngx_chain_t *VAR_6;
    ngx_http_request_body_t *VAR_7;

    VAR_7 = VAR_3->request_body;
    if (FUNC_0(VAR_3->pool, &VAR_7->bufs, VAR_4) != VAR_2) {
        return VAR_0;
    }

    if (VAR_3->request_body_no_buffering) {
        return VAR_2;
    }

    if (VAR_7->rest > 0) {

        if (VAR_7->buf && VAR_7->buf->last == VAR_7->buf->end
            && FUNC_2(VAR_3) != VAR_2)
        {
            return VAR_0;
        }

        return VAR_2;
    }



    if (VAR_7->temp_file || VAR_3->request_body_in_file_only) {

        if (FUNC_2(VAR_3) != VAR_2) {
            return VAR_0;
        }

        if (VAR_7->temp_file->file.offset != 0) {

            VAR_6 = FUNC_1(VAR_3->pool, &VAR_7->free);
            if (VAR_6 == ((void*)0)) {
                return VAR_0;
            }

            VAR_5 = VAR_6->buf;

            FUNC_4(VAR_5, sizeof(ngx_buf_t));

            VAR_5->in_file = 1;
            VAR_5->file_last = VAR_7->temp_file->file.offset;
            VAR_5->file = &VAR_7->temp_file->file;

            VAR_7->bufs = VAR_6;
        }
    }

    return VAR_2;
}
