
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_17__ {scalar_t__ len; int data; } ;
struct TYPE_18__ {TYPE_2__ path; int filter; } ;
typedef TYPE_3__ ngx_rtmp_control_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {scalar_t__ content_length_n; int status; } ;
struct TYPE_19__ {int pool; TYPE_1__ headers_out; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_20__ {TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_21__ {int last_buf; int pos; int last; } ;
typedef TYPE_6__ ngx_buf_t ;
typedef int cl ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 TYPE_6__* FUNC_1 (int ,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_7, ngx_str_t *VAR_8)
{
    ngx_buf_t *VAR_9;
    const char *VAR_10;
    ngx_chain_t VAR_11;
    ngx_rtmp_control_ctx_t *VAR_12;

    VAR_12 = FUNC_2(VAR_7, VAR_5);
    VAR_12->filter = VAR_4;

    VAR_10 = FUNC_6(VAR_7, VAR_6);
    if (VAR_10 != VAR_0) {
        goto error;
    }

    if (VAR_12->path.len == 0) {
        return VAR_2;
    }



    VAR_7->headers_out.status = VAR_3;
    VAR_7->headers_out.content_length_n = VAR_12->path.len;

    VAR_9 = FUNC_1(VAR_7->pool, VAR_12->path.len);
    if (VAR_9 == ((void*)0)) {
        goto error;
    }

    FUNC_5(&VAR_11, sizeof(VAR_11));
    VAR_11.buf = VAR_9;

    VAR_9->last = FUNC_0(VAR_9->pos, VAR_12->path.data, VAR_12->path.len);
    VAR_9->last_buf = 1;

    FUNC_4(VAR_7);

    return FUNC_3(VAR_7, &VAR_11);

error:
    return VAR_1;
}
