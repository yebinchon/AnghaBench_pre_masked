
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509_PUBKEY ;
struct TYPE_10__ {int pubkey; } ;
struct TYPE_7__ {TYPE_4__* ecx; } ;
struct TYPE_9__ {TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_8__ {int pkey_id; } ;
typedef TYPE_3__ EVP_PKEY ;
typedef TYPE_4__ ECX_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int ,int *,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_6(X509_PUBKEY *VAR_4, const EVP_PKEY *VAR_5)
{
    const ECX_KEY *VAR_6 = VAR_5->pkey.ecx;
    unsigned char *VAR_7;

    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_7 = FUNC_4(VAR_6->pubkey, FUNC_1(VAR_5));
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_5(VAR_4, FUNC_2(VAR_5->ameth->pkey_id),
                                VAR_3, ((void*)0), VAR_7, FUNC_1(VAR_5))) {
        FUNC_3(VAR_7);
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    return 1;
}
