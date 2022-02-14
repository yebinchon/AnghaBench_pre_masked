
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pad ;
struct TYPE_3__ {int* key; int key_length; int i_ctx; int md_ctx; int o_ctx; int const* md; } ;
typedef TYPE_1__ HMAC_CTX ;
typedef int const EVP_MD ;
typedef int ENGINE ;


 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int ,int const*,int *) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int VAR_1 ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (int*,void const*,int) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int) ;

int FUNC_10(HMAC_CTX *VAR_2, const void *VAR_3, int VAR_4,
                 const EVP_MD *VAR_5, ENGINE *VAR_6)
{
    int VAR_7 = 0;
    int VAR_8, VAR_9, VAR_10 = 0;
    unsigned char VAR_11[VAR_1];


    if (VAR_5 != ((void*)0) && VAR_5 != VAR_2->md && (VAR_3 == ((void*)0) || VAR_4 < 0))
        return 0;

    if (VAR_5 != ((void*)0)) {
        VAR_10 = 1;
        VAR_2->md = VAR_5;
    } else if (VAR_2->md) {
        VAR_5 = VAR_2->md;
    } else {
        return 0;
    }





    if ((FUNC_5(VAR_5) & VAR_0) != 0)
        return 0;

    if (VAR_3 != ((void*)0)) {
        VAR_10 = 1;
        VAR_9 = FUNC_4(VAR_5);
        if (!FUNC_9(VAR_9 <= (int)sizeof(VAR_2->key)))
            return 0;
        if (VAR_9 < VAR_4) {
            if (!FUNC_1(VAR_2->md_ctx, VAR_5, VAR_6)
                    || !FUNC_2(VAR_2->md_ctx, VAR_3, VAR_4)
                    || !FUNC_0(VAR_2->md_ctx, VAR_2->key,
                                           &VAR_2->key_length))
                return 0;
        } else {
            if (VAR_4 < 0 || VAR_4 > (int)sizeof(VAR_2->key))
                return 0;
            FUNC_7(VAR_2->key, VAR_3, VAR_4);
            VAR_2->key_length = VAR_4;
        }
        if (VAR_2->key_length != VAR_1)
            FUNC_8(&VAR_2->key[VAR_2->key_length], 0,
                   VAR_1 - VAR_2->key_length);
    }

    if (VAR_10) {
        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
            VAR_11[VAR_8] = 0x36 ^ VAR_2->key[VAR_8];
        if (!FUNC_1(VAR_2->i_ctx, VAR_5, VAR_6)
                || !FUNC_2(VAR_2->i_ctx, VAR_11, FUNC_4(VAR_5)))
            goto err;

        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
            VAR_11[VAR_8] = 0x5c ^ VAR_2->key[VAR_8];
        if (!FUNC_1(VAR_2->o_ctx, VAR_5, VAR_6)
                || !FUNC_2(VAR_2->o_ctx, VAR_11, FUNC_4(VAR_5)))
            goto err;
    }
    if (!FUNC_3(VAR_2->md_ctx, VAR_2->i_ctx))
        goto err;
    VAR_7 = 1;
 err:
    if (VAR_10)
        FUNC_6(VAR_11, sizeof(VAR_11));
    return VAR_7;
}
