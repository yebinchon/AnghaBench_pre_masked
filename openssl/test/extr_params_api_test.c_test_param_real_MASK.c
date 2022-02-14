
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 TYPE_1__ FUNC_0 (char*,int *) ;
 int FUNC_1 (TYPE_1__*,double) ;
 scalar_t__ FUNC_2 (double,double) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void)
{
    double VAR_0;
    OSSL_PARAM VAR_1 = FUNC_0("r", ((void*)0));

    VAR_1.data = &VAR_0;
    return FUNC_3(FUNC_1(&VAR_1, 3.14159))
           && FUNC_2(VAR_0, 3.14159);
}
