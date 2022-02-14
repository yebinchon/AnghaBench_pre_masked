
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int mem; } ;
typedef TYPE_1__ OCSP_REQ_CTX ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int FUNC_0 (int *,int *,int const*) ;
 scalar_t__ FUNC_1 (int const*,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int) ;
 int VAR_0 ;

int FUNC_3(OCSP_REQ_CTX *VAR_1, const ASN1_ITEM *VAR_2, ASN1_VALUE *VAR_3)
{
    static const char VAR_4[] =
        "Content-Type: application/ocsp-request\r\n"
        "Content-Length: %d\r\n\r\n";
    int VAR_5 = FUNC_0(VAR_3, ((void*)0), VAR_2);
    if (FUNC_2(VAR_1->mem, VAR_4, VAR_5) <= 0)
        return 0;
    if (FUNC_1(VAR_2, VAR_1->mem, VAR_3) <= 0)
        return 0;
    VAR_1->state = VAR_0;
    return 1;
}
