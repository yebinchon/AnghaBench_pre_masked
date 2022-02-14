
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_22__ {TYPE_2__* connection; scalar_t__ relay; scalar_t__ auto_pushed; } ;
typedef TYPE_5__ ngx_rtmp_session_t ;
struct TYPE_23__ {scalar_t__ disk_full_time; TYPE_4__* format; } ;
typedef TYPE_6__ ngx_rtmp_log_t ;
struct TYPE_24__ {int * (* getdata ) (TYPE_5__*,int *,TYPE_7__*) ;scalar_t__ (* getlen ) (TYPE_5__*,TYPE_7__*) ;} ;
typedef TYPE_7__ ngx_rtmp_log_op_t ;
struct TYPE_25__ {TYPE_1__* logs; scalar_t__ off; } ;
typedef TYPE_8__ ngx_rtmp_log_app_conf_t ;
typedef int ngx_rtmp_header_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_21__ {TYPE_3__* ops; } ;
struct TYPE_20__ {scalar_t__ nelts; TYPE_7__* elts; } ;
struct TYPE_19__ {int pool; } ;
struct TYPE_18__ {scalar_t__ nelts; TYPE_6__* elts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,size_t) ;
 TYPE_8__* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,int *,int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_7__*) ;
 int * FUNC_6 (TYPE_5__*,int *,TYPE_7__*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_3, ngx_rtmp_header_t *VAR_4,
                        ngx_chain_t *VAR_5)
{
    ngx_rtmp_log_app_conf_t *VAR_6;
    ngx_rtmp_log_t *VAR_7;
    ngx_rtmp_log_op_t *VAR_8;
    ngx_uint_t VAR_9, VAR_10;
    u_char *VAR_11, *VAR_12;
    size_t VAR_13;

    if (VAR_3->auto_pushed || VAR_3->relay) {
        return VAR_1;
    }

    VAR_6 = FUNC_2(VAR_3, VAR_2);
    if (VAR_6 == ((void*)0) || VAR_6->off || VAR_6->logs == ((void*)0)) {
        return VAR_1;
    }

    VAR_7 = VAR_6->logs->elts;
    for (VAR_10 = 0; VAR_10 < VAR_6->logs->nelts; ++VAR_10, ++VAR_7) {

        if (FUNC_4() == VAR_7->disk_full_time) {


            continue;
        }

        VAR_13 = 0;
        VAR_8 = VAR_7->format->ops->elts;
        for (VAR_9 = 0; VAR_9 < VAR_7->format->ops->nelts; ++VAR_9, ++VAR_8) {
            VAR_13 += VAR_8->getlen(VAR_3, VAR_8);
        }

        VAR_13 += VAR_0;

        VAR_11 = FUNC_1(VAR_3->connection->pool, VAR_13);
        if (VAR_11 == ((void*)0)) {
            return VAR_1;
        }

        VAR_12 = VAR_11;
        VAR_8 = VAR_7->format->ops->elts;
        for (VAR_9 = 0; VAR_9 < VAR_7->format->ops->nelts; ++VAR_9, ++VAR_8) {
            VAR_12 = VAR_8->getdata(VAR_3, VAR_12, VAR_8);
        }

        FUNC_0(VAR_12);

        FUNC_3(VAR_3, VAR_7, VAR_11, VAR_12 - VAR_11);
    }

    return VAR_1;
}
