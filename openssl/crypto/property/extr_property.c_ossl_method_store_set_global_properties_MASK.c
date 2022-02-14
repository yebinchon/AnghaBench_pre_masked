
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * global_properties; int ctx; } ;
typedef TYPE_1__ OSSL_METHOD_STORE ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(OSSL_METHOD_STORE *VAR_0,
                                            const char *VAR_1) {
    int VAR_2 = 0;

    if (VAR_0 == ((void*)0))
        return 1;

    FUNC_4(VAR_0);
    FUNC_0(VAR_0);
    if (VAR_1 == ((void*)0)) {
        FUNC_2(VAR_0->global_properties);
        VAR_0->global_properties = ((void*)0);
        FUNC_3(VAR_0);
        return 1;
    }
    VAR_0->global_properties = FUNC_1(VAR_0->ctx, VAR_1);
    VAR_2 = VAR_0->global_properties != ((void*)0);
    FUNC_3(VAR_0);
    return VAR_2;
}
