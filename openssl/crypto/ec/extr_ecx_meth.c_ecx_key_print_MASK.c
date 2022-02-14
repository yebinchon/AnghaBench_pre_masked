
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ecx_key_op_t ;
struct TYPE_10__ {int * pubkey; int * privkey; } ;
struct TYPE_7__ {TYPE_4__* ecx; } ;
struct TYPE_9__ {TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_8__ {int pkey_id; } ;
typedef TYPE_3__ EVP_PKEY ;
typedef TYPE_4__ ECX_KEY ;
typedef int BIO ;
typedef int ASN1_PCTX ;


 scalar_t__ FUNC_0 (int *,int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,char*,int,char*,...) ;
 int FUNC_2 (TYPE_3__ const*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_1, const EVP_PKEY *VAR_2, int VAR_3,
                         ASN1_PCTX *VAR_4, ecx_key_op_t VAR_5)
{
    const ECX_KEY *VAR_6 = VAR_2->pkey.ecx;
    const char *VAR_7 = FUNC_3(VAR_2->ameth->pkey_id);

    if (VAR_5 == VAR_0) {
        if (VAR_6 == ((void*)0) || VAR_6->privkey == ((void*)0)) {
            if (FUNC_1(VAR_1, "%*s<INVALID PRIVATE KEY>\n", VAR_3, "") <= 0)
                return 0;
            return 1;
        }
        if (FUNC_1(VAR_1, "%*s%s Private-Key:\n", VAR_3, "", VAR_7) <= 0)
            return 0;
        if (FUNC_1(VAR_1, "%*spriv:\n", VAR_3, "") <= 0)
            return 0;
        if (FUNC_0(VAR_1, VAR_6->privkey, FUNC_2(VAR_2),
                           VAR_3 + 4) == 0)
            return 0;
    } else {
        if (VAR_6 == ((void*)0)) {
            if (FUNC_1(VAR_1, "%*s<INVALID PUBLIC KEY>\n", VAR_3, "") <= 0)
                return 0;
            return 1;
        }
        if (FUNC_1(VAR_1, "%*s%s Public-Key:\n", VAR_3, "", VAR_7) <= 0)
            return 0;
    }
    if (FUNC_1(VAR_1, "%*spub:\n", VAR_3, "") <= 0)
        return 0;

    if (FUNC_0(VAR_1, VAR_6->pubkey, FUNC_2(VAR_2),
                       VAR_3 + 4) == 0)
        return 0;
    return 1;
}
