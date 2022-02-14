
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_10__ {scalar_t__ file_id; } ;
typedef TYPE_3__ ngx_rtmp_play_ctx_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(ngx_rtmp_session_t *VAR_2)
{
    ngx_rtmp_play_ctx_t *VAR_3;
    u_char *VAR_4;

    VAR_3 = FUNC_2(VAR_2, VAR_1);
    if (VAR_3 == ((void*)0) || VAR_3->file_id == 0) {
        return;
    }

    VAR_4 = FUNC_3(VAR_2);

    FUNC_1(VAR_0, VAR_2->connection->log, 0,
                   "play: deleting local file '%s'", VAR_4);

    VAR_3->file_id = 0;

    FUNC_0(VAR_4);
}
