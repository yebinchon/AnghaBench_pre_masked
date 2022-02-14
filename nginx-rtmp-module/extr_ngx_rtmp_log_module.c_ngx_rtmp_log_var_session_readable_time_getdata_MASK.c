
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_3__ {int epoch; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_log_op_t ;
typedef int int64_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,scalar_t__) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_rtmp_session_t *VAR_1,
    u_char *VAR_2, ngx_rtmp_log_op_t *VAR_3)
{
    int64_t VAR_4;
    ngx_uint_t VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_4 = (VAR_0 - VAR_1->epoch) / 1000;

    VAR_5 = (ngx_uint_t) (VAR_4 / (60 * 60 * 24));
    VAR_6 = (ngx_uint_t) (VAR_4 / (60 * 60) % 24);
    VAR_7 = (ngx_uint_t) (VAR_4 / 60 % 60);
    VAR_8 = (ngx_uint_t) (VAR_4 % 60);

    if (VAR_5) {
        VAR_2 = FUNC_0(VAR_2, "%uid ", VAR_5);
    }

    if (VAR_5 || VAR_6) {
        VAR_2 = FUNC_0(VAR_2, "%uih ", VAR_6);
    }

    if (VAR_5 || VAR_6 || VAR_7) {
        VAR_2 = FUNC_0(VAR_2, "%uim ", VAR_7);
    }

    VAR_2 = FUNC_0(VAR_2, "%uis", VAR_8);

    return VAR_2;
}
