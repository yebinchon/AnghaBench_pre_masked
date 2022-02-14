
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dwErrorStatus; } ;
struct TYPE_8__ {int pCertInfo; } ;
struct TYPE_7__ {int cElement; TYPE_1__** rgpElement; int TrustStatus; } ;
struct TYPE_6__ {TYPE_4__ TrustStatus; TYPE_3__* pCertContext; } ;
typedef TYPE_2__* PCERT_SIMPLE_CHAIN ;
typedef int DWORD ;
typedef int CERT_POLICIES_INFO ;


 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int * FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(PCERT_SIMPLE_CHAIN VAR_0)
{
    int VAR_1, VAR_2;

    for (VAR_1 = VAR_0->cElement - 1; VAR_1 > 0; VAR_1--)
    {
        CERT_POLICIES_INFO *VAR_3;

        if ((VAR_3 = FUNC_2(VAR_0->rgpElement[VAR_1]->pCertContext)))
        {
            for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--)
            {
                DWORD VAR_4 = 0;

                FUNC_0(VAR_3,
                 VAR_0->rgpElement[VAR_2]->pCertContext->pCertInfo, &VAR_4);
                if (VAR_4)
                {
                    VAR_0->rgpElement[VAR_1]->TrustStatus.dwErrorStatus |=
                     VAR_4;
                    FUNC_1(&VAR_0->TrustStatus,
                     &VAR_0->rgpElement[VAR_1]->TrustStatus);
                }
            }
            FUNC_3(VAR_3);
        }
    }
}
