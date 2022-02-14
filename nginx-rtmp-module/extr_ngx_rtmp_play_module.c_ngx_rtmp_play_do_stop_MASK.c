
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_15__ {scalar_t__ prev; scalar_t__ posted; scalar_t__ timer_set; } ;
struct TYPE_14__ {scalar_t__ playing; int file; TYPE_2__* fmt; TYPE_9__ send_evt; } ;
typedef TYPE_4__ ngx_rtmp_play_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {scalar_t__ (* stop ) (TYPE_3__*,int *) ;} ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_4)
{
    ngx_rtmp_play_ctx_t *VAR_5;

    VAR_5 = FUNC_3(VAR_4, VAR_3);

    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_1, VAR_4->connection->log, 0,
                   "play: stop");

    if (VAR_5->send_evt.timer_set) {
        FUNC_0(&VAR_5->send_evt);
    }




    if (VAR_5->send_evt.prev)

    {
        FUNC_1((&VAR_5->send_evt));
    }

    if (VAR_5->fmt && VAR_5->fmt->stop &&
        VAR_5->fmt->stop(VAR_4, &VAR_5->file) != VAR_2)
    {
        return VAR_0;
    }

    VAR_5->playing = 0;

    return VAR_2;
}
