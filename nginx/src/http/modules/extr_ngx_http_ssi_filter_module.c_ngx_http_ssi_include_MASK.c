
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_11__ ;
typedef struct TYPE_39__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_44__ {int len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_39__ {struct TYPE_39__* next; TYPE_11__* buf; } ;
struct TYPE_45__ {size_t key; TYPE_10__ value; TYPE_4__ name; } ;
typedef TYPE_5__ ngx_http_ssi_var_t ;
struct TYPE_46__ {TYPE_8__* wait; int * variables; TYPE_10__* free; TYPE_1__* blocks; } ;
typedef TYPE_6__ ngx_http_ssi_ctx_t ;
struct TYPE_42__ {scalar_t__ len; int data; } ;
struct TYPE_47__ {TYPE_10__* bufs; int count; TYPE_2__ name; } ;
typedef TYPE_7__ ngx_http_ssi_block_t ;
struct TYPE_48__ {TYPE_3__* connection; int pool; int main; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_49__ {TYPE_10__* data; int handler; } ;
typedef TYPE_9__ ngx_http_post_subrequest_t ;
typedef TYPE_10__ ngx_chain_t ;
struct TYPE_40__ {int start; int pos; } ;
typedef TYPE_11__ ngx_buf_t ;
struct TYPE_43__ {int log; } ;
struct TYPE_41__ {size_t nelts; TYPE_7__* elts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_11__* FUNC_0 (int ) ;
 TYPE_10__* FUNC_1 (int ) ;
 size_t FUNC_2 (int ,int ,scalar_t__) ;
 TYPE_6__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*,TYPE_4__*,TYPE_4__*,size_t*) ;
 scalar_t__ FUNC_5 (TYPE_8__*,TYPE_6__*,TYPE_4__*,int ) ;
 int VAR_15 ;
 TYPE_10__* FUNC_6 (TYPE_8__*,TYPE_4__*,size_t) ;
 TYPE_10__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_7 (TYPE_8__*,TYPE_4__*,TYPE_4__*,TYPE_8__**,TYPE_9__*,size_t) ;
 int * FUNC_8 (int ,int,int) ;
 TYPE_5__* FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_11 (int ,int ,int ,char*,...) ;
 int FUNC_12 (TYPE_11__*,TYPE_11__*,int) ;
 TYPE_9__* FUNC_13 (int ,int) ;
 int FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (int ,int *,int) ;
 scalar_t__ FUNC_16 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_17(ngx_http_request_t *VAR_19, ngx_http_ssi_ctx_t *VAR_20,
    ngx_str_t **VAR_21)
{
    ngx_int_t VAR_22;
    ngx_str_t *VAR_23, *VAR_24, *VAR_25, *VAR_26, *VAR_27, VAR_28;
    ngx_buf_t *VAR_29;
    ngx_uint_t VAR_30, VAR_31, VAR_32;
    ngx_chain_t *VAR_33, *VAR_34, **VAR_35, *VAR_36;
    ngx_http_request_t *VAR_37;
    ngx_http_ssi_var_t *VAR_38;
    ngx_http_ssi_ctx_t *VAR_39;
    ngx_http_ssi_block_t *VAR_40;
    ngx_http_post_subrequest_t *VAR_41;

    VAR_23 = VAR_21[VAR_8];
    VAR_24 = VAR_21[VAR_5];
    VAR_25 = VAR_21[VAR_9];
    VAR_26 = VAR_21[VAR_6];
    VAR_27 = VAR_21[VAR_7];

    if (VAR_23 && VAR_24) {
        FUNC_11(VAR_13, VAR_19->connection->log, 0,
                      "inclusion may be either virtual=\"%V\" or file=\"%V\"",
                      VAR_23, VAR_24);
        return VAR_4;
    }

    if (VAR_23 == ((void*)0) && VAR_24 == ((void*)0)) {
        FUNC_11(VAR_13, VAR_19->connection->log, 0,
                      "no parameter in \"include\" SSI command");
        return VAR_4;
    }

    if (VAR_26 && VAR_27) {
        FUNC_11(VAR_13, VAR_19->connection->log, 0,
                      "\"set\" and \"stub\" cannot be used together "
                      "in \"include\" SSI command");
        return VAR_4;
    }

    if (VAR_25) {
        if (VAR_23 == ((void*)0)) {
            FUNC_11(VAR_13, VAR_19->connection->log, 0,
                          "\"wait\" cannot be used with file=\"%V\"", VAR_24);
            return VAR_4;
        }

        if (VAR_25->len == 2
            && FUNC_15(VAR_25->data, (u_char *) "no", 2) == 0)
        {
            VAR_25 = ((void*)0);

        } else if (VAR_25->len != 3
                   || FUNC_15(VAR_25->data, (u_char *) "yes", 3) != 0)
        {
            FUNC_11(VAR_13, VAR_19->connection->log, 0,
                          "invalid value \"%V\" in the \"wait\" parameter",
                          VAR_25);
            return VAR_4;
        }
    }

    if (VAR_23 == ((void*)0)) {
        VAR_23 = VAR_24;
        VAR_25 = (ngx_str_t *) -1;
    }

    VAR_22 = FUNC_5(VAR_19, VAR_20, VAR_23, VAR_3);

    if (VAR_22 != VAR_14) {
        return VAR_22;
    }

    FUNC_10(VAR_12, VAR_19->connection->log, 0,
                   "ssi include: \"%V\"", VAR_23);

    FUNC_14(&VAR_28);
    VAR_30 = VAR_2;

    if (FUNC_4(VAR_19, VAR_23, &VAR_28, &VAR_30) != VAR_14) {
        return VAR_4;
    }

    VAR_41 = ((void*)0);

    VAR_39 = FUNC_3(VAR_19->main, VAR_15);

    if (VAR_27) {
        if (VAR_39->blocks) {
            VAR_40 = VAR_39->blocks->elts;
            for (VAR_31 = 0; VAR_31 < VAR_39->blocks->nelts; VAR_31++) {
                if (VAR_27->len == VAR_40[VAR_31].name.len
                    && FUNC_16(VAR_27->data, VAR_40[VAR_31].name.data, VAR_27->len) == 0)
                {
                    goto found;
                }
            }
        }

        FUNC_11(VAR_13, VAR_19->connection->log, 0,
                      "\"stub\"=\"%V\" for \"include\" not found", VAR_27);
        return VAR_4;

    found:

        VAR_41 = FUNC_13(VAR_19->pool, sizeof(ngx_http_post_subrequest_t));
        if (VAR_41 == ((void*)0)) {
            return VAR_1;
        }

        VAR_41->handler = VAR_18;

        if (VAR_40[VAR_31].count++) {

            VAR_36 = ((void*)0);
            VAR_35 = &VAR_36;

            for (VAR_34 = VAR_40[VAR_31].bufs; VAR_34; VAR_34 = VAR_34->next) {

                if (VAR_20->free) {
                    VAR_33 = VAR_20->free;
                    VAR_20->free = VAR_20->free->next;
                    VAR_29 = VAR_33->buf;

                } else {
                    VAR_29 = FUNC_0(VAR_19->pool);
                    if (VAR_29 == ((void*)0)) {
                        return VAR_1;
                    }

                    VAR_33 = FUNC_1(VAR_19->pool);
                    if (VAR_33 == ((void*)0)) {
                        return VAR_1;
                    }

                    VAR_33->buf = VAR_29;
                }

                FUNC_12(VAR_29, VAR_34->buf, sizeof(ngx_buf_t));

                VAR_29->pos = VAR_29->start;

                *VAR_35 = VAR_33;
                VAR_33->next = ((void*)0);
                VAR_35 = &VAR_33->next;
            }

            VAR_41->data = VAR_36;

        } else {
            VAR_41->data = VAR_40[VAR_31].bufs;
        }
    }

    if (VAR_25) {
        VAR_30 |= VAR_11;
    }

    if (VAR_26) {
        VAR_32 = FUNC_2(VAR_26->data, VAR_26->data, VAR_26->len);

        VAR_41 = FUNC_13(VAR_19->pool, sizeof(ngx_http_post_subrequest_t));
        if (VAR_41 == ((void*)0)) {
            return VAR_1;
        }

        VAR_41->handler = VAR_17;
        VAR_41->data = FUNC_6(VAR_19, VAR_26, VAR_32);

        if (VAR_41->data == ((void*)0)) {

            if (VAR_39->variables == ((void*)0)) {
                VAR_39->variables = FUNC_8(VAR_19->pool, 4,
                                                  sizeof(ngx_http_ssi_var_t));
                if (VAR_39->variables == ((void*)0)) {
                    return VAR_1;
                }
            }

            VAR_38 = FUNC_9(VAR_39->variables);
            if (VAR_38 == ((void*)0)) {
                return VAR_1;
            }

            VAR_38->name = *VAR_26;
            VAR_38->key = VAR_32;
            VAR_38->value = VAR_16;
            VAR_41->data = &VAR_38->value;
        }

        VAR_30 |= VAR_10|VAR_11;
    }

    if (FUNC_7(VAR_19, VAR_23, &VAR_28, &VAR_37, VAR_41, VAR_30) != VAR_14) {
        return VAR_4;
    }

    if (VAR_25 == ((void*)0) && VAR_26 == ((void*)0)) {
        return VAR_14;
    }

    if (VAR_20->wait == ((void*)0)) {
        VAR_20->wait = VAR_37;

        return VAR_0;

    } else {
        FUNC_11(VAR_13, VAR_19->connection->log, 0,
                      "can only wait for one subrequest at a time");
    }

    return VAR_14;
}
