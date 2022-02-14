
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int cbData; int * pbData; } ;
typedef int PCCERT_CONTEXT ;
typedef scalar_t__* LPWSTR ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef int BYTE ;


 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void FUNC_2(PCCERT_CONTEXT VAR_0, DWORD VAR_1,
 LPWSTR VAR_2)
{
    if (VAR_2 && *VAR_2)
    {
        CRYPT_DATA_BLOB VAR_3;

        VAR_3.pbData = (BYTE *)VAR_2;
        VAR_3.cbData = (FUNC_1(VAR_2) + 1) * sizeof(WCHAR);
        FUNC_0(VAR_0, VAR_1, 0, &VAR_3);
    }
    else
        FUNC_0(VAR_0, VAR_1, 0, ((void*)0));
}
