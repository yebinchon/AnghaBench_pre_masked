
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* finish ) (TYPE_2__*) ;} ;
typedef TYPE_2__ COMP_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(COMP_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->meth->finish != ((void*)0))
        VAR_0->meth->finish(VAR_0);

    FUNC_0(VAR_0);
}
