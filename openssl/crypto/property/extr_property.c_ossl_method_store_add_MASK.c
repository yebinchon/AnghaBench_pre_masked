
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int nid; int * impls; int * cache; } ;
struct TYPE_20__ {void (* method_destruct ) (void*) ;scalar_t__ properties; int const* provider; void* method; } ;
struct TYPE_19__ {int ctx; } ;
typedef int OSSL_PROVIDER ;
typedef TYPE_1__ OSSL_METHOD_STORE ;
typedef TYPE_2__ IMPLEMENTATION ;
typedef TYPE_3__ ALGORITHM ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_1__*,int) ;
 int * FUNC_9 (int ,char const*) ;
 int * FUNC_10 (int ,char const*) ;
 int FUNC_11 (int ,char const*,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_14 () ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_17 (int *,int) ;

int FUNC_18(OSSL_METHOD_STORE *VAR_2, const OSSL_PROVIDER *VAR_3,
                          int VAR_4, const char *VAR_5, void *VAR_6,
                          int (*VAR_7)(void *),
                          void (*VAR_8)(void *))
{
    ALGORITHM *VAR_9 = ((void*)0);
    IMPLEMENTATION *VAR_10;
    int VAR_11 = 0;
    int VAR_12;

    if (VAR_4 <= 0 || VAR_6 == ((void*)0) || VAR_2 == ((void*)0))
        return 0;
    if (VAR_5 == ((void*)0))
        VAR_5 = "";


    VAR_10 = FUNC_1(sizeof(*VAR_10));
    if (VAR_10 == ((void*)0))
        return 0;
    if (VAR_7 != ((void*)0) && !VAR_7(VAR_6)) {
        FUNC_0(VAR_10);
        return 0;
    }
    VAR_10->provider = VAR_3;
    VAR_10->method = VAR_6;
    VAR_10->method_destruct = VAR_8;







    FUNC_13(VAR_2);
    FUNC_6(VAR_2, VAR_4);
    if ((VAR_10->properties = FUNC_10(VAR_2->ctx, VAR_5)) == ((void*)0)) {
        VAR_10->properties = FUNC_9(VAR_2->ctx, VAR_5);
        if (VAR_10->properties == ((void*)0))
            goto err;
        FUNC_11(VAR_2->ctx, VAR_5, VAR_10->properties);
    }

    VAR_9 = FUNC_8(VAR_2, VAR_4);
    if (VAR_9 == ((void*)0)) {
        if ((VAR_9 = FUNC_2(sizeof(*VAR_9))) == ((void*)0)
                || (VAR_9->impls = FUNC_14()) == ((void*)0)
                || (VAR_9->cache = FUNC_5(&VAR_1, &VAR_0)) == ((void*)0))
            goto err;
        VAR_9->nid = VAR_4;
        if (!FUNC_7(VAR_2, VAR_9))
            goto err;
    }


    for (VAR_12 = 0; VAR_12 < FUNC_15(VAR_9->impls); VAR_12++) {
        const IMPLEMENTATION *VAR_13 = FUNC_17(VAR_9->impls, VAR_12);

        if (VAR_13->provider == VAR_10->provider
            && VAR_13->properties == VAR_10->properties)
            break;
    }
    if (VAR_12 == FUNC_15(VAR_9->impls)
        && FUNC_16(VAR_9->impls, VAR_10))
        VAR_11 = 1;
    FUNC_12(VAR_2);
    if (VAR_11 == 0)
        FUNC_4(VAR_10);
    return VAR_11;

err:
    FUNC_12(VAR_2);
    FUNC_3(0, VAR_9);
    FUNC_4(VAR_10);
    return 0;
}
