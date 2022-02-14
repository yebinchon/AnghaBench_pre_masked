
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_18__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_19__ {scalar_t__ offset; } ;
typedef TYPE_4__ ngx_rtmp_seek_t ;
struct TYPE_17__ {scalar_t__ fd; } ;
struct TYPE_20__ {scalar_t__ post_seek; int opened; TYPE_2__ file; } ;
typedef TYPE_5__ ngx_rtmp_play_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_6, ngx_rtmp_seek_t *VAR_7)
{
    ngx_rtmp_play_ctx_t *VAR_8;

    VAR_8 = FUNC_2(VAR_6, VAR_5);
    if (VAR_8 == ((void*)0) || VAR_8->file.fd == VAR_1) {
        goto next;
    }

    if (!VAR_8->opened) {
        VAR_8->post_seek = (ngx_uint_t) VAR_7->offset;
        FUNC_1(VAR_2, VAR_6->connection->log, 0,
                       "play: post seek=%ui", VAR_8->post_seek);
        goto next;
    }

    if (FUNC_6(VAR_6, VAR_4) != VAR_3) {
        return VAR_0;
    }

    FUNC_3(VAR_6, (ngx_uint_t) VAR_7->offset);

    if (FUNC_4(VAR_6, "NetStream.Seek.Notify", "status", "Seeking")
        != VAR_3)
    {
        return VAR_0;
    }

    if (FUNC_5(VAR_6, VAR_4) != VAR_3) {
        return VAR_0;
    }

next:
    return FUNC_0(VAR_6, VAR_7);
}
