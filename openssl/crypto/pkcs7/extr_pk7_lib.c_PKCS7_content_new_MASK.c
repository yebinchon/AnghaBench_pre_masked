
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS7 ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(PKCS7 *VAR_0, int VAR_1)
{
    PKCS7 *VAR_2 = ((void*)0);

    if ((VAR_2 = FUNC_1()) == ((void*)0))
        goto err;
    if (!FUNC_3(VAR_2, VAR_1))
        goto err;
    if (!FUNC_2(VAR_0, VAR_2))
        goto err;

    return 1;
 err:
    FUNC_0(VAR_2);
    return 0;
}
