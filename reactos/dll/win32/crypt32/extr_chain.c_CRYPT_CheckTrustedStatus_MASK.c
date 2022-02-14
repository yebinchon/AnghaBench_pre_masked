
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwErrorStatus; } ;
struct TYPE_5__ {TYPE_1__ TrustStatus; int pCertContext; } ;
typedef TYPE_2__* PCERT_CHAIN_ELEMENT ;
typedef int PCCERT_CONTEXT ;
typedef int HCERTSTORE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(HCERTSTORE VAR_1,
 PCERT_CHAIN_ELEMENT VAR_2)
{
    PCCERT_CONTEXT VAR_3 = FUNC_0(VAR_1,
     VAR_2->pCertContext);

    if (!VAR_3)
        VAR_2->TrustStatus.dwErrorStatus |=
         VAR_0;
    else
        FUNC_1(VAR_3);
}
