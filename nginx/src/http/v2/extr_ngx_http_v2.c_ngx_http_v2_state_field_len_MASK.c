
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_20__ {size_t max_field_size; } ;
typedef TYPE_4__ ngx_http_v2_srv_conf_t ;
struct TYPE_19__ {int flags; int length; int field_rest; int * field_start; int * field_end; int pool; int index; int * stream; } ;
struct TYPE_21__ {TYPE_3__ state; TYPE_2__* connection; TYPE_1__* http_connection; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_18__ {int log; } ;
struct TYPE_17__ {int conf_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_0 (int ,int ) ;
 int* FUNC_1 (TYPE_5__*,int ) ;
 int* FUNC_2 (TYPE_5__*,int*,int*,int* (*) (TYPE_5__*,int*,int*)) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_5__*,int**,int*,int ) ;
 int FUNC_4 (int) ;
 int* FUNC_5 (TYPE_5__*,int*,int*) ;
 int* FUNC_6 (TYPE_5__*,int*,int*) ;
 int* FUNC_7 (TYPE_5__*,int*,int*) ;
 int* FUNC_8 (TYPE_5__*,int*,int*,int* (*) (TYPE_5__*,int*,int*)) ;
 int FUNC_9 (int ,int ,int ,char*,char*,int) ;
 int FUNC_10 (int ,int ,int ,char*) ;
 int * FUNC_11 (int ,size_t) ;

__attribute__((used)) static u_char *
FUNC_12(ngx_http_v2_connection_t *VAR_11, u_char *VAR_12,
    u_char *VAR_13)
{
    size_t VAR_14;
    ngx_int_t VAR_15;
    ngx_uint_t VAR_16;
    ngx_http_v2_srv_conf_t *VAR_17;

    if (!(VAR_11->state.flags & VAR_3)
        && VAR_11->state.length < VAR_6)
    {
        return FUNC_2(VAR_11, VAR_12, VAR_13,
                                               FUNC_12);
    }

    if (VAR_11->state.length < 1) {
        FUNC_10(VAR_9, VAR_11->connection->log, 0,
                      "client sent header block with incorrect length");

        return FUNC_1(VAR_11, VAR_7);
    }

    if (VAR_13 - VAR_12 < 1) {
        return FUNC_8(VAR_11, VAR_12, VAR_13,
                                              FUNC_12);
    }

    VAR_16 = *VAR_12 >> 7;
    VAR_15 = FUNC_3(VAR_11, &VAR_12, VAR_13, FUNC_4(7));

    if (VAR_15 < 0) {
        if (VAR_15 == VAR_0) {
            return FUNC_8(VAR_11, VAR_12, VAR_13,
                                                  FUNC_12);
        }

        if (VAR_15 == VAR_1) {
            FUNC_10(VAR_9, VAR_11->connection->log, 0,
                        "client sent header field with too long length value");

            return FUNC_1(VAR_11, VAR_2);
        }

        FUNC_10(VAR_9, VAR_11->connection->log, 0,
                      "client sent header block with incorrect length");

        return FUNC_1(VAR_11, VAR_7);
    }

    FUNC_9(VAR_8, VAR_11->connection->log, 0,
                   "http2 %s string, len:%i",
                   VAR_16 ? "encoded" : "raw", VAR_15);

    VAR_17 = FUNC_0(VAR_11->http_connection->conf_ctx,
                                         VAR_10);

    if ((size_t) VAR_15 > VAR_17->max_field_size) {
        FUNC_10(VAR_9, VAR_11->connection->log, 0,
                      "client exceeded http2_max_field_size limit");

        return FUNC_1(VAR_11, VAR_4);
    }

    VAR_11->state.field_rest = VAR_15;

    if (VAR_11->state.stream == ((void*)0) && !VAR_11->state.index) {
        return FUNC_7(VAR_11, VAR_12, VAR_13);
    }

    VAR_14 = (VAR_16 ? VAR_15 * 8 / 5 : VAR_15) + 1;

    VAR_11->state.field_start = FUNC_11(VAR_11->state.pool, VAR_14);
    if (VAR_11->state.field_start == ((void*)0)) {
        return FUNC_1(VAR_11, VAR_5);
    }

    VAR_11->state.field_end = VAR_11->state.field_start;

    if (VAR_16) {
        return FUNC_5(VAR_11, VAR_12, VAR_13);
    }

    return FUNC_6(VAR_11, VAR_12, VAR_13);
}
