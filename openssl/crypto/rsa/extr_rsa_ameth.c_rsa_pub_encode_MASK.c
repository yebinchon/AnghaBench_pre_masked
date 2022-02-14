
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_PUBKEY ;
struct TYPE_6__ {int rsa; } ;
struct TYPE_8__ {TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_7__ {int pkey_id; } ;
typedef TYPE_3__ EVP_PKEY ;
typedef int ASN1_STRING ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int *,int ,int,int *,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char**) ;
 int FUNC_4 (TYPE_3__ const*,int **,int*) ;

__attribute__((used)) static int FUNC_5(X509_PUBKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    unsigned char *VAR_2 = ((void*)0);
    int VAR_3;
    ASN1_STRING *VAR_4;
    int VAR_5;

    if (!FUNC_4(VAR_1, &VAR_4, &VAR_5))
        return 0;
    VAR_3 = FUNC_3(VAR_1->pkey.rsa, &VAR_2);
    if (VAR_3 <= 0)
        return 0;
    if (FUNC_2(VAR_0, FUNC_0(VAR_1->ameth->pkey_id),
                               VAR_5, VAR_4, VAR_2, VAR_3))
        return 1;

    FUNC_1(VAR_2);
    return 0;
}
