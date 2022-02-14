
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SID_NAME_USE ;
typedef int PSID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int ,int *,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static BOOL
FUNC_2(const WCHAR *VAR_3, PSID VAR_4, DWORD VAR_5)
{
    SID_NAME_USE VAR_6;
    WCHAR VAR_7[VAR_1];
    DWORD VAR_8 = FUNC_1(VAR_7);

    if (!FUNC_0(((void*)0), VAR_3, VAR_4, &VAR_5, VAR_7, &VAR_8, &VAR_6))
    {
        return VAR_0;
    }
    return VAR_2;
}
