
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ameth; } ;
struct TYPE_6__ {int (* old_priv_encode ) (TYPE_2__ const*,unsigned char**) ;scalar_t__ priv_encode; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char**) ;
 int FUNC_4 (TYPE_2__ const*,unsigned char**) ;

int FUNC_5(const EVP_PKEY *VAR_2, unsigned char **VAR_3)
{
    if (VAR_2->ameth && VAR_2->ameth->old_priv_encode) {
        return VAR_2->ameth->old_priv_encode(VAR_2, VAR_3);
    }
    if (VAR_2->ameth && VAR_2->ameth->priv_encode) {
        PKCS8_PRIV_KEY_INFO *VAR_4 = FUNC_1(VAR_2);
        int VAR_5 = 0;
        if (VAR_4 != ((void*)0)) {
            VAR_5 = FUNC_3(VAR_4, VAR_3);
            FUNC_2(VAR_4);
        }
        return VAR_5;
    }
    FUNC_0(VAR_0, VAR_1);
    return -1;
}
