
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_28__ {int in_closed; TYPE_7__* node; TYPE_1__* request; int * pool; } ;
typedef TYPE_5__ ngx_http_v2_stream_t ;
struct TYPE_29__ {scalar_t__ concurrent_streams; scalar_t__ preread_size; scalar_t__ max_requests; int max_header_size; } ;
typedef TYPE_6__ ngx_http_v2_srv_conf_t ;
struct TYPE_30__ {int weight; int * parent; TYPE_5__* stream; int reuse; } ;
typedef TYPE_7__ ngx_http_v2_node_t ;
struct TYPE_27__ {int flags; size_t length; size_t padding; int sid; int keep_pool; int * pool; TYPE_5__* stream; int header_limit; } ;
struct TYPE_31__ {int goaway; int last_sid; scalar_t__ processing; TYPE_4__ state; TYPE_2__* connection; int closed_nodes; int settings_ack; TYPE_3__* http_connection; } ;
typedef TYPE_8__ ngx_http_v2_connection_t ;
struct TYPE_26__ {int conf_ctx; } ;
struct TYPE_25__ {scalar_t__ requests; int log; } ;
struct TYPE_24__ {size_t request_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int * FUNC_0 (int,int ) ;
 TYPE_6__* FUNC_1 (int ,int ) ;
 int* FUNC_2 (TYPE_8__*,int ) ;
 TYPE_5__* FUNC_3 (TYPE_8__*,int ) ;
 TYPE_7__* FUNC_4 (TYPE_8__*,int,int) ;
 int VAR_14 ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_8__*,int,int) ;
 int FUNC_8 (TYPE_8__*,TYPE_7__*,int,int) ;
 int* FUNC_9 (TYPE_8__*,int*,int*) ;
 int* FUNC_10 (TYPE_8__*,int*,int*,int* (*) (TYPE_8__*,int*,int*)) ;
 int* FUNC_11 (TYPE_8__*,int*,int*) ;
 int FUNC_12 (int ,int ,int ,char*) ;
 int FUNC_13 (int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_14 (int ,int ,int ,char*,...) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static u_char *
FUNC_16(ngx_http_v2_connection_t *VAR_15, u_char *VAR_16,
    u_char *VAR_17)
{
    size_t VAR_18;
    ngx_uint_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    ngx_uint_t VAR_25;
    ngx_http_v2_node_t *VAR_26;
    ngx_http_v2_stream_t *VAR_27;
    ngx_http_v2_srv_conf_t *VAR_28;

    VAR_19 = VAR_15->state.flags & VAR_6;
    VAR_20 = VAR_15->state.flags & VAR_7;

    VAR_18 = 0;

    if (VAR_19) {
        VAR_18++;
    }

    if (VAR_20) {
        VAR_18 += sizeof(uint32_t) + 1;
    }

    if (VAR_15->state.length < VAR_18) {
        FUNC_14(VAR_12, VAR_15->connection->log, 0,
                      "client sent HEADERS frame with incorrect length %uz",
                      VAR_15->state.length);

        return FUNC_2(VAR_15, VAR_10);
    }

    if (VAR_15->state.length == VAR_18) {
        FUNC_14(VAR_12, VAR_15->connection->log, 0,
                      "client sent HEADERS frame with empty header block");

        return FUNC_2(VAR_15, VAR_10);
    }

    if (VAR_15->goaway) {
        FUNC_12(VAR_11, VAR_15->connection->log, 0,
                       "skipping http2 HEADERS frame");
        return FUNC_11(VAR_15, VAR_16, VAR_17);
    }

    if ((size_t) (VAR_17 - VAR_16) < VAR_18) {
        return FUNC_10(VAR_15, VAR_16, VAR_17,
                                      FUNC_16);
    }

    VAR_15->state.length -= VAR_18;

    if (VAR_19) {
        VAR_15->state.padding = *VAR_16++;

        if (VAR_15->state.padding > VAR_15->state.length) {
            FUNC_14(VAR_12, VAR_15->connection->log, 0,
                          "client sent padded HEADERS frame "
                          "with incorrect length: %uz, padding: %uz",
                          VAR_15->state.length, VAR_15->state.padding);

            return FUNC_2(VAR_15,
                                                VAR_8);
        }

        VAR_15->state.length -= VAR_15->state.padding;
    }

    VAR_21 = 0;
    VAR_23 = 0;
    VAR_24 = VAR_1;

    if (VAR_20) {
        VAR_22 = FUNC_5(VAR_16);

        VAR_21 = VAR_22 & 0x7fffffff;
        VAR_23 = VAR_22 >> 31;
        VAR_24 = VAR_16[4] + 1;

        VAR_16 += sizeof(uint32_t) + 1;
    }

    FUNC_13(VAR_11, VAR_15->connection->log, 0,
                   "http2 HEADERS frame sid:%ui "
                   "depends on %ui excl:%ui weight:%ui",
                   VAR_15->state.sid, VAR_21, VAR_23, VAR_24);

    if (VAR_15->state.sid % 2 == 0 || VAR_15->state.sid <= VAR_15->last_sid) {
        FUNC_14(VAR_12, VAR_15->connection->log, 0,
                      "client sent HEADERS frame with incorrect identifier "
                      "%ui, the last was %ui", VAR_15->state.sid, VAR_15->last_sid);

        return FUNC_2(VAR_15, VAR_8);
    }

    if (VAR_21 == VAR_15->state.sid) {
        FUNC_14(VAR_12, VAR_15->connection->log, 0,
                      "client sent HEADERS frame for stream %ui "
                      "with incorrect dependency", VAR_15->state.sid);

        return FUNC_2(VAR_15, VAR_8);
    }

    VAR_15->last_sid = VAR_15->state.sid;

    VAR_15->state.pool = FUNC_0(1024, VAR_15->connection->log);
    if (VAR_15->state.pool == ((void*)0)) {
        return FUNC_2(VAR_15, VAR_4);
    }

    VAR_28 = FUNC_1(VAR_15->http_connection->conf_ctx,
                                         VAR_14);

    VAR_15->state.header_limit = VAR_28->max_header_size;

    if (VAR_15->processing >= VAR_28->concurrent_streams) {
        FUNC_14(VAR_12, VAR_15->connection->log, 0,
                      "concurrent streams exceeded %ui", VAR_15->processing);

        VAR_25 = VAR_9;
        goto rst_stream;
    }

    if (!VAR_15->settings_ack
        && !(VAR_15->state.flags & VAR_3)
        && VAR_28->preread_size < VAR_2)
    {
        FUNC_14(VAR_12, VAR_15->connection->log, 0,
                      "client sent stream with data "
                      "before settings were acknowledged");

        VAR_25 = VAR_9;
        goto rst_stream;
    }

    VAR_26 = FUNC_4(VAR_15, VAR_15->state.sid, 1);

    if (VAR_26 == ((void*)0)) {
        return FUNC_2(VAR_15, VAR_4);
    }

    if (VAR_26->parent) {
        FUNC_15(&VAR_26->reuse);
        VAR_15->closed_nodes--;
    }

    VAR_27 = FUNC_3(VAR_15, 0);
    if (VAR_27 == ((void*)0)) {
        return FUNC_2(VAR_15, VAR_4);
    }

    VAR_15->state.stream = VAR_27;

    VAR_27->pool = VAR_15->state.pool;
    VAR_15->state.keep_pool = 1;

    VAR_27->request->request_length = VAR_15->state.length;

    VAR_27->in_closed = VAR_15->state.flags & VAR_3;
    VAR_27->node = VAR_26;

    VAR_26->stream = VAR_27;

    if (VAR_20 || VAR_26->parent == ((void*)0)) {
        VAR_26->weight = VAR_24;
        FUNC_8(VAR_15, VAR_26, VAR_21, VAR_23);
    }

    if (VAR_15->connection->requests >= VAR_28->max_requests) {
        VAR_15->goaway = 1;

        if (FUNC_6(VAR_15, VAR_5) == VAR_0) {
            return FUNC_2(VAR_15,
                                                VAR_4);
        }
    }

    return FUNC_9(VAR_15, VAR_16, VAR_17);

rst_stream:

    if (FUNC_7(VAR_15, VAR_15->state.sid, VAR_25) != VAR_13) {
        return FUNC_2(VAR_15, VAR_4);
    }

    return FUNC_9(VAR_15, VAR_16, VAR_17);
}
