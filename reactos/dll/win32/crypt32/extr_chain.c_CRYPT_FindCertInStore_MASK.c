
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hash ;
struct TYPE_9__ {int member_0; int * member_1; } ;
struct TYPE_8__ {int dwCertEncodingType; } ;
typedef TYPE_1__* PCCERT_CONTEXT ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_2__ CRYPT_HASH_BLOB ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ,int ,int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int *,int*) ;

__attribute__((used)) static PCCERT_CONTEXT FUNC_2(HCERTSTORE VAR_2,
 PCCERT_CONTEXT VAR_3)
{
    PCCERT_CONTEXT VAR_4 = ((void*)0);
    BYTE VAR_5[20];
    DWORD VAR_6 = sizeof(VAR_5);

    if (FUNC_1(VAR_3, VAR_1, VAR_5, &VAR_6))
    {
        CRYPT_HASH_BLOB VAR_7 = { sizeof(VAR_5), VAR_5 };

        VAR_4 = FUNC_0(VAR_2, VAR_3->dwCertEncodingType,
         0, VAR_0, &VAR_7, ((void*)0));
    }
    return VAR_4;
}
