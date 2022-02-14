
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
 int VAR_0 ;
 TYPE_1__ const* FUNC_2 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned char*,int) ;

int FUNC_6(OPENSSL_CTX *VAR_2, unsigned char *VAR_3, int VAR_4)
{
    RAND_DRBG *VAR_5;
    int VAR_6;
    const RAND_METHOD *VAR_7 = FUNC_3();

    if (VAR_7 != FUNC_2()) {
        if (VAR_7->bytes != ((void*)0))
            return VAR_7->bytes(VAR_3, VAR_4);
        FUNC_4(VAR_0, VAR_1);
        return -1;
    }

    VAR_5 = FUNC_0(VAR_2);
    if (VAR_5 == ((void*)0))
        return 0;

    VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
    return VAR_6;
}
