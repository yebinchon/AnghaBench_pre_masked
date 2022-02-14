
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_23__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int ngx_uint_t ;
struct TYPE_37__ {scalar_t__ len; int data; } ;
typedef TYPE_6__ ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_http_sub_tables_t ;
struct TYPE_32__ {TYPE_6__ value; int * lengths; } ;
struct TYPE_38__ {TYPE_23__ match; int value; } ;
typedef TYPE_7__ ngx_http_sub_pair_t ;
struct TYPE_39__ {TYPE_6__ match; int * value; } ;
typedef TYPE_8__ ngx_http_sub_match_t ;
struct TYPE_40__ {scalar_t__ dynamic; int last_modified; TYPE_2__* pairs; TYPE_3__* matches; TYPE_14__* tables; int types; } ;
typedef TYPE_9__ ngx_http_sub_loc_conf_t ;
struct TYPE_36__ {int * data; } ;
struct TYPE_35__ {int * data; } ;
struct TYPE_28__ {int out; int * last_out; TYPE_14__* tables; scalar_t__ offset; TYPE_5__ looked; TYPE_4__ saved; TYPE_3__* matches; } ;
typedef TYPE_10__ ngx_http_sub_ctx_t ;
struct TYPE_31__ {scalar_t__ content_length_n; } ;
struct TYPE_29__ {int filter_need_in_memory; struct TYPE_29__* main; int pool; TYPE_1__ headers_out; } ;
typedef TYPE_11__ ngx_http_request_t ;
typedef int ngx_array_t ;
struct TYPE_34__ {int nelts; TYPE_8__* elts; } ;
struct TYPE_33__ {int nelts; TYPE_7__* elts; } ;
struct TYPE_30__ {scalar_t__ min_match_len; scalar_t__ max_match_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_11__*) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*) ;
 scalar_t__ FUNC_3 (TYPE_11__*,TYPE_23__*,TYPE_6__*) ;
 TYPE_9__* FUNC_4 (TYPE_11__*,int ) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_11__*,TYPE_10__*,int ) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_14__*,TYPE_8__*,int) ;
 int * FUNC_8 (TYPE_11__*,int *) ;
 int FUNC_9 (TYPE_11__*) ;
 void* FUNC_10 (int ,int) ;
 void* FUNC_11 (int ,int) ;
 void* FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_14(ngx_http_request_t *VAR_3)
{
    ngx_str_t *VAR_4;
    ngx_uint_t VAR_5, VAR_6, VAR_7;
    ngx_http_sub_ctx_t *VAR_8;
    ngx_http_sub_pair_t *VAR_9;
    ngx_http_sub_match_t *VAR_10;
    ngx_http_sub_loc_conf_t *VAR_11;

    VAR_11 = FUNC_4(VAR_3, VAR_2);

    if (VAR_11->pairs == ((void*)0)
        || VAR_3->headers_out.content_length_n == 0
        || FUNC_8(VAR_3, &VAR_11->types) == ((void*)0))
    {
        return FUNC_5(VAR_3);
    }

    VAR_8 = FUNC_11(VAR_3->pool, sizeof(ngx_http_sub_ctx_t));
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_11->dynamic == 0) {
        VAR_8->tables = VAR_11->tables;
        VAR_8->matches = VAR_11->matches;

    } else {
        VAR_9 = VAR_11->pairs->elts;
        VAR_7 = VAR_11->pairs->nelts;

        VAR_10 = FUNC_11(VAR_3->pool, sizeof(ngx_http_sub_match_t) * VAR_7);
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        VAR_6 = 0;
        for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
            VAR_10[VAR_6].value = &VAR_9[VAR_5].value;

            if (VAR_9[VAR_5].match.lengths == ((void*)0)) {
                VAR_10[VAR_6].match = VAR_9[VAR_5].match.value;
                VAR_6++;
                continue;
            }

            VAR_4 = &VAR_10[VAR_6].match;
            if (FUNC_3(VAR_3, &VAR_9[VAR_5].match, VAR_4) != VAR_1) {
                return VAR_0;
            }

            if (VAR_4->len == 0) {
                continue;
            }

            FUNC_13(VAR_4->data, VAR_4->data, VAR_4->len);
            VAR_6++;
        }

        if (VAR_6 == 0) {
            return FUNC_5(VAR_3);
        }

        VAR_8->matches = FUNC_10(VAR_3->pool, sizeof(ngx_array_t));
        if (VAR_8->matches == ((void*)0)) {
            return VAR_0;
        }

        VAR_8->matches->elts = VAR_10;
        VAR_8->matches->nelts = VAR_6;

        VAR_8->tables = FUNC_10(VAR_3->pool, sizeof(ngx_http_sub_tables_t));
        if (VAR_8->tables == ((void*)0)) {
            return VAR_0;
        }

        FUNC_7(VAR_8->tables, VAR_8->matches->elts,
                                 VAR_8->matches->nelts);
    }

    VAR_8->saved.data = FUNC_12(VAR_3->pool, VAR_8->tables->max_match_len - 1);
    if (VAR_8->saved.data == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->looked.data = FUNC_12(VAR_3->pool, VAR_8->tables->max_match_len - 1);
    if (VAR_8->looked.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_6(VAR_3, VAR_8, VAR_2);

    VAR_8->offset = VAR_8->tables->min_match_len - 1;
    VAR_8->last_out = &VAR_8->out;

    VAR_3->filter_need_in_memory = 1;

    if (VAR_3 == VAR_3->main) {
        FUNC_0(VAR_3);

        if (!VAR_11->last_modified) {
            FUNC_2(VAR_3);
            FUNC_1(VAR_3);

        } else {
            FUNC_9(VAR_3);
        }
    }

    return FUNC_5(VAR_3);
}
