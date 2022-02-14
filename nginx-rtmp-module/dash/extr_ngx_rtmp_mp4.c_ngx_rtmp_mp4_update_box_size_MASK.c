
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_4__ {int * last; } ;
typedef TYPE_1__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_buf_t *VAR_2, u_char *VAR_3)
{
    u_char *VAR_4;

    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4 = VAR_2->last;

    VAR_2->last = VAR_3;

    FUNC_0(VAR_2, (uint32_t) (VAR_4 - VAR_3));

    VAR_2->last = VAR_4;

    return VAR_1;
}
