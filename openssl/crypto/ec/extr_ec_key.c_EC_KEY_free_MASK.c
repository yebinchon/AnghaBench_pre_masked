
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* meth; } ;
struct TYPE_12__ {int priv_key; int pub_key; TYPE_8__* group; int lock; int ex_data; int engine; TYPE_1__* meth; int references; } ;
struct TYPE_11__ {int (* keyfinish ) (TYPE_3__*) ;} ;
struct TYPE_10__ {int (* finish ) (TYPE_3__*) ;} ;
typedef TYPE_3__ EC_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

void FUNC_12(EC_KEY *VAR_1)
{
    int VAR_2;

    if (VAR_1 == ((void*)0))
        return;

    FUNC_1(&VAR_1->references, &VAR_2, VAR_1->lock);
    FUNC_9("EC_KEY", VAR_1);
    if (VAR_2 > 0)
        return;
    FUNC_8(VAR_2 < 0);

    if (VAR_1->meth != ((void*)0) && VAR_1->meth->finish != ((void*)0))
        VAR_1->meth->finish(VAR_1);


    FUNC_6(VAR_1->engine);


    if (VAR_1->group && VAR_1->group->meth->keyfinish)
        VAR_1->group->meth->keyfinish(VAR_1);


    FUNC_3(VAR_0, VAR_1, &VAR_1->ex_data);

    FUNC_2(VAR_1->lock);
    FUNC_4(VAR_1->group);
    FUNC_5(VAR_1->pub_key);
    FUNC_0(VAR_1->priv_key);

    FUNC_7((void *)VAR_1, sizeof(EC_KEY));
}
