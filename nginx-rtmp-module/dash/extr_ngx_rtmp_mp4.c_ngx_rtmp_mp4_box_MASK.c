
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_3__ {scalar_t__ last; scalar_t__ end; } ;
typedef TYPE_1__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_buf_t *VAR_2, const char VAR_3[4])
{
    if (VAR_2->last + 4 > VAR_2->end) {
        return VAR_0;
    }

    VAR_2->last = FUNC_0(VAR_2->last, (u_char *) VAR_3, 4);

    return VAR_1;
}
