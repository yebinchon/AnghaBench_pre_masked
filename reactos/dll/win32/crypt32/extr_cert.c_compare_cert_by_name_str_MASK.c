
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int dwCertEncodingType; TYPE_1__* pCertInfo; } ;
struct TYPE_4__ {int Issuer; int Subject; } ;
typedef int * PCERT_NAME_BLOB ;
typedef TYPE_2__* PCCERT_CONTEXT ;
typedef scalar_t__* LPWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,scalar_t__*,int) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__*,void const*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_5(PCCERT_CONTEXT VAR_4,
 DWORD VAR_5, DWORD VAR_6, const void *VAR_7)
{
    PCERT_NAME_BLOB VAR_8;
    DWORD VAR_9;
    BOOL VAR_10 = VAR_2;

    if (VAR_5 & VAR_0)
        VAR_8 = &VAR_4->pCertInfo->Subject;
    else
        VAR_8 = &VAR_4->pCertInfo->Issuer;
    VAR_9 = FUNC_0(VAR_4->dwCertEncodingType, VAR_8,
     VAR_1, ((void*)0), 0);
    if (VAR_9)
    {
        LPWSTR VAR_11 = FUNC_1(VAR_9 * sizeof(WCHAR));

        if (VAR_11)
        {
            LPWSTR VAR_12;

            FUNC_0(VAR_4->dwCertEncodingType, VAR_8,
             VAR_1, VAR_11, VAR_9);
            for (VAR_12 = VAR_11; *VAR_12; VAR_12++)
                *VAR_12 = FUNC_4(*VAR_12);
            if (FUNC_3(VAR_11, VAR_7))
                VAR_10 = VAR_3;
            FUNC_2(VAR_11);
        }
    }
    return VAR_10;
}
