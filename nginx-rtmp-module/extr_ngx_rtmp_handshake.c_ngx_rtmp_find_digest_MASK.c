
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_str_t ;
typedef int ngx_log_t ;
typedef size_t ngx_int_t ;
struct TYPE_4__ {scalar_t__* pos; } ;
typedef TYPE_1__ ngx_buf_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,scalar_t__*,scalar_t__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_buf_t *VAR_3, ngx_str_t *VAR_4, size_t VAR_5, ngx_log_t *VAR_6)
{
    size_t VAR_7, VAR_8;
    u_char VAR_9[VAR_2];
    u_char *VAR_10;

    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < 4; ++VAR_7) {
        VAR_8 += VAR_3->pos[VAR_5 + VAR_7];
    }
    VAR_8 = (VAR_8 % 728) + VAR_5 + 4;
    VAR_10 = VAR_3->pos + VAR_8;

    if (FUNC_1(VAR_4, VAR_3, VAR_10, VAR_9, VAR_6) != VAR_1) {
        return VAR_0;
    }

    if (FUNC_0(VAR_9, VAR_10, VAR_2) == 0) {
        return VAR_8;
    }

    return VAR_0;
}
