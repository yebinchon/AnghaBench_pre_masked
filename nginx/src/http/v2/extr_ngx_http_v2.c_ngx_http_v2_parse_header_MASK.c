
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


struct TYPE_23__ {int data; int len; } ;
struct TYPE_22__ {int len; int data; } ;
struct TYPE_24__ {TYPE_4__ value; int hash; TYPE_3__ key; int lowcase_key; } ;
typedef TYPE_5__ ngx_table_elt_t ;
struct TYPE_25__ {int data; int len; } ;
typedef TYPE_6__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {int len; int data; } ;
struct TYPE_26__ {TYPE_18__* hh; int hash; TYPE_2__ name; } ;
typedef TYPE_7__ ngx_http_v2_parse_header_t ;
struct TYPE_20__ {int headers; } ;
struct TYPE_27__ {TYPE_1__ headers_in; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_28__ {int headers_in_hash; } ;
typedef TYPE_9__ ngx_http_core_main_conf_t ;
struct TYPE_19__ {scalar_t__ (* handler ) (TYPE_8__*,TYPE_5__*,int ) ;int offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_18__* FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_9__* FUNC_2 (TYPE_8__*,int ) ;
 TYPE_5__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_8__*,TYPE_5__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_4,
    ngx_http_v2_parse_header_t *VAR_5, ngx_str_t *VAR_6)
{
    ngx_table_elt_t *VAR_7;
    ngx_http_core_main_conf_t *VAR_8;

    VAR_7 = FUNC_3(&VAR_4->headers_in.headers);
    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    VAR_7->key.len = VAR_5->name.len;
    VAR_7->key.data = VAR_5->name.data;
    VAR_7->lowcase_key = VAR_5->name.data;

    if (VAR_5->hh == ((void*)0)) {
        VAR_5->hash = FUNC_1(VAR_5->name.data, VAR_5->name.len);

        VAR_8 = FUNC_2(VAR_4, VAR_3);

        VAR_5->hh = FUNC_0(&VAR_8->headers_in_hash, VAR_5->hash,
                                   VAR_7->lowcase_key, VAR_7->key.len);
        if (VAR_5->hh == ((void*)0)) {
            return VAR_1;
        }
    }

    VAR_7->hash = VAR_5->hash;

    VAR_7->value.len = VAR_6->len;
    VAR_7->value.data = VAR_6->data;

    if (VAR_5->hh->handler(VAR_4, VAR_7, VAR_5->hh->offset) != VAR_2) {

        return VAR_0;
    }

    return VAR_2;
}
