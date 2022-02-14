
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int CONF ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,long*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int) ;

int FUNC_9(const uint8_t *VAR_0, size_t VAR_1)
{
    CONF *VAR_2;
    BIO *VAR_3;
    long VAR_4;

    if (VAR_1 == 0)
        return 0;

    VAR_2 = FUNC_7(((void*)0));
    VAR_3 = FUNC_1(FUNC_2());
    FUNC_8((size_t)FUNC_3(VAR_3, VAR_0, VAR_1) == VAR_1);
    FUNC_6(VAR_2, VAR_3, &VAR_4);
    FUNC_5(VAR_2);
    FUNC_0(VAR_3);
    FUNC_4();

    return 0;
}
