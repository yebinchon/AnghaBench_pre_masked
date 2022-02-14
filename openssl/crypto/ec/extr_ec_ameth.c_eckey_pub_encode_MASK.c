
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_PUBKEY ;
struct TYPE_4__ {int * ec; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *,int ,int,void*,unsigned char*,int) ;
 int FUNC_7 (int*,void**,int *) ;
 int FUNC_8 (int *,unsigned char**) ;

__attribute__((used)) static int FUNC_9(X509_PUBKEY *VAR_4, const EVP_PKEY *VAR_5)
{
    EC_KEY *VAR_6 = VAR_5->pkey.ec;
    void *VAR_7 = ((void*)0);
    int VAR_8;
    unsigned char *VAR_9 = ((void*)0), *VAR_10;
    int VAR_11;

    if (!FUNC_7(&VAR_8, &VAR_7, VAR_6)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    VAR_11 = FUNC_8(VAR_6, ((void*)0));
    if (VAR_11 <= 0)
        goto err;
    VAR_9 = FUNC_5(VAR_11);
    if (VAR_9 == ((void*)0))
        goto err;
    VAR_10 = VAR_9;
    VAR_11 = FUNC_8(VAR_6, &VAR_10);
    if (VAR_11 <= 0)
        goto err;
    if (FUNC_6(VAR_4, FUNC_3(VAR_2),
                               VAR_8, VAR_7, VAR_9, VAR_11))
        return 1;
 err:
    if (VAR_8 == VAR_3)
        FUNC_0(VAR_7);
    else
        FUNC_1(VAR_7);
    FUNC_4(VAR_9);
    return 0;
}
