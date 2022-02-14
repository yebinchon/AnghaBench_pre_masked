
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_6__ {int out_last; int out_pos; int out_queue; int out_cork; TYPE_1__* connection; scalar_t__ out_buffer; int ** out; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_7__ {int active; } ;
struct TYPE_5__ {TYPE_4__* write; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;

ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_3, ngx_chain_t *VAR_4,
        ngx_uint_t VAR_5)
{
    ngx_uint_t VAR_6;

    VAR_6 = (VAR_3->out_last - VAR_3->out_pos) % VAR_3->out_queue + 1;

    if (VAR_5 > 3) {
        VAR_5 = 3;
    }



    if (VAR_6 + VAR_5 * VAR_3->out_queue / 4 >= VAR_3->out_queue) {
        FUNC_0(VAR_1, VAR_3->connection->log, 0,
                "RTMP drop message bufs=%ui, priority=%ui",
                VAR_6, VAR_5);
        return VAR_0;
    }

    VAR_3->out[VAR_3->out_last++] = VAR_4;
    VAR_3->out_last %= VAR_3->out_queue;

    FUNC_2(VAR_4);

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
            "RTMP send nmsg=%ui, priority=%ui #%ui",
            VAR_6, VAR_5, VAR_3->out_last);

    if (VAR_5 && VAR_3->out_buffer && VAR_6 < VAR_3->out_cork) {
        return VAR_2;
    }

    if (!VAR_3->connection->write->active) {
        FUNC_3(VAR_3->connection->write);

    }

    return VAR_2;
}
