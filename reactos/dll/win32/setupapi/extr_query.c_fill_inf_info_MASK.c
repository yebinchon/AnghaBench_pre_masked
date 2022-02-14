
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int InfCount; int * VersionData; int InfStyle; } ;
typedef TYPE_1__* PSP_INF_INFORMATION ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int HINF ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(HINF VAR_6, PSP_INF_INFORMATION VAR_7, DWORD VAR_8, DWORD *VAR_9)
{
    LPCWSTR VAR_10 = FUNC_1(VAR_6);
    DWORD VAR_11 = FUNC_0(VAR_3, VAR_5)
                        + (FUNC_4(VAR_10) + 1) * sizeof(WCHAR);

    if (VAR_9) *VAR_9 = VAR_11;


    if (VAR_7)
    {
        if (VAR_8 < VAR_11)
        {
            FUNC_2(VAR_0);
            return VAR_1;
        }
        VAR_7->InfStyle = VAR_2;
        VAR_7->InfCount = 1;

        FUNC_3((LPWSTR)&VAR_7->VersionData[0], VAR_10);
    }
    return VAR_4;
}
