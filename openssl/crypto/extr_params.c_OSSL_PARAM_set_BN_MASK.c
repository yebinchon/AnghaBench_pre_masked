
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t return_size; scalar_t__ data_type; size_t data_size; int * data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int const*,int *,size_t) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ VAR_0 ;

int FUNC_3(OSSL_PARAM *VAR_1, const BIGNUM *VAR_2)
{
    size_t VAR_3;

    if (VAR_1 == ((void*)0))
        return 0;
    VAR_1->return_size = 0;
    if (VAR_2 == ((void*)0) || VAR_1->data_type != VAR_0)
        return 0;


    if (FUNC_1(VAR_2))
        return 0;

    VAR_3 = (size_t)FUNC_2(VAR_2);
    VAR_1->return_size = VAR_3;
    if (VAR_1->data == ((void*)0))
        return 1;
    if (VAR_1->data_size >= VAR_3) {
        VAR_1->return_size = VAR_1->data_size;
        return FUNC_0(VAR_2, VAR_1->data, VAR_1->data_size) >= 0;
    }
    return 0;
}
