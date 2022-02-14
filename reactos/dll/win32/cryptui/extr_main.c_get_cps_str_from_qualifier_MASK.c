
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {int Value; int dwValueType; } ;
struct TYPE_6__ {int cbData; int pbData; } ;
typedef int * LPWSTR ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_OBJID_BLOB ;
typedef TYPE_2__ CERT_NAME_VALUE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,TYPE_2__**,int*) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static WCHAR *FUNC_5(const CRYPT_OBJID_BLOB *VAR_3)
{
    LPWSTR VAR_4 = ((void*)0);
    CERT_NAME_VALUE *VAR_5;
    DWORD VAR_6;

    if (FUNC_1(VAR_1, VAR_2,
     VAR_3->pbData, VAR_3->cbData, VAR_0, ((void*)0),
     &VAR_5, &VAR_6))
    {
        VAR_6 = FUNC_0(VAR_5->dwValueType,
         &VAR_5->Value, ((void*)0), 0);
        VAR_4 = FUNC_3(FUNC_2(), 0, VAR_6 * sizeof(WCHAR));
        if (VAR_4)
            FUNC_0(VAR_5->dwValueType,
             &VAR_5->Value, VAR_4, VAR_6);
        FUNC_4(VAR_5);
    }
    return VAR_4;
}
