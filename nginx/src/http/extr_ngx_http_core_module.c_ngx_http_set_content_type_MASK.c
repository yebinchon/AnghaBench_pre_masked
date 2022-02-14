
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_12__ {scalar_t__ len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_3__ content_type; scalar_t__ content_type_len; } ;
struct TYPE_10__ {size_t len; char* data; } ;
struct TYPE_13__ {TYPE_2__ headers_out; TYPE_1__ exten; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_14__ {TYPE_3__ default_type; int types_hash; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,char) ;
 TYPE_3__* FUNC_1 (int *,size_t,char*,size_t) ;
 size_t FUNC_2 (char*,char*,size_t) ;
 int VAR_2 ;
 TYPE_5__* FUNC_3 (TYPE_4__*,int ) ;
 char* FUNC_4 (int ,size_t) ;

ngx_int_t
FUNC_5(ngx_http_request_t *VAR_3)
{
    u_char VAR_4, *VAR_5;
    ngx_str_t *VAR_6;
    ngx_uint_t VAR_7, VAR_8;
    ngx_http_core_loc_conf_t *VAR_9;

    if (VAR_3->headers_out.content_type.len) {
        return VAR_1;
    }

    VAR_9 = FUNC_3(VAR_3, VAR_2);

    if (VAR_3->exten.len) {

        VAR_8 = 0;

        for (VAR_7 = 0; VAR_7 < VAR_3->exten.len; VAR_7++) {
            VAR_4 = VAR_3->exten.data[VAR_7];

            if (VAR_4 >= 'A' && VAR_4 <= 'Z') {

                VAR_5 = FUNC_4(VAR_3->pool, VAR_3->exten.len);
                if (VAR_5 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_8 = FUNC_2(VAR_5, VAR_3->exten.data, VAR_3->exten.len);

                VAR_3->exten.data = VAR_5;

                break;
            }

            VAR_8 = FUNC_0(VAR_8, VAR_4);
        }

        VAR_6 = FUNC_1(&VAR_9->types_hash, VAR_8,
                             VAR_3->exten.data, VAR_3->exten.len);

        if (VAR_6) {
            VAR_3->headers_out.content_type_len = VAR_6->len;
            VAR_3->headers_out.content_type = *VAR_6;

            return VAR_1;
        }
    }

    VAR_3->headers_out.content_type_len = VAR_9->default_type.len;
    VAR_3->headers_out.content_type = VAR_9->default_type;

    return VAR_1;
}
