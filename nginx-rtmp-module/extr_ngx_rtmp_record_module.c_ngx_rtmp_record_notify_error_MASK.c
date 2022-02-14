
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_6__ {int failed; TYPE_3__* conf; } ;
typedef TYPE_2__ ngx_rtmp_record_rec_ctx_t ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_7__ {TYPE_1__ id; int notify; } ;
typedef TYPE_3__ ngx_rtmp_record_app_conf_t ;


 int FUNC_0 (int *,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(ngx_rtmp_session_t *VAR_0,
                             ngx_rtmp_record_rec_ctx_t *VAR_1)
{
    ngx_rtmp_record_app_conf_t *VAR_2 = VAR_1->conf;

    VAR_1->failed = 1;

    if (!VAR_2->notify) {
        return;
    }

    FUNC_0(VAR_0, "NetStream.Record.Failed", "error",
                         VAR_2->id.data ? (char *) VAR_2->id.data : "");
}
