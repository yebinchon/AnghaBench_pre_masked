
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {int top; int * d; int neg; } ;
typedef int BN_ULONG ;
typedef int BN_CTX ;
typedef TYPE_1__ const BIGNUM ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 int FUNC_3 (TYPE_1__ const*,int ,TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_6 (TYPE_1__ const*) ;

int FUNC_7(BIGNUM *VAR_1, const BIGNUM *VAR_2, const BIGNUM *VAR_3, const BIGNUM *VAR_4,
               BN_CTX *VAR_5)
{
    int VAR_6;

    FUNC_6(VAR_2);
    FUNC_6(VAR_3);
    FUNC_6(VAR_4);
    if (FUNC_1(VAR_4)) {

        if (VAR_2->top == 1 && !VAR_2->neg
            && (FUNC_0(VAR_3, VAR_0) == 0)
            && (FUNC_0(VAR_2, VAR_0) == 0)
            && (FUNC_0(VAR_4, VAR_0) == 0)) {
            BN_ULONG VAR_7 = VAR_2->d[0];
            VAR_6 = FUNC_3(VAR_1, VAR_7, VAR_3, VAR_4, VAR_5, ((void*)0));
        } else

            VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0));
    } else


    {
        VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    }






    FUNC_6(VAR_1);
    return VAR_6;
}
