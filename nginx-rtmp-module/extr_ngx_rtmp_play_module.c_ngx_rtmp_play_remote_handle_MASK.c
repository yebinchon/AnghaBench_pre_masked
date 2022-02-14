
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_16__ {int start; int name; } ;
typedef TYPE_3__ ngx_rtmp_play_t ;
struct TYPE_17__ {scalar_t__ nbody; scalar_t__ file_id; } ;
typedef TYPE_4__ ngx_rtmp_play_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_4, void *VAR_5, ngx_chain_t *VAR_6)
{
    ngx_rtmp_play_t *VAR_7 = VAR_5;

    ngx_rtmp_play_ctx_t *VAR_8;

    VAR_8 = FUNC_2(VAR_4, VAR_3);

    if (VAR_8->nbody == 0) {
        return FUNC_4(VAR_4, VAR_7);
    }

    if (VAR_8->file_id) {
        FUNC_3(VAR_4, VAR_7->name);
    }

    FUNC_1(VAR_1, VAR_4->connection->log, 0,
                   "play: open remote file");

    if (FUNC_5(VAR_4, VAR_7->start) != VAR_2) {
        return VAR_0;
    }

    return FUNC_0(VAR_4, (ngx_rtmp_play_t *)VAR_5);
}
