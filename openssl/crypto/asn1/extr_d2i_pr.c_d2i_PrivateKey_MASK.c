
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* ameth; int * engine; } ;
struct TYPE_10__ {scalar_t__ priv_decode; int (* old_priv_decode ) (TYPE_2__*,unsigned char const**,long) ;} ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,unsigned char const**,long) ;
 int FUNC_8 (TYPE_2__*,unsigned char const**,long) ;

EVP_PKEY *FUNC_9(int VAR_4, EVP_PKEY **VAR_5, const unsigned char **VAR_6,
                         long VAR_7)
{
    EVP_PKEY *VAR_8;
    const unsigned char *VAR_9 = *VAR_6;

    if ((VAR_5 == ((void*)0)) || (*VAR_5 == ((void*)0))) {
        if ((VAR_8 = FUNC_4()) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_3);
            return ((void*)0);
        }
    } else {
        VAR_8 = *VAR_5;

        FUNC_1(VAR_8->engine);
        VAR_8->engine = ((void*)0);

    }

    if (!FUNC_5(VAR_8, VAR_4)) {
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }

    if (!VAR_8->ameth->old_priv_decode ||
        !VAR_8->ameth->old_priv_decode(VAR_8, &VAR_9, VAR_7)) {
        if (VAR_8->ameth->priv_decode) {
            EVP_PKEY *VAR_10;
            PKCS8_PRIV_KEY_INFO *VAR_11 = ((void*)0);
            VAR_11 = FUNC_7(((void*)0), &VAR_9, VAR_7);
            if (VAR_11 == ((void*)0))
                goto err;
            VAR_10 = FUNC_2(VAR_11);
            FUNC_6(VAR_11);
            if (VAR_10 == ((void*)0))
                goto err;
            FUNC_3(VAR_8);
            VAR_8 = VAR_10;
        } else {
            FUNC_0(VAR_0, VAR_2);
            goto err;
        }
    }
    *VAR_6 = VAR_9;
    if (VAR_5 != ((void*)0))
        (*VAR_5) = VAR_8;
    return VAR_8;
 err:
    if (VAR_5 == ((void*)0) || *VAR_5 != VAR_8)
        FUNC_3(VAR_8);
    return ((void*)0);
}
