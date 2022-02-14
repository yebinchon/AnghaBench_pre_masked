
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t cPolicyInfo; TYPE_1__* rgPolicyInfo; } ;
struct TYPE_4__ {int pszPolicyIdentifier; } ;
typedef size_t DWORD ;
typedef TYPE_2__ CERT_POLICIES_INFO ;
typedef int CERT_INFO ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(const CERT_POLICIES_INFO *VAR_2, CERT_INFO *VAR_3,
 DWORD *VAR_4)
{
    DWORD VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2->cPolicyInfo; VAR_5++)
    {







        if (FUNC_1(VAR_2->rgPolicyInfo[VAR_5].pszPolicyIdentifier,
         VAR_1))
        {
            FUNC_0("unsupported policy %s\n",
             VAR_2->rgPolicyInfo[VAR_5].pszPolicyIdentifier);
            *VAR_4 |= VAR_0;
        }
    }
}
