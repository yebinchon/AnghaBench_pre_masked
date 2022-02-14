
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int data; scalar_t__ len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef size_t ngx_int_t ;
struct TYPE_22__ {int data; scalar_t__ len; scalar_t__ not_found; } ;
typedef TYPE_4__ ngx_http_variable_value_t ;
struct TYPE_19__ {TYPE_3__ charset; } ;
struct TYPE_23__ {TYPE_1__ headers_out; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_24__ {TYPE_3__ name; } ;
typedef TYPE_6__ ngx_http_charset_t ;
struct TYPE_20__ {TYPE_6__* elts; } ;
struct TYPE_25__ {TYPE_2__ charsets; } ;
typedef TYPE_7__ ngx_http_charset_main_conf_t ;
struct TYPE_26__ {size_t source_charset; } ;
typedef TYPE_8__ ngx_http_charset_loc_conf_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (TYPE_5__*,TYPE_3__*) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,size_t) ;
 TYPE_8__* FUNC_2 (TYPE_5__*,int ) ;
 TYPE_7__* FUNC_3 (TYPE_5__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_4, ngx_str_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_http_charset_t *VAR_7;
    ngx_http_variable_value_t *VAR_8;
    ngx_http_charset_loc_conf_t *VAR_9;
    ngx_http_charset_main_conf_t *VAR_10;

    if (VAR_4->headers_out.charset.len) {
        *VAR_5 = VAR_4->headers_out.charset;
        return FUNC_0(VAR_4, VAR_5);
    }

    VAR_9 = FUNC_2(VAR_4, VAR_3);

    VAR_6 = VAR_9->source_charset;

    if (VAR_6 == VAR_1) {
        VAR_5->len = 0;
        return VAR_6;
    }

    if (VAR_6 < VAR_2) {
        VAR_10 = FUNC_3(VAR_4, VAR_3);
        VAR_7 = VAR_10->charsets.elts;
        *VAR_5 = VAR_7[VAR_6].name;
        return VAR_6;
    }

    VAR_8 = FUNC_1(VAR_4, VAR_6 - VAR_2);

    if (VAR_8 == ((void*)0) || VAR_8->not_found) {
        return VAR_0;
    }

    VAR_5->len = VAR_8->len;
    VAR_5->data = VAR_8->data;

    return FUNC_0(VAR_4, VAR_5);
}
