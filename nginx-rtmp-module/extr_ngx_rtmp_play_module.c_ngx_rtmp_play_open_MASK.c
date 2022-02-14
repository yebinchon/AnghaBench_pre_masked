
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_19__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_21__ {int log; int handler; TYPE_3__* data; } ;
struct TYPE_17__ {scalar_t__ fd; } ;
struct TYPE_20__ {scalar_t__ post_seek; int opened; TYPE_5__ send_evt; TYPE_1__ file; } ;
typedef TYPE_4__ ngx_rtmp_play_ctx_t ;
typedef scalar_t__ ngx_int_t ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_18__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char*,char*,char*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_rtmp_session_t *VAR_7, double VAR_8)
{
    ngx_rtmp_play_ctx_t *VAR_9;
    ngx_event_t *VAR_10;
    ngx_uint_t VAR_11;

    VAR_9 = FUNC_0(VAR_7, VAR_5);

    if (VAR_9->file.fd == VAR_2) {
        return VAR_1;
    }

    if (FUNC_8(VAR_7, VAR_4) != VAR_3) {
        return VAR_1;
    }

    if (FUNC_7(VAR_7, "NetStream.Play.Start", "status",
                             "Start video on demand")
        != VAR_3)
    {
        return VAR_1;
    }

    if (FUNC_4(VAR_7) != VAR_3) {
        return VAR_1;
    }

    VAR_10 = &VAR_9->send_evt;
    VAR_10->data = VAR_7;
    VAR_10->handler = VAR_6;
    VAR_10->log = VAR_7->connection->log;

    FUNC_5(VAR_7, 1);

    if (FUNC_6(VAR_7) != VAR_3) {
        return VAR_1;
    }

    if (FUNC_1(VAR_7) != VAR_3) {
        return VAR_1;
    }

    VAR_11 = VAR_9->post_seek != VAR_0 ? VAR_9->post_seek :
                (VAR_8 < 0 ? 0 : (ngx_uint_t) VAR_8);

    if (FUNC_2(VAR_7, VAR_11) != VAR_3) {
        return VAR_1;
    }

    if (FUNC_3(VAR_7) != VAR_3) {
        return VAR_1;
    }

    VAR_9->opened = 1;

    return VAR_3;
}
