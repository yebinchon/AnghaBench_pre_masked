
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* d; int top; } ;
typedef int BN_CTX ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int *) ;

int FUNC_4(BIGNUM *VAR_3, BIGNUM *VAR_4, const BIGNUM *VAR_5, const BIGNUM *VAR_6,
           BN_CTX *VAR_7)
{
    int VAR_8;

    if (FUNC_0(VAR_6)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }






    if (VAR_6->d[VAR_6->top - 1] == 0) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    if (VAR_8) {
        if (VAR_3 != ((void*)0))
            FUNC_2(VAR_3);
        if (VAR_4 != ((void*)0))
            FUNC_2(VAR_4);
    }

    return VAR_8;
}
