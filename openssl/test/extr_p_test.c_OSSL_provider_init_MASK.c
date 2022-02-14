
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int function_id; } ;
typedef int OSSL_PROVIDER ;
typedef TYPE_1__ OSSL_DISPATCH ;




 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_2(const OSSL_PROVIDER *VAR_3,
                       const OSSL_DISPATCH *VAR_4,
                       const OSSL_DISPATCH **VAR_5,
                       void **VAR_6)
{
    for (; VAR_4->function_id != 0; VAR_4++) {
        switch (VAR_4->function_id) {
        case 129:
            VAR_1 = FUNC_1(VAR_4);
            break;
        case 128:
            VAR_0 = FUNC_0(VAR_4);
            break;
        default:

            break;
        }
    }


    *VAR_6 = (void *)VAR_3;

    *VAR_5 = VAR_2;
    return 1;
}
