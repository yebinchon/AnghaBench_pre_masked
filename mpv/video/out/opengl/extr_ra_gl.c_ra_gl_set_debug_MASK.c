
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ra_gl {int debug_enable; } ;
struct ra {int * log; struct ra_gl* priv; } ;
struct TYPE_4__ {scalar_t__ debug_context; } ;
typedef TYPE_1__ GL ;


 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (struct ra*) ;

void FUNC_2(struct ra *VAR_0, bool VAR_1)
{
    struct ra_gl *VAR_2 = VAR_0->priv;
    GL *VAR_3 = FUNC_1(VAR_0);

    VAR_2->debug_enable = VAR_1;
    if (VAR_3->debug_context)
        FUNC_0(VAR_3, VAR_1 ? VAR_0->log : ((void*)0));
}
