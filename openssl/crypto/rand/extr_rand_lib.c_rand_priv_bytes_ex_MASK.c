
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* bytes ) (unsigned char*,int) ;} ;
typedef TYPE_1__ RAND_METHOD ;
typedef int RAND_DRBG ;
typedef int OPENSSL_CTX ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 TYPE_1__ const* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (unsigned char*,int) ;

int FUNC_5(OPENSSL_CTX *VAR_0, unsigned char *VAR_1, int VAR_2)
{
    RAND_DRBG *VAR_3;
    int VAR_4;
    const RAND_METHOD *VAR_5 = FUNC_3();

    if (VAR_5 != FUNC_2())
        return VAR_5->bytes(VAR_1, VAR_2);

    VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 == ((void*)0))
        return 0;

    VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
    return VAR_4;
}
