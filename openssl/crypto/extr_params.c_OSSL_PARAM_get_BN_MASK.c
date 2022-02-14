
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data_type; scalar_t__ data_size; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int BIGNUM ;


 int * FUNC_0 (int ,int,int *) ;
 scalar_t__ VAR_0 ;

int FUNC_1(const OSSL_PARAM *VAR_1, BIGNUM **VAR_2)
{
    BIGNUM *VAR_3;

    if (VAR_2 == ((void*)0)
        || VAR_1 == ((void*)0)
        || VAR_1->data_type != VAR_0)
        return 0;

    VAR_3 = FUNC_0(VAR_1->data, (int)VAR_1->data_size, *VAR_2);
    if (VAR_3 != ((void*)0)) {
        *VAR_2 = VAR_3;
        return 1;
    }
    return 0;
}
