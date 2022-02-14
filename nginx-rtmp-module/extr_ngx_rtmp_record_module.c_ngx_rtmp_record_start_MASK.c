
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_20__ {TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_rtmp_session_t ;
struct TYPE_21__ {TYPE_3__* conf; } ;
typedef TYPE_6__ ngx_rtmp_record_rec_ctx_t ;
struct TYPE_17__ {scalar_t__ nelts; TYPE_6__* elts; } ;
struct TYPE_22__ {TYPE_2__ rec; } ;
typedef TYPE_7__ ngx_rtmp_record_ctx_t ;
struct TYPE_19__ {scalar_t__ nelts; } ;
struct TYPE_23__ {TYPE_4__ rec; } ;
typedef TYPE_8__ ngx_rtmp_record_app_conf_t ;
struct TYPE_18__ {int flags; } ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_8__* FUNC_1 (TYPE_5__*,int ) ;
 TYPE_7__* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static void
FUNC_4(ngx_rtmp_session_t *VAR_4)
{
    ngx_rtmp_record_app_conf_t *VAR_5;
    ngx_rtmp_record_rec_ctx_t *VAR_6;
    ngx_rtmp_record_ctx_t *VAR_7;
    ngx_uint_t VAR_8;

    VAR_5 = FUNC_1(VAR_4, VAR_3);
    if (VAR_5 == ((void*)0) || VAR_5->rec.nelts == 0) {
        return;
    }

    VAR_7 = FUNC_2(VAR_4, VAR_3);
    if (VAR_7 == ((void*)0)) {
        return;
    }

    FUNC_0(VAR_0, VAR_4->connection->log, 0,
                   "record: start");

    VAR_6 = VAR_7->rec.elts;
    for (VAR_8 = 0; VAR_8 < VAR_7->rec.nelts; ++VAR_8, ++VAR_6) {
        if (VAR_6->conf->flags & (VAR_2|VAR_1)) {
            continue;
        }
        FUNC_3(VAR_4, VAR_6);
    }
}
