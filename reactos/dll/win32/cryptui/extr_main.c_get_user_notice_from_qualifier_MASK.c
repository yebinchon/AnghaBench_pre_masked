
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {int pszDisplayText; } ;
struct TYPE_6__ {int cbData; int pbData; } ;
typedef int * LPWSTR ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_OBJID_BLOB ;
typedef TYPE_2__ CERT_POLICY_QUALIFIER_USER_NOTICE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *,TYPE_2__**,int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static WCHAR *FUNC_6(const CRYPT_OBJID_BLOB *VAR_3)
{
    LPWSTR VAR_4 = ((void*)0);
    CERT_POLICY_QUALIFIER_USER_NOTICE *VAR_5;
    DWORD VAR_6;

    if (FUNC_0(VAR_1,
     VAR_2,
     VAR_3->pbData, VAR_3->cbData, VAR_0, ((void*)0),
     &VAR_5, &VAR_6))
    {
        VAR_4 = FUNC_2(FUNC_1(), 0,
         (FUNC_5(VAR_5->pszDisplayText) + 1) * sizeof(WCHAR));
        if (VAR_4)
            FUNC_4(VAR_4, VAR_5->pszDisplayText);
        FUNC_3(VAR_5);
    }
    return VAR_4;
}
