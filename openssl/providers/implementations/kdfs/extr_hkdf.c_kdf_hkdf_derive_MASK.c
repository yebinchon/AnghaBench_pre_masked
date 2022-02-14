
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int info_len; int info; int key_len; int * key; int salt_len; int salt; int digest; } ;
typedef TYPE_1__ KDF_HKDF ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;



 int FUNC_1 (int const*,int ,int ,int *,int ,int ,int ,unsigned char*,size_t) ;
 int FUNC_2 (int const*,int *,int ,int ,int ,unsigned char*,size_t) ;
 int FUNC_3 (int const*,int ,int ,int *,int ,unsigned char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, unsigned char *VAR_4, size_t VAR_5)
{
    KDF_HKDF *VAR_6 = (KDF_HKDF *)VAR_3;
    const EVP_MD *VAR_7 = FUNC_4(&VAR_6->digest);

    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_6->key == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    switch (VAR_6->mode) {
    case 129:
        return FUNC_1(VAR_7, VAR_6->salt, VAR_6->salt_len, VAR_6->key,
                    VAR_6->key_len, VAR_6->info, VAR_6->info_len, VAR_4,
                    VAR_5);

    case 128:
        return FUNC_3(VAR_7, VAR_6->salt, VAR_6->salt_len, VAR_6->key,
                            VAR_6->key_len, VAR_4, VAR_5);

    case 130:
        return FUNC_2(VAR_7, VAR_6->key, VAR_6->key_len, VAR_6->info,
                           VAR_6->info_len, VAR_4, VAR_5);

    default:
        return 0;
    }
}
