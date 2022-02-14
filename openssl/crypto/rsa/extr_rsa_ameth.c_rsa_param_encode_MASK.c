
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* rsa; } ;
struct TYPE_9__ {TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_8__ {int * pss; } ;
struct TYPE_7__ {scalar_t__ pkey_id; } ;
typedef TYPE_3__ RSA ;
typedef TYPE_4__ EVP_PKEY ;
typedef int ASN1_STRING ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int **) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(const EVP_PKEY *VAR_5,
                            ASN1_STRING **VAR_6, int *VAR_7)
{
    const RSA *VAR_8 = VAR_5->pkey.rsa;

    *VAR_6 = ((void*)0);

    if (VAR_5->ameth->pkey_id != VAR_0) {
        *VAR_7 = VAR_2;
        return 1;
    }

    if (VAR_8->pss == ((void*)0)) {
        *VAR_7 = VAR_4;
        return 1;
    }

    if (FUNC_1(VAR_8->pss, FUNC_0(VAR_1), VAR_6) == ((void*)0))
        return 0;

    *VAR_7 = VAR_3;
    return 1;
}
