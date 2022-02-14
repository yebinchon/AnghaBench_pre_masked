
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_20__ {TYPE_3__* first; } ;
typedef TYPE_4__ ngx_http_v2_out_frame_t ;
struct TYPE_18__ {int length; int flags; } ;
struct TYPE_21__ {TYPE_2__ state; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_22__ {int last; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_19__ {TYPE_6__* buf; } ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int) ;
 int * FUNC_1 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,int,int ,int,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int * FUNC_4 (TYPE_5__*,int *,int *) ;
 int * FUNC_5 (TYPE_5__*,int *,int *,int * (*) (TYPE_5__*,int *,int *)) ;
 int * FUNC_6 (TYPE_5__*,int *,int *) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,int) ;

__attribute__((used)) static u_char *
FUNC_9(ngx_http_v2_connection_t *VAR_7, u_char *VAR_8, u_char *VAR_9)
{
    ngx_buf_t *VAR_10;
    ngx_http_v2_out_frame_t *VAR_11;

    if (VAR_7->state.length != VAR_3) {
        FUNC_8(VAR_6, VAR_7->connection->log, 0,
                      "client sent PING frame with incorrect length %uz",
                      VAR_7->state.length);

        return FUNC_1(VAR_7, VAR_4);
    }

    if (VAR_9 - VAR_8 < VAR_3) {
        return FUNC_5(VAR_7, VAR_8, VAR_9, FUNC_9);
    }

    FUNC_7(VAR_5, VAR_7->connection->log, 0,
                   "http2 PING frame");

    if (VAR_7->state.flags & VAR_0) {
        return FUNC_6(VAR_7, VAR_8, VAR_9);
    }

    VAR_11 = FUNC_2(VAR_7, VAR_3,
                                  VAR_2,
                                  VAR_0, 0);
    if (VAR_11 == ((void*)0)) {
        return FUNC_1(VAR_7, VAR_1);
    }

    VAR_10 = VAR_11->first->buf;

    VAR_10->last = FUNC_0(VAR_10->last, VAR_8, VAR_3);

    FUNC_3(VAR_7, VAR_11);

    return FUNC_4(VAR_7, VAR_8 + VAR_3, VAR_9);
}
