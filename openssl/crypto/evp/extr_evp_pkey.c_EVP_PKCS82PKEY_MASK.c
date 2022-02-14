
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* ameth; } ;
struct TYPE_8__ {int (* priv_decode ) (TYPE_2__*,int const*) ;} ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const**,int *,int *,int *,int const*) ;
 int FUNC_7 (char*,int,int const*) ;
 int FUNC_8 (TYPE_2__*,int const*) ;

EVP_PKEY *FUNC_9(const PKCS8_PRIV_KEY_INFO *VAR_5)
{
    EVP_PKEY *VAR_6 = ((void*)0);
    const ASN1_OBJECT *VAR_7;
    char VAR_8[80];

    if (!FUNC_6(&VAR_7, ((void*)0), ((void*)0), ((void*)0), VAR_5))
        return ((void*)0);

    if ((VAR_6 = FUNC_2()) == ((void*)0)) {
        FUNC_4(VAR_1, VAR_0);
        return ((void*)0);
    }

    if (!FUNC_3(VAR_6, FUNC_5(VAR_7))) {
        FUNC_4(VAR_1, VAR_4);
        FUNC_7(VAR_8, 80, VAR_7);
        FUNC_0(2, "TYPE=", VAR_8);
        goto error;
    }

    if (VAR_6->ameth->priv_decode) {
        if (!VAR_6->ameth->priv_decode(VAR_6, VAR_5)) {
            FUNC_4(VAR_1, VAR_3);
            goto error;
        }
    } else {
        FUNC_4(VAR_1, VAR_2);
        goto error;
    }

    return VAR_6;

 error:
    FUNC_1(VAR_6);
    return ((void*)0);
}
