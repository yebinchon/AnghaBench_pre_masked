
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_5__ {int location; int method; } ;
struct TYPE_4__ {int locator; int issuer; } ;
typedef TYPE_1__ OCSP_SERVICELOC ;
typedef int BIO ;
typedef TYPE_2__ ACCESS_DESCRIPTION ;


 scalar_t__ FUNC_0 (int *,char*,int,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(const X509V3_EXT_METHOD *VAR_1, void *VAR_2,
                               BIO *VAR_3, int VAR_4)
{
    int VAR_5;
    OCSP_SERVICELOC *VAR_6 = VAR_2;
    ACCESS_DESCRIPTION *VAR_7;

    if (FUNC_0(VAR_3, "%*sIssuer: ", VAR_4, "") <= 0)
        goto err;
    if (FUNC_3(VAR_3, VAR_6->issuer, 0, VAR_0) <= 0)
        goto err;
    for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_6->locator); VAR_5++) {
        VAR_7 = FUNC_6(VAR_6->locator, VAR_5);
        if (FUNC_0(VAR_3, "\n%*s", (2 * VAR_4), "") <= 0)
            goto err;
        if (FUNC_4(VAR_3, VAR_7->method) <= 0)
            goto err;
        if (FUNC_1(VAR_3, " - ") <= 0)
            goto err;
        if (FUNC_2(VAR_3, VAR_7->location) <= 0)
            goto err;
    }
    return 1;
 err:
    return 0;
}
