
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* udp; TYPE_1__* listening; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_5__ {int node; } ;
struct TYPE_4__ {int rbtree; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(void *VAR_0)
{
    ngx_connection_t *VAR_1 = VAR_0;

    if (VAR_1->udp == ((void*)0)) {
        return;
    }

    FUNC_0(&VAR_1->listening->rbtree, &VAR_1->udp->node);

    VAR_1->udp = ((void*)0);
}
