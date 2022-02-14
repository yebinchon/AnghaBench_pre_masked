
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CRYPTO_RWLOCK ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
    CRYPTO_RWLOCK *VAR_0 = FUNC_1();

    if (!FUNC_4(FUNC_2(VAR_0))
        || !FUNC_4(FUNC_3(VAR_0)))
        return 0;

    FUNC_0(VAR_0);

    return 1;
}
