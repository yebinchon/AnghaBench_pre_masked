
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * init_function; int * name; int * refcnt_lock; } ;
typedef int OSSL_provider_init_fn ;
typedef TYPE_1__ OSSL_PROVIDER ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static OSSL_PROVIDER *FUNC_6(const char *VAR_2,
                                   OSSL_provider_init_fn *VAR_3)
{
    OSSL_PROVIDER *VAR_4 = ((void*)0);

    if ((VAR_4 = FUNC_3(sizeof(*VAR_4))) == ((void*)0)

        || (VAR_4->refcnt_lock = FUNC_0()) == ((void*)0)

        || !FUNC_5(VAR_4)
        || (VAR_4->name = FUNC_2(VAR_2)) == ((void*)0)) {
        FUNC_4(VAR_4);
        FUNC_1(VAR_0, VAR_1);
        return ((void*)0);
    }

    VAR_4->init_function = VAR_3;
    return VAR_4;
}
