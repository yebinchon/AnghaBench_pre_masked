
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_flv_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_file_t ;
struct TYPE_6__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int ,int) ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_3, ngx_file_t *VAR_4, ngx_int_t VAR_5,
                  ngx_int_t VAR_6)
{
    ngx_rtmp_flv_ctx_t *VAR_7;

    VAR_7 = FUNC_2(VAR_3, VAR_2);

    if (VAR_7 == ((void*)0)) {
        VAR_7 = FUNC_1(VAR_3->connection->pool, sizeof(ngx_rtmp_flv_ctx_t));

        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_3(VAR_3, VAR_7, VAR_2);
    }

    FUNC_0(VAR_7, sizeof(*VAR_7));

    return VAR_1;
}
