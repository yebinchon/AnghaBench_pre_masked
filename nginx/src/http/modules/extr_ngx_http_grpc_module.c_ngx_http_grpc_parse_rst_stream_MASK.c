
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
struct TYPE_10__ {int rest; int frame_state; int error; } ;
typedef TYPE_3__ ngx_http_grpc_ctx_t ;
struct TYPE_11__ {int* last; int* pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_5, ngx_http_grpc_ctx_t *VAR_6,
    ngx_buf_t *VAR_7)
{
    u_char VAR_8, *VAR_9, *VAR_10;
    enum {
        sw_start = 0,
        sw_error_2,
        sw_error_3,
        sw_error_4
    } VAR_11;

    if (VAR_7->last - VAR_7->pos < (ssize_t) VAR_6->rest) {
        VAR_10 = VAR_7->last;

    } else {
        VAR_10 = VAR_7->pos + VAR_6->rest;
    }

    VAR_11 = VAR_6->frame_state;

    if (VAR_11 == sw_start) {
        if (VAR_6->rest != 4) {
            FUNC_2(VAR_3, VAR_5->connection->log, 0,
                          "upstream sent rst stream frame "
                          "with invalid length: %uz",
                          VAR_6->rest);
            return VAR_1;
        }
    }

    for (VAR_9 = VAR_7->pos; VAR_9 < VAR_10; VAR_9++) {
        VAR_8 = *VAR_9;






        switch (VAR_11) {

        case sw_start:
            VAR_6->error = (ngx_uint_t) VAR_8 << 24;
            VAR_11 = sw_error_2;
            break;

        case sw_error_2:
            VAR_6->error |= VAR_8 << 16;
            VAR_11 = sw_error_3;
            break;

        case sw_error_3:
            VAR_6->error |= VAR_8 << 8;
            VAR_11 = sw_error_4;
            break;

        case sw_error_4:
            VAR_6->error |= VAR_8;
            VAR_11 = sw_start;

            FUNC_0(VAR_2, VAR_5->connection->log, 0,
                           "grpc error: %ui", VAR_6->error);

            break;
        }
    }

    VAR_6->rest -= VAR_9 - VAR_7->pos;
    VAR_6->frame_state = VAR_11;
    VAR_7->pos = VAR_9;

    if (VAR_6->rest > 0) {
        return VAR_0;
    }

    return VAR_4;
}
