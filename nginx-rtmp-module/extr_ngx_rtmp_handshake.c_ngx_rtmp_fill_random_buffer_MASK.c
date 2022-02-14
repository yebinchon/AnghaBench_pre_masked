
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {scalar_t__* last; scalar_t__* end; } ;
typedef TYPE_1__ ngx_buf_t ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(ngx_buf_t *VAR_0)
{
    for (; VAR_0->last != VAR_0->end; ++VAR_0->last) {
        *VAR_0->last = (u_char) FUNC_0();
    }
}
