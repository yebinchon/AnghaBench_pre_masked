
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* value; struct TYPE_8__* name; } ;
struct TYPE_7__ {int * parameters; } ;
typedef TYPE_1__ OSSL_PROVIDER ;
typedef TYPE_2__ INFOPAIR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (char const*) ;
 TYPE_2__* FUNC_3 (int) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;

int FUNC_6(OSSL_PROVIDER *VAR_2,
                                const char *VAR_3, const char *VAR_4)
{
    INFOPAIR *VAR_5 = ((void*)0);

    if ((VAR_5 = FUNC_3(sizeof(*VAR_5))) != ((void*)0)
        && (VAR_2->parameters != ((void*)0)
            || (VAR_2->parameters = FUNC_4()) != ((void*)0))
        && (VAR_5->name = FUNC_2(VAR_3)) != ((void*)0)
        && (VAR_5->value = FUNC_2(VAR_4)) != ((void*)0)
        && FUNC_5(VAR_2->parameters, VAR_5) > 0)
        return 1;

    if (VAR_5 != ((void*)0)) {
        FUNC_1(VAR_5->name);
        FUNC_1(VAR_5->value);
        FUNC_1(VAR_5);
    }
    FUNC_0(VAR_0, VAR_1);
    return 0;
}
