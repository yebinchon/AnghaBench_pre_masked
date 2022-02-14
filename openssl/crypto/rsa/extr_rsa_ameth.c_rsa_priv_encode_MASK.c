
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rsa; } ;
struct TYPE_8__ {TYPE_1__* ameth; TYPE_2__ pkey; } ;
struct TYPE_6__ {int pkey_id; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_3__ EVP_PKEY ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int,int *,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,unsigned char**) ;
 int FUNC_5 (TYPE_3__ const*,int **,int*) ;

__attribute__((used)) static int FUNC_6(PKCS8_PRIV_KEY_INFO *VAR_2, const EVP_PKEY *VAR_3)
{
    unsigned char *VAR_4 = ((void*)0);
    int VAR_5;
    ASN1_STRING *VAR_6;
    int VAR_7;

    if (!FUNC_5(VAR_3, &VAR_6, &VAR_7))
        return 0;
    VAR_5 = FUNC_4(VAR_3->pkey.rsa, &VAR_4);

    if (VAR_5 <= 0) {
        FUNC_3(VAR_1, VAR_0);
        FUNC_0(VAR_6);
        return 0;
    }

    if (!FUNC_2(VAR_2, FUNC_1(VAR_3->ameth->pkey_id), 0,
                         VAR_7, VAR_6, VAR_4, VAR_5)) {
        FUNC_3(VAR_1, VAR_0);
        FUNC_0(VAR_6);
        return 0;
    }

    return 1;
}
