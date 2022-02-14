
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_play_entry_t ;
struct TYPE_7__ {size_t nentry; } ;
typedef TYPE_2__ ngx_rtmp_play_ctx_t ;
struct TYPE_6__ {int ** elts; } ;
struct TYPE_8__ {TYPE_1__ entries; } ;
typedef TYPE_3__ ngx_rtmp_play_app_conf_t ;


 TYPE_3__* FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static ngx_rtmp_play_entry_t *
FUNC_2(ngx_rtmp_session_t *VAR_1)
{
    ngx_rtmp_play_app_conf_t *VAR_2;
    ngx_rtmp_play_ctx_t *VAR_3;
    ngx_rtmp_play_entry_t **VAR_4;

    VAR_2 = FUNC_0(VAR_1, VAR_0);

    VAR_3 = FUNC_1(VAR_1, VAR_0);

    VAR_4 = VAR_2->entries.elts;

    return VAR_4[VAR_3->nentry];
}
