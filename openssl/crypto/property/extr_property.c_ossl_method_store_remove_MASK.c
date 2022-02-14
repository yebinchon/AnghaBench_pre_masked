
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int impls; } ;
struct TYPE_6__ {void const* method; } ;
typedef int OSSL_METHOD_STORE ;
typedef TYPE_1__ IMPLEMENTATION ;
typedef TYPE_2__ ALGORITHM ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ,int) ;

int FUNC_8(OSSL_METHOD_STORE *VAR_0, int VAR_1,
                             const void *VAR_2)
{
    ALGORITHM *VAR_3 = ((void*)0);
    int VAR_4;

    if (VAR_1 <= 0 || VAR_2 == ((void*)0) || VAR_0 == ((void*)0))
        return 0;

    FUNC_4(VAR_0);
    FUNC_1(VAR_0, VAR_1);
    VAR_3 = FUNC_2(VAR_0, VAR_1);
    if (VAR_3 == ((void*)0)) {
        FUNC_3(VAR_0);
        return 0;
    }






    for (VAR_4 = 0; VAR_4 < FUNC_6(VAR_3->impls); VAR_4++) {
        IMPLEMENTATION *VAR_5 = FUNC_7(VAR_3->impls, VAR_4);

        if (VAR_5->method == VAR_2) {
            FUNC_5(VAR_3->impls, VAR_4);
            FUNC_3(VAR_0);
            FUNC_0(VAR_5);
            return 1;
        }
    }
    FUNC_3(VAR_0);
    return 0;
}
