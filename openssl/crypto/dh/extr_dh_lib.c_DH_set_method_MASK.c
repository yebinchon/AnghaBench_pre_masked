
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__ const* meth; int * engine; } ;
struct TYPE_7__ {int (* init ) (TYPE_2__*) ;int (* finish ) (TYPE_2__*) ;} ;
typedef TYPE_1__ const DH_METHOD ;
typedef TYPE_2__ DH ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(DH *VAR_0, const DH_METHOD *VAR_1)
{




    const DH_METHOD *VAR_2;
    VAR_2 = VAR_0->meth;
    if (VAR_2->finish)
        VAR_2->finish(VAR_0);

    FUNC_0(VAR_0->engine);
    VAR_0->engine = ((void*)0);

    VAR_0->meth = VAR_1;
    if (VAR_1->init)
        VAR_1->init(VAR_0);
    return 1;
}
