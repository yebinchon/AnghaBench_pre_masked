
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int DWORD ;
typedef int CERT_NAME_BLOB ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int const*,int ,int *,int) ;

__attribute__((used)) static LPWSTR FUNC_2(const CERT_NAME_BLOB *VAR_2)
{
    DWORD VAR_3 = FUNC_1(VAR_1, 0, VAR_2,
     VAR_0, ((void*)0), 0);
    LPWSTR VAR_4 = ((void*)0);

    if (VAR_3)
    {
        VAR_4 = FUNC_0(VAR_3 * sizeof(WCHAR));
        if (VAR_4)
            FUNC_1(VAR_1, 0, VAR_2,
             VAR_0, VAR_4, VAR_3);
    }
    return VAR_4;
}
