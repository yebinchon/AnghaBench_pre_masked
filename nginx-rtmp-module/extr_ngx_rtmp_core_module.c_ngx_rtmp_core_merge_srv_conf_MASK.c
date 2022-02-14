
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int max_message; int out_queue; int out_cork; int * pool; int busy; int buflen; int publish_time_fix; int play_time_fix; int ack_window; int chunk_size; int max_streams; int so_keepalive; int ping_timeout; int ping; int timeout; } ;
typedef TYPE_2__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_7__ {TYPE_1__* cycle; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_5__ {int new_log; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int * FUNC_4 (int,int *) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_rtmp_core_srv_conf_t *VAR_5 = VAR_3;
    ngx_rtmp_core_srv_conf_t *VAR_6 = VAR_4;

    FUNC_0(VAR_6->timeout, VAR_5->timeout, 60000);
    FUNC_0(VAR_6->ping, VAR_5->ping, 60000);
    FUNC_0(VAR_6->ping_timeout, VAR_5->ping_timeout, 30000);

    FUNC_3(VAR_6->so_keepalive, VAR_5->so_keepalive, 0);
    FUNC_3(VAR_6->max_streams, VAR_5->max_streams, 32);
    FUNC_3(VAR_6->chunk_size, VAR_5->chunk_size, 4096);
    FUNC_2(VAR_6->ack_window, VAR_5->ack_window, 5000000);
    FUNC_1(VAR_6->max_message, VAR_5->max_message,
            1 * 1024 * 1024);
    FUNC_1(VAR_6->out_queue, VAR_5->out_queue, 256);
    FUNC_1(VAR_6->out_cork, VAR_5->out_cork,
            VAR_6->out_queue / 8);
    FUNC_3(VAR_6->play_time_fix, VAR_5->play_time_fix, 1);
    FUNC_3(VAR_6->publish_time_fix, VAR_5->publish_time_fix, 1);
    FUNC_0(VAR_6->buflen, VAR_5->buflen, 1000);
    FUNC_3(VAR_6->busy, VAR_5->busy, 0);

    if (VAR_5->pool == ((void*)0)) {
        VAR_5->pool = FUNC_4(4096, &VAR_2->cycle->new_log);
        if (VAR_5->pool == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_6->pool = VAR_5->pool;

    return VAR_1;
}
