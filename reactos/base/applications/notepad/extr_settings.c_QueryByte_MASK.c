
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwResult ;
typedef int LPCTSTR ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(HKEY VAR_3, LPCTSTR VAR_4, BYTE *VAR_5)
{
    DWORD VAR_6;
    if (!FUNC_0(VAR_3, VAR_4, VAR_1, &VAR_6, sizeof(VAR_6)))
        return VAR_0;
    if (VAR_6 >= 0x100)
        return VAR_0;
    *VAR_5 = (BYTE) VAR_6;
    return VAR_2;
}
