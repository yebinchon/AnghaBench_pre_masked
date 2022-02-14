
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int impls; } ;
struct TYPE_11__ {void* method; int properties; } ;
struct TYPE_10__ {int * global_properties; int ctx; } ;
typedef int OSSL_PROPERTY_LIST ;
typedef TYPE_1__ OSSL_METHOD_STORE ;
typedef TYPE_2__ IMPLEMENTATION ;
typedef TYPE_3__ ALGORITHM ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (int ,int) ;

int FUNC_11(OSSL_METHOD_STORE *VAR_1, int VAR_2,
                            const char *VAR_3, void **VAR_4)
{
    ALGORITHM *VAR_5;
    IMPLEMENTATION *VAR_6;
    OSSL_PROPERTY_LIST *VAR_7 = ((void*)0), *VAR_8;
    int VAR_9 = 0;
    int VAR_10, VAR_11 = -1, VAR_12, VAR_13;


    FUNC_0(VAR_0, ((void*)0));


    if (VAR_2 <= 0 || VAR_4 == ((void*)0) || VAR_1 == ((void*)0))
        return 0;





    FUNC_7(VAR_1);
    VAR_5 = FUNC_1(VAR_1, VAR_2);
    if (VAR_5 == ((void*)0)) {
        FUNC_8(VAR_1);
        return 0;
    }

    if (VAR_3 == ((void*)0)) {
        if ((VAR_6 = FUNC_10(VAR_5->impls, 0)) != ((void*)0)) {
            *VAR_4 = VAR_6->method;
            VAR_9 = 1;
        }
        goto fin;
    }
    VAR_7 = FUNC_2(VAR_1->ctx, VAR_3);
    if (VAR_7 == ((void*)0))
        goto fin;
    if (VAR_1->global_properties != ((void*)0)) {
        VAR_8 = FUNC_6(VAR_7, VAR_1->global_properties);
        if (VAR_8 == ((void*)0))
            goto fin;
        FUNC_3(VAR_7);
        VAR_7 = VAR_8;
    }
    VAR_13 = FUNC_4(VAR_7);
    for (VAR_10 = 0; VAR_10 < FUNC_9(VAR_5->impls); VAR_10++) {
        VAR_6 = FUNC_10(VAR_5->impls, VAR_10);
        VAR_12 = FUNC_5(VAR_7, VAR_6->properties);
        if (VAR_12 > VAR_11) {
            *VAR_4 = VAR_6->method;
            VAR_9 = 1;
            if (!VAR_13)
                goto fin;
            VAR_11 = VAR_12;
        }
    }
fin:
    FUNC_8(VAR_1);
    FUNC_3(VAR_7);
    return VAR_9;
}
