
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_23__ {scalar_t__ len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_24__ {scalar_t__ len; int * data; int not_found; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_25__ {int encoding; TYPE_6__** last_out; } ;
typedef TYPE_4__ ngx_http_ssi_ctx_t ;
struct TYPE_26__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_27__ {struct TYPE_27__* next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_28__ {int memory; int * last; int * pos; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_22__ {int log; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (int ) ;
 uintptr_t FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int,int ) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 TYPE_3__* FUNC_5 (TYPE_5__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_5__*,TYPE_2__*,int ) ;
 TYPE_2__ VAR_9 ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_2__*) ;
 int * FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int *,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_http_request_t *VAR_10, ngx_http_ssi_ctx_t *VAR_11,
    ngx_str_t **VAR_12)
{
    u_char *VAR_13;
    uintptr_t VAR_14;
    ngx_buf_t *VAR_15;
    ngx_str_t *VAR_16, *VAR_17, *VAR_18, VAR_19;
    ngx_uint_t VAR_20;
    ngx_chain_t *VAR_21;
    ngx_http_variable_value_t *VAR_22;

    VAR_16 = VAR_12[VAR_3];

    FUNC_7(VAR_6, VAR_10->connection->log, 0,
                   "ssi echo \"%V\"", VAR_16);

    VAR_20 = FUNC_4(VAR_16->data, VAR_16->data, VAR_16->len);

    VAR_17 = FUNC_6(VAR_10, VAR_16, VAR_20);

    if (VAR_17 == ((void*)0)) {
        VAR_22 = FUNC_5(VAR_10, VAR_16, VAR_20);

        if (VAR_22 == ((void*)0)) {
            return VAR_4;
        }

        if (!VAR_22->not_found) {
            VAR_19.data = VAR_22->data;
            VAR_19.len = VAR_22->len;
            VAR_17 = &VAR_19;
        }
    }

    if (VAR_17 == ((void*)0)) {
        VAR_17 = VAR_12[VAR_1];

        if (VAR_17 == ((void*)0)) {
            VAR_17 = &VAR_9;

        } else if (VAR_17->len == 0) {
            return VAR_8;
        }

    } else {
        if (VAR_17->len == 0) {
            return VAR_8;
        }
    }

    VAR_18 = VAR_12[VAR_2];

    if (VAR_18) {
        if (VAR_18->len == 4 && FUNC_10(VAR_18->data, "none", 4) == 0) {

            VAR_11->encoding = VAR_5;

        } else if (VAR_18->len == 3 && FUNC_10(VAR_18->data, "url", 3) == 0) {

            VAR_11->encoding = 128;

        } else if (VAR_18->len == 6 && FUNC_10(VAR_18->data, "entity", 6) == 0) {

            VAR_11->encoding = 129;

        } else {
            FUNC_8(VAR_7, VAR_10->connection->log, 0,
                          "unknown encoding \"%V\" in the \"echo\" command",
                          VAR_18);
        }
    }

    VAR_13 = VAR_17->data;

    switch (VAR_11->encoding) {

    case 128:
        VAR_14 = 2 * FUNC_3(((void*)0), VAR_17->data, VAR_17->len,
                                 VAR_0);

        if (VAR_14) {
            VAR_13 = FUNC_9(VAR_10->pool, VAR_17->len + VAR_14);
            if (VAR_13 == ((void*)0)) {
                return VAR_4;
            }

            (void) FUNC_3(VAR_13, VAR_17->data, VAR_17->len, VAR_0);
        }

        VAR_14 += VAR_17->len;
        break;

    case 129:
        VAR_14 = FUNC_2(((void*)0), VAR_17->data, VAR_17->len);

        if (VAR_14) {
            VAR_13 = FUNC_9(VAR_10->pool, VAR_17->len + VAR_14);
            if (VAR_13 == ((void*)0)) {
                return VAR_4;
            }

            (void) FUNC_2(VAR_13, VAR_17->data, VAR_17->len);
        }

        VAR_14 += VAR_17->len;
        break;

    default:
        VAR_14 = VAR_17->len;
        break;
    }

    VAR_15 = FUNC_1(VAR_10->pool);
    if (VAR_15 == ((void*)0)) {
        return VAR_4;
    }

    VAR_21 = FUNC_0(VAR_10->pool);
    if (VAR_21 == ((void*)0)) {
        return VAR_4;
    }

    VAR_15->memory = 1;
    VAR_15->pos = VAR_13;
    VAR_15->last = VAR_13 + VAR_14;

    VAR_21->buf = VAR_15;
    VAR_21->next = ((void*)0);
    *VAR_11->last_out = VAR_21;
    VAR_11->last_out = &VAR_21->next;

    return VAR_8;
}
