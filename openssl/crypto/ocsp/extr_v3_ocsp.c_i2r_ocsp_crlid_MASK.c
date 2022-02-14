
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_2__ {scalar_t__ crlTime; scalar_t__ crlNum; scalar_t__ crlUrl; } ;
typedef TYPE_1__ OCSP_CRLID ;
typedef int BIO ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int,char*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_5(const X509V3_EXT_METHOD *VAR_0, void *VAR_1, BIO *VAR_2,
                          int VAR_3)
{
    OCSP_CRLID *VAR_4 = VAR_1;
    if (VAR_4->crlUrl) {
        if (FUNC_2(VAR_2, "%*scrlUrl: ", VAR_3, "") <= 0)
            goto err;
        if (!FUNC_1(VAR_2, (ASN1_STRING *)VAR_4->crlUrl))
            goto err;
        if (FUNC_3(VAR_2, "\n", 1) <= 0)
            goto err;
    }
    if (VAR_4->crlNum) {
        if (FUNC_2(VAR_2, "%*scrlNum: ", VAR_3, "") <= 0)
            goto err;
        if (FUNC_4(VAR_2, VAR_4->crlNum) <= 0)
            goto err;
        if (FUNC_3(VAR_2, "\n", 1) <= 0)
            goto err;
    }
    if (VAR_4->crlTime) {
        if (FUNC_2(VAR_2, "%*scrlTime: ", VAR_3, "") <= 0)
            goto err;
        if (!FUNC_0(VAR_2, VAR_4->crlTime))
            goto err;
        if (FUNC_3(VAR_2, "\n", 1) <= 0)
            goto err;
    }
    return 1;
 err:
    return 0;
}
