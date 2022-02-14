
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_13__ {TYPE_2__* ameth; } ;
struct TYPE_12__ {int digest_alg; TYPE_4__* pkey; TYPE_1__* issuer_and_serial; int version; } ;
struct TYPE_11__ {int (* pkey_ctrl ) (TYPE_4__*,int ,int ,TYPE_3__*) ;} ;
struct TYPE_10__ {int serial; int issuer; } ;
typedef TYPE_3__ PKCS7_SIGNER_INFO ;
typedef TYPE_4__ EVP_PKEY ;
typedef int EVP_MD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_4__*,int ,int ,TYPE_3__*) ;

int FUNC_12(PKCS7_SIGNER_INFO *VAR_5, X509 *VAR_6, EVP_PKEY *VAR_7,
                          const EVP_MD *VAR_8)
{
    int VAR_9;


    if (!FUNC_2(VAR_5->version, 1))
        goto err;
    if (!FUNC_8(&VAR_5->issuer_and_serial->issuer,
                       FUNC_9(VAR_6)))
        goto err;





    FUNC_1(VAR_5->issuer_and_serial->serial);
    if (!(VAR_5->issuer_and_serial->serial =
          FUNC_0(FUNC_10(VAR_6))))
        goto err;


    FUNC_4(VAR_7);
    VAR_5->pkey = VAR_7;



    FUNC_7(VAR_5->digest_alg, FUNC_5(FUNC_3(VAR_8)),
                    VAR_4, ((void*)0));

    if (VAR_7->ameth && VAR_7->ameth->pkey_ctrl) {
        VAR_9 = VAR_7->ameth->pkey_ctrl(VAR_7, VAR_0, 0, VAR_5);
        if (VAR_9 > 0)
            return 1;
        if (VAR_9 != -2) {
            FUNC_6(VAR_1,
                     VAR_2);
            return 0;
        }
    }
    FUNC_6(VAR_1,
             VAR_3);
 err:
    return 0;
}
