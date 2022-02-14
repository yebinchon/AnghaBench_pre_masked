
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* u_char ;
typedef int ssize_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {int rest; int frame_state; int flags; int state; void** ping_data; int pings; int * free; scalar_t__ stream_id; } ;
typedef TYPE_3__ ngx_http_grpc_ctx_t ;
struct TYPE_13__ {void** last; void** pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,void*,int) ;
 int FUNC_3 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_6,
    ngx_http_grpc_ctx_t *VAR_7, ngx_buf_t *VAR_8)
{
    u_char VAR_9, *VAR_10, *VAR_11;
    enum {
        sw_start = 0,
        sw_data_2,
        sw_data_3,
        sw_data_4,
        sw_data_5,
        sw_data_6,
        sw_data_7,
        sw_data_8
    } VAR_12;

    if (VAR_8->last - VAR_8->pos < (ssize_t) VAR_7->rest) {
        VAR_11 = VAR_8->last;

    } else {
        VAR_11 = VAR_8->pos + VAR_7->rest;
    }

    VAR_12 = VAR_7->frame_state;

    if (VAR_12 == sw_start) {

        if (VAR_7->stream_id) {
            FUNC_3(VAR_4, VAR_6->connection->log, 0,
                          "upstream sent ping frame "
                          "with non-zero stream id: %ui",
                          VAR_7->stream_id);
            return VAR_1;
        }

        if (VAR_7->rest != 8) {
            FUNC_3(VAR_4, VAR_6->connection->log, 0,
                          "upstream sent ping frame "
                          "with invalid length: %uz",
                          VAR_7->rest);
            return VAR_1;
        }

        if (VAR_7->flags & VAR_2) {
            FUNC_3(VAR_4, VAR_6->connection->log, 0,
                          "upstream sent ping frame with ack flag");
            return VAR_1;
        }

        if (VAR_7->free == ((void*)0) && VAR_7->pings++ > 1000) {
            FUNC_3(VAR_4, VAR_6->connection->log, 0,
                          "upstream sent too many ping frames");
            return VAR_1;
        }
    }

    for (VAR_10 = VAR_8->pos; VAR_10 < VAR_11; VAR_10++) {
        VAR_9 = *VAR_10;






        if (VAR_12 < sw_data_8) {
            VAR_7->ping_data[VAR_12] = VAR_9;
            VAR_12++;

        } else {
            VAR_7->ping_data[7] = VAR_9;
            VAR_12 = sw_start;

            FUNC_1(VAR_3, VAR_6->connection->log, 0,
                           "grpc ping");
        }
    }

    VAR_7->rest -= VAR_10 - VAR_8->pos;
    VAR_7->frame_state = VAR_12;
    VAR_8->pos = VAR_10;

    if (VAR_7->rest > 0) {
        return VAR_0;
    }

    VAR_7->state = VAR_5;

    return FUNC_0(VAR_6, VAR_7);
}
