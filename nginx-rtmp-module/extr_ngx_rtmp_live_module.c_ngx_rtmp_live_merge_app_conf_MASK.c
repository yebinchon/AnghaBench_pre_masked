
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_live_stream_t ;
struct TYPE_6__ {int live; int nbuckets; int interleave; int wait_key; int wait_video; int publish_notify; int play_restart; int idle_streams; int streams; int * pool; int idle_timeout; int sync; int buflen; } ;
typedef TYPE_2__ ngx_rtmp_live_app_conf_t ;
struct TYPE_7__ {int pool; TYPE_1__* cycle; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_5__ {int new_log; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int,int) ;
 int * FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_rtmp_live_app_conf_t *VAR_5 = VAR_3;
    ngx_rtmp_live_app_conf_t *VAR_6 = VAR_4;

    FUNC_1(VAR_6->live, VAR_5->live, 0);
    FUNC_1(VAR_6->nbuckets, VAR_5->nbuckets, 1024);
    FUNC_0(VAR_6->buflen, VAR_5->buflen, 0);
    FUNC_0(VAR_6->sync, VAR_5->sync, 300);
    FUNC_0(VAR_6->idle_timeout, VAR_5->idle_timeout, 0);
    FUNC_1(VAR_6->interleave, VAR_5->interleave, 0);
    FUNC_1(VAR_6->wait_key, VAR_5->wait_key, 1);
    FUNC_1(VAR_6->wait_video, VAR_5->wait_video, 0);
    FUNC_1(VAR_6->publish_notify, VAR_5->publish_notify, 0);
    FUNC_1(VAR_6->play_restart, VAR_5->play_restart, 0);
    FUNC_1(VAR_6->idle_streams, VAR_5->idle_streams, 1);

    VAR_6->pool = FUNC_2(4096, &VAR_2->cycle->new_log);
    if (VAR_6->pool == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->streams = FUNC_3(VAR_2->pool,
            sizeof(ngx_rtmp_live_stream_t *) * VAR_6->nbuckets);

    return VAR_1;
}
