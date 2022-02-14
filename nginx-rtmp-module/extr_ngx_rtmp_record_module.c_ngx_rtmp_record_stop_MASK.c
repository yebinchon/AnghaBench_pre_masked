
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_16__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_record_rec_ctx_t ;
struct TYPE_14__ {scalar_t__ nelts; int * elts; } ;
struct TYPE_17__ {TYPE_2__ rec; } ;
typedef TYPE_5__ ngx_rtmp_record_ctx_t ;
struct TYPE_15__ {scalar_t__ nelts; } ;
struct TYPE_18__ {TYPE_3__ rec; } ;
typedef TYPE_6__ ngx_rtmp_record_app_conf_t ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_6__* FUNC_1 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static void
FUNC_4(ngx_rtmp_session_t *VAR_2)
{
    ngx_rtmp_record_app_conf_t *VAR_3;
    ngx_rtmp_record_rec_ctx_t *VAR_4;
    ngx_rtmp_record_ctx_t *VAR_5;
    ngx_uint_t VAR_6;

    VAR_3 = FUNC_1(VAR_2, VAR_1);
    if (VAR_3 == ((void*)0) || VAR_3->rec.nelts == 0) {
        return;
    }

    VAR_5 = FUNC_2(VAR_2, VAR_1);
    if (VAR_5 == ((void*)0)) {
        return;
    }

    FUNC_0(VAR_0, VAR_2->connection->log, 0,
                   "record: stop");

    VAR_4 = VAR_5->rec.elts;
    for (VAR_6 = 0; VAR_6 < VAR_5->rec.nelts; ++VAR_6, ++VAR_4) {
        FUNC_3(VAR_2, VAR_4);
    }
}
