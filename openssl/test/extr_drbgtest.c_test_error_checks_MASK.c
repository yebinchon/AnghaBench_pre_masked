
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DRBG_SELFTEST_DATA ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
    DRBG_SELFTEST_DATA *VAR_2 = &VAR_0[VAR_1];
    int VAR_3 = 0;

    if (FUNC_0(VAR_2))
        goto err;
    VAR_3 = 1;

err:
    return VAR_3;
}
