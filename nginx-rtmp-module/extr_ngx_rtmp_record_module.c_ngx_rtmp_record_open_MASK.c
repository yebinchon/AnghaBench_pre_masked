
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_record_rec_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;

ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_3, ngx_uint_t VAR_4, ngx_str_t *VAR_5)
{
    ngx_rtmp_record_rec_ctx_t *VAR_6;
    ngx_int_t VAR_7;

    FUNC_0(VAR_1, VAR_3->connection->log, 0,
                   "record: #%ui manual open", VAR_4);

    VAR_6 = FUNC_1(VAR_3, VAR_4);

    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = FUNC_3(VAR_3, VAR_6);
    if (VAR_7 != VAR_2) {
        return VAR_7;
    }

    if (VAR_5) {
        FUNC_2(VAR_3, VAR_6, VAR_5);
    }

    return VAR_2;
}
