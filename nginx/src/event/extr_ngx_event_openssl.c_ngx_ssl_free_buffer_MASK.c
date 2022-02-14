
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ssl; int pool; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_6__ {TYPE_1__* buf; } ;
struct TYPE_5__ {int * start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

void
FUNC_1(ngx_connection_t *VAR_1)
{
    if (VAR_1->ssl->buf && VAR_1->ssl->buf->start) {
        if (FUNC_0(VAR_1->pool, VAR_1->ssl->buf->start) == VAR_0) {
            VAR_1->ssl->buf->start = ((void*)0);
        }
    }
}
