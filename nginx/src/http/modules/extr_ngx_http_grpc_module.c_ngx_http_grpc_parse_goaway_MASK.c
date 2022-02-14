
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {int rest; int frame_state; int stream_id; int error; int state; } ;
typedef TYPE_3__ ngx_http_grpc_ctx_t ;
struct TYPE_11__ {int* last; int* pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_6, ngx_http_grpc_ctx_t *VAR_7,
    ngx_buf_t *VAR_8)
{
    u_char VAR_9, *VAR_10, *VAR_11;
    enum {
        sw_start = 0,
        sw_last_stream_id_2,
        sw_last_stream_id_3,
        sw_last_stream_id_4,
        sw_error,
        sw_error_2,
        sw_error_3,
        sw_error_4,
        sw_debug
    } VAR_12;

    if (VAR_8->last - VAR_8->pos < (ssize_t) VAR_7->rest) {
        VAR_11 = VAR_8->last;

    } else {
        VAR_11 = VAR_8->pos + VAR_7->rest;
    }

    VAR_12 = VAR_7->frame_state;

    if (VAR_12 == sw_start) {

        if (VAR_7->stream_id) {
            FUNC_1(VAR_3, VAR_6->connection->log, 0,
                          "upstream sent goaway frame "
                          "with non-zero stream id: %ui",
                          VAR_7->stream_id);
            return VAR_1;
        }

        if (VAR_7->rest < 8) {
            FUNC_1(VAR_3, VAR_6->connection->log, 0,
                          "upstream sent goaway frame "
                          "with invalid length: %uz",
                          VAR_7->rest);
            return VAR_1;
        }
    }

    for (VAR_10 = VAR_8->pos; VAR_10 < VAR_11; VAR_10++) {
        VAR_9 = *VAR_10;






        switch (VAR_12) {

        case sw_start:
            VAR_7->stream_id = (VAR_9 & 0x7f) << 24;
            VAR_12 = sw_last_stream_id_2;
            break;

        case sw_last_stream_id_2:
            VAR_7->stream_id |= VAR_9 << 16;
            VAR_12 = sw_last_stream_id_3;
            break;

        case sw_last_stream_id_3:
            VAR_7->stream_id |= VAR_9 << 8;
            VAR_12 = sw_last_stream_id_4;
            break;

        case sw_last_stream_id_4:
            VAR_7->stream_id |= VAR_9;
            VAR_12 = sw_error;
            break;

        case sw_error:
            VAR_7->error = (ngx_uint_t) VAR_9 << 24;
            VAR_12 = sw_error_2;
            break;

        case sw_error_2:
            VAR_7->error |= VAR_9 << 16;
            VAR_12 = sw_error_3;
            break;

        case sw_error_3:
            VAR_7->error |= VAR_9 << 8;
            VAR_12 = sw_error_4;
            break;

        case sw_error_4:
            VAR_7->error |= VAR_9;
            VAR_12 = sw_debug;
            break;

        case sw_debug:
            break;
        }
    }

    VAR_7->rest -= VAR_10 - VAR_8->pos;
    VAR_7->frame_state = VAR_12;
    VAR_8->pos = VAR_10;

    if (VAR_7->rest > 0) {
        return VAR_0;
    }

    FUNC_0(VAR_2, VAR_6->connection->log, 0,
                   "grpc goaway: %ui, stream %ui",
                   VAR_7->error, VAR_7->stream_id);

    VAR_7->state = VAR_5;

    return VAR_4;
}
