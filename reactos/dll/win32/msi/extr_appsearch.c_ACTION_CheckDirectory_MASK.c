
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIPACKAGE ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static UINT FUNC_4(MSIPACKAGE *VAR_3, LPCWSTR VAR_4,
 LPWSTR *VAR_5)
{
    DWORD VAR_6 = FUNC_0(VAR_4);

    if (VAR_6 != VAR_2 && (VAR_6 & VAR_1))
    {
        FUNC_1("directory exists, returning %s\n", FUNC_2(VAR_4));
        *VAR_5 = FUNC_3(VAR_4);
    }

    return VAR_0;
}
