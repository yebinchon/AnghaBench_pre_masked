
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_20__ {TYPE_2__* content_encoding; } ;
struct TYPE_21__ {int gzip_vary; int filter_need_in_memory; TYPE_3__ headers_out; int pool; scalar_t__ gzip_ok; int gzip_tested; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_22__ {TYPE_4__* request; } ;
typedef TYPE_5__ ngx_http_gunzip_ctx_t ;
struct TYPE_23__ {int enable; } ;
typedef TYPE_6__ ngx_http_gunzip_conf_t ;
struct TYPE_18__ {int len; int data; } ;
struct TYPE_19__ {scalar_t__ hash; TYPE_1__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_6__* FUNC_2 (TYPE_4__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_5__* FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_3)
{
    ngx_http_gunzip_ctx_t *VAR_4;
    ngx_http_gunzip_conf_t *VAR_5;

    VAR_5 = FUNC_2(VAR_3, VAR_2);





    if (!VAR_5->enable
        || VAR_3->headers_out.content_encoding == ((void*)0)
        || VAR_3->headers_out.content_encoding->value.len != 4
        || FUNC_8(VAR_3->headers_out.content_encoding->value.data,
                           (u_char *) "gzip", 4) != 0)
    {
        return FUNC_4(VAR_3);
    }

    VAR_3->gzip_vary = 1;

    if (!VAR_3->gzip_tested) {
        if (FUNC_3(VAR_3) == VAR_1) {
            return FUNC_4(VAR_3);
        }

    } else if (VAR_3->gzip_ok) {
        return FUNC_4(VAR_3);
    }

    VAR_4 = FUNC_7(VAR_3->pool, sizeof(ngx_http_gunzip_ctx_t));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_5(VAR_3, VAR_4, VAR_2);

    VAR_4->request = VAR_3;

    VAR_3->filter_need_in_memory = 1;

    VAR_3->headers_out.content_encoding->hash = 0;
    VAR_3->headers_out.content_encoding = ((void*)0);

    FUNC_1(VAR_3);
    FUNC_0(VAR_3);
    FUNC_6(VAR_3);

    return FUNC_4(VAR_3);
}
