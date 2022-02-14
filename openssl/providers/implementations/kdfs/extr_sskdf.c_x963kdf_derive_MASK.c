
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info_len; int info; int secret_len; int * secret; int * macctx; int digest; } ;
typedef TYPE_1__ KDF_SSKDF ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int *,int ,int ,int ,int,unsigned char*,size_t) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_4, unsigned char *VAR_5, size_t VAR_6)
{
    KDF_SSKDF *VAR_7 = (KDF_SSKDF *)VAR_4;
    const EVP_MD *VAR_8 = FUNC_2(&VAR_7->digest);

    if (VAR_7->secret == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_7->macctx != ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }


    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return FUNC_1(VAR_8, VAR_7->secret, VAR_7->secret_len,
                          VAR_7->info, VAR_7->info_len, 1, VAR_5, VAR_6);
}
