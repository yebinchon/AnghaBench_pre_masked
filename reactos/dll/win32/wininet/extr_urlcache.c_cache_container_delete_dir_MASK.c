
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_3__ {int fAnyOperationsAborted; int fFlags; int * pTo; scalar_t__* pFrom; int wFunc; int * hwnd; } ;
typedef TYPE_1__ SHFILEOPSTRUCTW ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(LPCWSTR VAR_4)
{
    DWORD VAR_5;
    WCHAR VAR_6[VAR_3 + 1];
    SHFILEOPSTRUCTW VAR_7;
    int VAR_8;

    VAR_5 = FUNC_4(VAR_4);
    if (VAR_5 >= VAR_3)
        return VAR_0;
    FUNC_3(VAR_6, VAR_4);
    VAR_6[VAR_5 + 1] = 0;

    VAR_7.hwnd = ((void*)0);
    VAR_7.wFunc = VAR_2;
    VAR_7.pFrom = VAR_6;
    VAR_7.pTo = ((void*)0);
    VAR_7.fFlags = VAR_1;
    VAR_7.fAnyOperationsAborted = VAR_0;
    VAR_8 = FUNC_1(&VAR_7);
    if (VAR_8)
        FUNC_0("SHFileOperationW on %s returned %i\n", FUNC_2(VAR_6), VAR_8);
    return !(VAR_8 || VAR_7.fAnyOperationsAborted);
}
