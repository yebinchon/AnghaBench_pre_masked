
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; struct TYPE_5__* precomp_storage; int references; } ;
typedef TYPE_1__ NISTZ256_PRE_COMP ;


 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,TYPE_1__*) ;

void FUNC_5(NISTZ256_PRE_COMP *VAR_0)
{
    int VAR_1;

    if (VAR_0 == ((void*)0))
        return;

    FUNC_0(&VAR_0->references, &VAR_1, VAR_0->lock);
    FUNC_4("EC_nistz256", VAR_0);
    if (VAR_1 > 0)
        return;
    FUNC_3(VAR_1 < 0);

    FUNC_2(VAR_0->precomp_storage);
    FUNC_1(VAR_0->lock);
    FUNC_2(VAR_0);
}
