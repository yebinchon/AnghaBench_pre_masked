
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t cPolicyInfo; TYPE_2__* rgPolicyInfo; } ;
struct TYPE_6__ {size_t cPolicyQualifier; TYPE_1__* rgPolicyQualifier; } ;
struct TYPE_5__ {int Qualifier; int pszPolicyQualifierId; } ;
typedef int LPCSTR ;
typedef size_t DWORD ;
typedef int CRYPT_OBJID_BLOB ;
typedef TYPE_3__ CERT_POLICIES_INFO ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static CRYPT_OBJID_BLOB *FUNC_1(CERT_POLICIES_INFO *VAR_0,
 LPCSTR VAR_1)
{
    CRYPT_OBJID_BLOB *VAR_2 = ((void*)0);
    DWORD VAR_3;

    for (VAR_3 = 0; !VAR_2 && VAR_3 < VAR_0->cPolicyInfo; VAR_3++)
    {
        DWORD VAR_4;

        for (VAR_4 = 0; !VAR_2 && VAR_4 < VAR_0->rgPolicyInfo[VAR_3].cPolicyQualifier; VAR_4++)
            if (!FUNC_0(VAR_0->rgPolicyInfo[VAR_3].rgPolicyQualifier[VAR_4].
             pszPolicyQualifierId, VAR_1))
                VAR_2 = &VAR_0->rgPolicyInfo[VAR_3].rgPolicyQualifier[VAR_4].
                 Qualifier;
    }
    return VAR_2;
}
