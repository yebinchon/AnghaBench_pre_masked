
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szBuffer ;
typedef scalar_t__ WCHAR ;
struct TYPE_3__ {scalar_t__ iValue; scalar_t__ szValue; } ;
typedef TYPE_1__* PWINED3D_SETTINGS ;
typedef int PWCHAR ;
typedef int LPBYTE ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_1 (int ,size_t,int ,size_t,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;

void FUNC_3(HWND VAR_5, HKEY VAR_6, PWCHAR VAR_7, PWINED3D_SETTINGS VAR_8, INT VAR_9, INT VAR_10)
{
    WCHAR VAR_11[VAR_2];
    DWORD VAR_12 = sizeof(VAR_11);
    DWORD VAR_13 = 0;
    INT VAR_14;
    INT VAR_15 = 0;

    FUNC_0(VAR_6, VAR_7, ((void*)0), &VAR_13, (LPBYTE)VAR_11, &VAR_12);

    for(VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
    {
        FUNC_1(VAR_5, VAR_9, VAR_0, 0, (LPARAM)VAR_8[VAR_14].szValue);

        if(VAR_12 && ((VAR_13 == VAR_3 && *VAR_11 == VAR_8[VAR_14].iValue) ||
           (VAR_13 == VAR_4 && !FUNC_2(VAR_11, VAR_8[VAR_14].szValue))))
        {
            VAR_15 = VAR_14;
        }
    }

    FUNC_1(VAR_5, VAR_9, VAR_1, VAR_15, 0);

}
