
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;
typedef int ECDSA_SIG ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (unsigned char const*,int,int *,int *) ;
 int FUNC_3 (unsigned char*,int) ;
 int * FUNC_4 (int **,unsigned char const**,int) ;
 int FUNC_5 (int *,unsigned char**) ;
 scalar_t__ FUNC_6 (unsigned char const*,unsigned char*,int) ;

int FUNC_7(int VAR_0, const unsigned char *VAR_1, int VAR_2,
                      const unsigned char *VAR_3, int VAR_4, EC_KEY *VAR_5)
{
    ECDSA_SIG *VAR_6;
    const unsigned char *VAR_7 = VAR_3;
    unsigned char *VAR_8 = ((void*)0);
    int VAR_9 = -1;
    int VAR_10 = -1;

    VAR_6 = FUNC_1();
    if (VAR_6 == ((void*)0))
        return VAR_10;
    if (FUNC_4(&VAR_6, &VAR_7, VAR_4) == ((void*)0))
        goto err;

    VAR_9 = FUNC_5(VAR_6, &VAR_8);
    if (VAR_9 != VAR_4 || FUNC_6(VAR_3, VAR_8, VAR_9) != 0)
        goto err;
    VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_6, VAR_5);
 err:
    FUNC_3(VAR_8, VAR_9);
    FUNC_0(VAR_6);
    return VAR_10;
}
