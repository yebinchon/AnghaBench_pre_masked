
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ minimum; scalar_t__ maximum; } ;
typedef TYPE_1__ GENERAL_SUBTREE ;
typedef int BIGNUM ;


 int * FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(GENERAL_SUBTREE *VAR_0) {
    BIGNUM *VAR_1 = ((void*)0);
    int VAR_2 = 1;

    if (VAR_0->maximum)
        VAR_2 = 0;

    if (VAR_0->minimum) {
        VAR_1 = FUNC_0(VAR_0->minimum, ((void*)0));
        if (VAR_1 == ((void*)0) || !FUNC_2(VAR_1))
            VAR_2 = 0;
        FUNC_1(VAR_1);
    }

    return VAR_2;
}
