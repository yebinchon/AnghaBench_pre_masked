
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_uint_t ;
struct TYPE_18__ {int concurrent_pushes; } ;
typedef TYPE_4__ ngx_http_v2_srv_conf_t ;
typedef int ngx_http_v2_out_frame_t ;
struct TYPE_15__ {scalar_t__ length; } ;
struct TYPE_19__ {int init_window; int frame_size; int push_disabled; int table_update; int concurrent_pushes; TYPE_3__* http_connection; TYPE_2__* connection; TYPE_1__ state; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_17__ {int conf_ctx; } ;
struct TYPE_16__ {int log; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_4__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;
 int * FUNC_2 (TYPE_5__*,int ) ;
 int * FUNC_3 (TYPE_5__*,int ,int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int * FUNC_7 (TYPE_5__*,int *,int *) ;
 int * FUNC_8 (TYPE_5__*,int *,int *,int * (*) (TYPE_5__*,int *,int *)) ;
 int FUNC_9 (int ,int ,int ,char*,int,int) ;
 int FUNC_10 (int ,int ,int ,char*,int) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static u_char *
FUNC_12(ngx_http_v2_connection_t *VAR_14, u_char *VAR_15,
    u_char *VAR_16)
{
    ssize_t VAR_17;
    ngx_uint_t VAR_18, VAR_19;
    ngx_http_v2_srv_conf_t *VAR_20;
    ngx_http_v2_out_frame_t *VAR_21;

    VAR_17 = 0;

    while (VAR_14->state.length) {
        if (VAR_16 - VAR_15 < VAR_9) {
            return FUNC_8(VAR_14, VAR_15, VAR_16,
                                          FUNC_12);
        }

        VAR_14->state.length -= VAR_9;

        VAR_18 = FUNC_4(VAR_15);
        VAR_19 = FUNC_5(&VAR_15[2]);

        FUNC_9(VAR_10, VAR_14->connection->log, 0,
                       "http2 setting %ui:%ui", VAR_18, VAR_19);

        switch (VAR_18) {

        case 130:

            if (VAR_19 > VAR_5) {
                FUNC_10(VAR_11, VAR_14->connection->log, 0,
                              "client sent SETTINGS frame with incorrect "
                              "INITIAL_WINDOW_SIZE value %ui", VAR_19);

                return FUNC_2(VAR_14,
                                                  VAR_2);
            }

            VAR_17 = VAR_19 - VAR_14->init_window;
            break;

        case 129:

            if (VAR_19 > VAR_4
                || VAR_19 < VAR_1)
            {
                FUNC_10(VAR_11, VAR_14->connection->log, 0,
                              "client sent SETTINGS frame with incorrect "
                              "MAX_FRAME_SIZE value %ui", VAR_19);

                return FUNC_2(VAR_14,
                                                    VAR_6);
            }

            VAR_14->frame_size = VAR_19;
            break;

        case 132:

            if (VAR_19 > 1) {
                FUNC_10(VAR_11, VAR_14->connection->log, 0,
                              "client sent SETTINGS frame with incorrect "
                              "ENABLE_PUSH value %ui", VAR_19);

                return FUNC_2(VAR_14,
                                                    VAR_6);
            }

            VAR_14->push_disabled = !VAR_19;
            break;

        case 128:
            VAR_20 = FUNC_0(VAR_14->http_connection->conf_ctx,
                                                 VAR_13);

            VAR_14->concurrent_pushes = FUNC_11(VAR_19, VAR_20->concurrent_pushes);
            break;

        case 131:

            VAR_14->table_update = 1;
            break;

        default:
            break;
        }

        VAR_15 += VAR_9;
    }

    VAR_21 = FUNC_3(VAR_14, VAR_7,
                                  VAR_8,
                                  VAR_0, 0);
    if (VAR_21 == ((void*)0)) {
        return FUNC_2(VAR_14, VAR_3);
    }

    FUNC_6(VAR_14, VAR_21);

    if (VAR_17) {
        VAR_14->init_window += VAR_17;

        if (FUNC_1(VAR_14, VAR_17) != VAR_12) {
            return FUNC_2(VAR_14,
                                                VAR_3);
        }
    }

    return FUNC_7(VAR_14, VAR_15, VAR_16);
}
