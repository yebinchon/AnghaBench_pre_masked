
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ SIZE_T ;
typedef int PVOID ;
typedef int PCHAR ;
typedef int LPWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,char*,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
SIZE_T
FUNC_3(
    BOOL VAR_2,
    PCHAR VAR_3,
    LPWSTR VAR_4,
    PVOID VAR_5,
    DWORD VAR_6,
    BOOL VAR_7)
{
    SIZE_T VAR_8 = 0;
    BOOL VAR_9;

    if (VAR_2)
    {
        VAR_8 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7);
    }
    if (VAR_8 == 0)
    {
        VAR_9 = FUNC_0(VAR_0, L"Hardware\\Description\\System\\BIOS", VAR_4, VAR_1, VAR_5, VAR_6 * sizeof(WCHAR));
        if (VAR_9)
        {
            VAR_8 = FUNC_2(VAR_5);
        }
    }
    return VAR_8;
}
