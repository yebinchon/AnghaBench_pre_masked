
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dwErrorStatus; } ;
struct TYPE_9__ {TYPE_2__ TrustStatus; TYPE_1__* pCertContext; } ;
struct TYPE_8__ {int cElement; TYPE_4__** rgpElement; } ;
struct TYPE_6__ {int pCertInfo; } ;
typedef TYPE_3__* PCERT_SIMPLE_CHAIN ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(PCERT_SIMPLE_CHAIN VAR_3)
{
    DWORD VAR_4, VAR_5, VAR_6 = 0;


    for (VAR_4 = 0; !VAR_6 && VAR_4 < VAR_3->cElement; VAR_4++)
        for (VAR_5 = VAR_4 + 1; !VAR_6 && VAR_5 < VAR_3->cElement; VAR_5++)
            if (FUNC_1(VAR_2,
             VAR_3->rgpElement[VAR_4]->pCertContext->pCertInfo,
             VAR_3->rgpElement[VAR_5]->pCertContext->pCertInfo))
                VAR_6 = VAR_5;
    if (VAR_6)
    {
        VAR_3->rgpElement[VAR_6]->TrustStatus.dwErrorStatus
         |= VAR_1 | VAR_0;

        for (VAR_4 = VAR_6 + 1; VAR_4 < VAR_3->cElement; VAR_4++)
            FUNC_0(VAR_3->rgpElement[VAR_4]);

        VAR_3->cElement = VAR_6 + 1;
    }
}
