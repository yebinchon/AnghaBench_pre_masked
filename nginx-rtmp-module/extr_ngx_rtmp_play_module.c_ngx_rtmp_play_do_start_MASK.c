
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_12__ {int playing; int send_evt; int file; TYPE_2__* fmt; } ;
typedef TYPE_4__ ngx_rtmp_play_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {scalar_t__ (* start ) (TYPE_3__*,int *) ;} ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_5)
{
    ngx_rtmp_play_ctx_t *VAR_6;

    VAR_6 = FUNC_2(VAR_5, VAR_4);

    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0(VAR_1, VAR_5->connection->log, 0,
                   "play: start");

    if (VAR_6->fmt && VAR_6->fmt->start &&
        VAR_6->fmt->start(VAR_5, &VAR_6->file) != VAR_2)
    {
        return VAR_0;
    }

    FUNC_1((&VAR_6->send_evt), &VAR_3);

    VAR_6->playing = 1;

    return VAR_2;
}
