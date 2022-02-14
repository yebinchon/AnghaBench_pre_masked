
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_18__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_19__ {int silent; int name; scalar_t__ reset; scalar_t__ duration; scalar_t__ start; } ;
typedef TYPE_3__ ngx_rtmp_play_t ;
struct TYPE_20__ {int silent; } ;
typedef TYPE_4__ ngx_rtmp_live_ctx_t ;
struct TYPE_21__ {int play_restart; int live; } ;
typedef TYPE_5__ ngx_rtmp_live_app_conf_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ,int ,int ) ;
 TYPE_5__* FUNC_2 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*,char*,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_2, ngx_rtmp_play_t *VAR_3)
{
    ngx_rtmp_live_app_conf_t *VAR_4;
    ngx_rtmp_live_ctx_t *VAR_5;

    VAR_4 = FUNC_2(VAR_2, VAR_1);

    if (VAR_4 == ((void*)0) || !VAR_4->live) {
        goto next;
    }

    FUNC_1(VAR_0, VAR_2->connection->log, 0,
                   "live: play: name='%s' start=%uD duration=%uD reset=%d",
                   VAR_3->name, (uint32_t) VAR_3->start,
                   (uint32_t) VAR_3->duration, (uint32_t) VAR_3->reset);



    FUNC_4(VAR_2, VAR_3->name, 0);

    VAR_5 = FUNC_3(VAR_2, VAR_1);
    if (VAR_5 == ((void*)0)) {
        goto next;
    }

    VAR_5->silent = VAR_3->silent;

    if (!VAR_5->silent && !VAR_4->play_restart) {
        FUNC_6(VAR_2, "NetStream.Play.Start",
                             "status", "Start live");
        FUNC_5(VAR_2);
    }

next:
    return FUNC_0(VAR_2, VAR_3);
}
