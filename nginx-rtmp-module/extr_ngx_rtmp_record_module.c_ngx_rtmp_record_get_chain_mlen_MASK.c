
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* buf; struct TYPE_5__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_4__ {scalar_t__ pos; scalar_t__ last; } ;



__attribute__((used)) static size_t
FUNC_0(ngx_chain_t *VAR_0)
{
    size_t VAR_1;

    for (VAR_1 = 0; VAR_0; VAR_0 = VAR_0->next) {
        VAR_1 += (VAR_0->buf->last - VAR_0->buf->pos);
    }

    return VAR_1;
}
