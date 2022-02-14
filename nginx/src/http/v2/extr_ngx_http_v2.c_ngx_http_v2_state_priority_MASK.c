
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_16__ {int weight; int reuse; int * parent; int * stream; } ;
typedef TYPE_3__ ngx_http_v2_node_t ;
struct TYPE_15__ {int length; int sid; } ;
struct TYPE_17__ {scalar_t__ priority_limit; int closed; int closed_nodes; TYPE_2__ state; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_0 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int,int) ;
 int* FUNC_4 (TYPE_4__*,int*,int*) ;
 int* FUNC_5 (TYPE_4__*,int*,int*,int* (*) (TYPE_4__*,int*,int*)) ;
 int FUNC_6 (int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_7 (int ,int ,int ,char*,...) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static u_char *
FUNC_10(ngx_http_v2_connection_t *VAR_7, u_char *VAR_8,
    u_char *VAR_9)
{
    ngx_uint_t VAR_10, VAR_11, VAR_12, VAR_13;
    ngx_http_v2_node_t *VAR_14;

    if (VAR_7->state.length != VAR_2) {
        FUNC_7(VAR_6, VAR_7->connection->log, 0,
                      "client sent PRIORITY frame with incorrect length %uz",
                      VAR_7->state.length);

        return FUNC_0(VAR_7, VAR_4);
    }

    if (--VAR_7->priority_limit == 0) {
        FUNC_7(VAR_6, VAR_7->connection->log, 0,
                      "client sent too many PRIORITY frames");

        return FUNC_0(VAR_7, VAR_0);
    }

    if (VAR_9 - VAR_8 < VAR_2) {
        return FUNC_5(VAR_7, VAR_8, VAR_9,
                                      FUNC_10);
    }

    VAR_11 = FUNC_2(VAR_8);

    VAR_10 = VAR_11 & 0x7fffffff;
    VAR_12 = VAR_11 >> 31;
    VAR_13 = VAR_8[4] + 1;

    VAR_8 += VAR_2;

    FUNC_6(VAR_5, VAR_7->connection->log, 0,
                   "http2 PRIORITY frame sid:%ui "
                   "depends on %ui excl:%ui weight:%ui",
                   VAR_7->state.sid, VAR_10, VAR_12, VAR_13);

    if (VAR_7->state.sid == 0) {
        FUNC_7(VAR_6, VAR_7->connection->log, 0,
                      "client sent PRIORITY frame with incorrect identifier");

        return FUNC_0(VAR_7, VAR_3);
    }

    if (VAR_10 == VAR_7->state.sid) {
        FUNC_7(VAR_6, VAR_7->connection->log, 0,
                      "client sent PRIORITY frame for stream %ui "
                      "with incorrect dependency", VAR_7->state.sid);

        return FUNC_0(VAR_7, VAR_3);
    }

    VAR_14 = FUNC_1(VAR_7, VAR_7->state.sid, 1);

    if (VAR_14 == ((void*)0)) {
        return FUNC_0(VAR_7, VAR_1);
    }

    VAR_14->weight = VAR_13;

    if (VAR_14->stream == ((void*)0)) {
        if (VAR_14->parent == ((void*)0)) {
            VAR_7->closed_nodes++;

        } else {
            FUNC_9(&VAR_14->reuse);
        }

        FUNC_8(&VAR_7->closed, &VAR_14->reuse);
    }

    FUNC_3(VAR_7, VAR_14, VAR_10, VAR_12);

    return FUNC_4(VAR_7, VAR_8, VAR_9);
}
