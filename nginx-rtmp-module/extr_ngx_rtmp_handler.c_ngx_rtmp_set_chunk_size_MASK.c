
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_13__ {int in_chunk_size_changing; TYPE_2__* in_streams; scalar_t__ in_old_pool; TYPE_1__* connection; scalar_t__ in_pool; scalar_t__ in_chunk_size; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_14__ {size_t max_streams; } ;
typedef TYPE_4__ ngx_rtmp_core_srv_conf_t ;
typedef size_t ngx_int_t ;
struct TYPE_15__ {struct TYPE_15__* next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_16__ {scalar_t__ end; scalar_t__ last; scalar_t__ pos; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_12__ {TYPE_5__* in; } ;
struct TYPE_11__ {int log; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__) ;
 void* FUNC_4 (TYPE_3__*) ;
 int VAR_5 ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int ) ;

ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_6, ngx_uint_t VAR_7)
{
    ngx_rtmp_core_srv_conf_t *VAR_8;
    ngx_chain_t *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    ngx_buf_t *VAR_13, *VAR_14;
    ngx_int_t VAR_15;

    FUNC_2(VAR_2, VAR_6->connection->log, 0,
        "setting chunk_size=%ui", VAR_7);

    if (VAR_7 > VAR_4) {
        FUNC_3(VAR_1, VAR_6->connection->log, 0,
                      "too big RTMP chunk size:%ui", VAR_7);
        return VAR_0;
    }

    VAR_8 = FUNC_5(VAR_6, VAR_5);

    VAR_6->in_old_pool = VAR_6->in_pool;
    VAR_6->in_chunk_size = VAR_7;
    VAR_6->in_pool = FUNC_1(4096, VAR_6->connection->log);


    if (VAR_6->in_old_pool) {
        VAR_6->in_chunk_size_changing = 1;
        VAR_6->in_streams[0].in = ((void*)0);

        for(VAR_15 = 1; VAR_15 < VAR_8->max_streams; ++VAR_15) {




            VAR_9 = VAR_6->in_streams[VAR_15].in;
            if (VAR_9 == ((void*)0) || VAR_9->next == ((void*)0)) {
                VAR_6->in_streams[VAR_15].in = ((void*)0);
                continue;
            }

            VAR_9 = VAR_9->next;
            VAR_10 = VAR_9;
            VAR_11 = FUNC_4(VAR_6);
            if (VAR_11 == ((void*)0)) {
                return VAR_0;
            }
            VAR_12 = VAR_11;
            for ( ;; ) {
                VAR_13 = VAR_9->buf;
                VAR_14 = VAR_11->buf;

                if (VAR_14->end - VAR_14->last >= VAR_13->last - VAR_13->pos) {
                    VAR_14->last = FUNC_0(VAR_14->last, VAR_13->pos,
                            VAR_13->last - VAR_13->pos);
                    VAR_9 = VAR_9->next;
                    if (VAR_9 == VAR_10) {
                        VAR_11->next = VAR_12;
                        VAR_6->in_streams[VAR_15].in = VAR_11;
                        break;
                    }
                    continue;
                }

                VAR_13->pos += (FUNC_0(VAR_14->last, VAR_13->pos,
                            VAR_14->end - VAR_14->last) - VAR_14->last);
                VAR_11->next = FUNC_4(VAR_6);
                VAR_11 = VAR_11->next;
                if (VAR_11 == ((void*)0)) {
                    return VAR_0;
                }
            }
        }
    }

    return VAR_3;
}
