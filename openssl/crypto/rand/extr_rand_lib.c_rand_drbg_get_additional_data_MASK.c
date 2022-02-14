
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAND_POOL ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned char* FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;

size_t FUNC_3(RAND_POOL *VAR_0, unsigned char **VAR_1)
{
    size_t VAR_2 = 0;

    if (FUNC_0(VAR_0) == 0)
        goto err;

    VAR_2 = FUNC_2(VAR_0);
    *VAR_1 = FUNC_1(VAR_0);

 err:
    return VAR_2;
}
