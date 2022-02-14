
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_str_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_4__ {scalar_t__* pos; } ;
typedef TYPE_1__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,scalar_t__*,scalar_t__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_buf_t *VAR_2, ngx_str_t *VAR_3, size_t VAR_4,
        ngx_log_t *VAR_5)
{
    size_t VAR_6, VAR_7;
    u_char *VAR_8;

    VAR_7 = 0;
    for (VAR_6 = 8; VAR_6 < 12; ++VAR_6) {
        VAR_7 += VAR_2->pos[VAR_4 + VAR_6];
    }
    VAR_7 = (VAR_7 % 728) + VAR_4 + 12;
    VAR_8 = VAR_2->pos + VAR_7;

    if (FUNC_0(VAR_3, VAR_2, VAR_8, VAR_8, VAR_5) != VAR_1) {
        return VAR_0;
    }

    return VAR_1;
}
