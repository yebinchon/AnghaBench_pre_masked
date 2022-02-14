
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCTSTR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(HKEY VAR_2, LPCTSTR VAR_3, BOOL *VAR_4)
{
    DWORD VAR_5;
    if (!FUNC_0(VAR_2, VAR_3, &VAR_5))
        return VAR_0;
    *VAR_4 = VAR_5 ? VAR_1 : VAR_0;
    return VAR_1;
}
