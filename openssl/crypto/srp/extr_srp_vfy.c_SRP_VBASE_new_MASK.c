
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * gN_cache; int * users_pwd; int * seed_key; int * default_N; int * default_g; } ;
typedef TYPE_1__ SRP_VBASE ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;

SRP_VBASE *FUNC_7(char *VAR_0)
{
    SRP_VBASE *VAR_1 = FUNC_1(sizeof(*VAR_1));

    if (VAR_1 == ((void*)0))
        return ((void*)0);
    if ((VAR_1->users_pwd = FUNC_6()) == ((void*)0)
        || (VAR_1->gN_cache = FUNC_4()) == ((void*)0)) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }
    VAR_1->default_g = ((void*)0);
    VAR_1->default_N = ((void*)0);
    VAR_1->seed_key = ((void*)0);
    if ((VAR_0 != ((void*)0)) && (VAR_1->seed_key = FUNC_2(VAR_0)) == ((void*)0)) {
        FUNC_5(VAR_1->users_pwd);
        FUNC_3(VAR_1->gN_cache);
        FUNC_0(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
