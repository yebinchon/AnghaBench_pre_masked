
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ flags; int length; int * data; } ;
struct TYPE_12__ {int * privkey; } ;
struct TYPE_9__ {TYPE_4__* ecx; } ;
struct TYPE_11__ {TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_10__ {int pkey_id; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_3__ EVP_PKEY ;
typedef TYPE_4__ ECX_KEY ;
typedef TYPE_5__ ASN1_OCTET_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int *,int ,int ,int ,int *,unsigned char*,int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_5__*,unsigned char**) ;

__attribute__((used)) static int FUNC_6(PKCS8_PRIV_KEY_INFO *VAR_4, const EVP_PKEY *VAR_5)
{
    const ECX_KEY *VAR_6 = VAR_5->pkey.ecx;
    ASN1_OCTET_STRING VAR_7;
    unsigned char *VAR_8 = ((void*)0);
    int VAR_9;

    if (VAR_6 == ((void*)0) || VAR_6->privkey == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_7.data = VAR_6->privkey;
    VAR_7.length = FUNC_1(VAR_5);
    VAR_7.flags = 0;

    VAR_9 = FUNC_5(&VAR_7, &VAR_8);
    if (VAR_9 < 0) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_4(VAR_4, FUNC_2(VAR_5->ameth->pkey_id), 0,
                         VAR_3, ((void*)0), VAR_8, VAR_9)) {
        FUNC_3(VAR_8, VAR_9);
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    return 1;
}
