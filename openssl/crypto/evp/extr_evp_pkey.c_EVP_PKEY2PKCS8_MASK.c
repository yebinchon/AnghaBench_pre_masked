
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int (* priv_encode ) (int *,TYPE_2__ const*) ;} ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,TYPE_2__ const*) ;

PKCS8_PRIV_KEY_INFO *FUNC_4(const EVP_PKEY *VAR_5)
{
    PKCS8_PRIV_KEY_INFO *VAR_6 = FUNC_2();
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return ((void*)0);
    }

    if (VAR_5->ameth) {
        if (VAR_5->ameth->priv_encode) {
            if (!VAR_5->ameth->priv_encode(VAR_6, VAR_5)) {
                FUNC_0(VAR_1, VAR_3);
                goto error;
            }
        } else {
            FUNC_0(VAR_1, VAR_2);
            goto error;
        }
    } else {
        FUNC_0(VAR_1, VAR_4);
        goto error;
    }
    return VAR_6;
 error:
    FUNC_1(VAR_6);
    return ((void*)0);
}
