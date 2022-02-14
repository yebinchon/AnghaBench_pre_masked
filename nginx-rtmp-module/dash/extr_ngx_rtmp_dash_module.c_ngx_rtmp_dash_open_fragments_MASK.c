
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_10__ {int opened; int id; int audio; int video; } ;
typedef TYPE_3__ ngx_rtmp_dash_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *,int ,char) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_3)
{
    ngx_rtmp_dash_ctx_t *VAR_4;

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
                   "dash: open fragments");

    VAR_4 = FUNC_2(VAR_3, VAR_2);

    if (VAR_4->opened) {
        return VAR_1;
    }

    FUNC_1(VAR_3, &VAR_4->video, VAR_4->id, 'v');

    FUNC_1(VAR_3, &VAR_4->audio, VAR_4->id, 'a');

    VAR_4->opened = 1;

    return VAR_1;
}
