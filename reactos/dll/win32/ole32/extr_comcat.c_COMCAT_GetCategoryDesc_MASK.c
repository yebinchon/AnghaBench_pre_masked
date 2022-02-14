
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONG ;
typedef scalar_t__* PWCHAR ;
typedef int LPBYTE ;
typedef int LCID ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,char*,int ,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static HRESULT FUNC_3(HKEY VAR_5, LCID VAR_6, PWCHAR VAR_7,
          ULONG VAR_8)
{
    static const WCHAR VAR_9[] = { '%', 'l', 'X', 0 };
    WCHAR VAR_10[5];
    HRESULT VAR_11;
    DWORD VAR_12, VAR_13 = (VAR_8 - 1) * sizeof(WCHAR);

    if (VAR_7 == ((void*)0)) return VAR_2;


    FUNC_2(VAR_10, VAR_9, VAR_6);
    VAR_11 = FUNC_1(VAR_5, VAR_10, 0, &VAR_12, (LPBYTE)VAR_7, &VAR_13);
    if (VAR_11 != VAR_1 || VAR_12 != VAR_3) {
 FUNC_0("Simplified lcid comparison\n");
 return VAR_0;
    }
    VAR_7[VAR_13 / sizeof(WCHAR)] = 0;

    return VAR_4;
}
