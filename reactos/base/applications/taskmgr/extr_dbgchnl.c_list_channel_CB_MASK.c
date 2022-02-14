
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lvi ;
typedef int WCHAR ;
struct TYPE_4__ {int* pszText; int mask; } ;
typedef TYPE_1__ LVITEM ;
typedef int HWND ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int,int,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(HANDLE VAR_1, void* VAR_2, WCHAR* VAR_3, void* VAR_4)
{
    int VAR_5;
    WCHAR VAR_6[2];
    LVITEM VAR_7;
    int VAR_8;
    HWND VAR_9 = (HWND)VAR_4;

    FUNC_2(&VAR_7, 0, sizeof(VAR_7));

    VAR_7.mask = VAR_0;
    VAR_7.pszText = VAR_3 + 1;

    VAR_8 = FUNC_0(VAR_9, &VAR_7);
    if (VAR_8 == -1) return 0;

    VAR_6[1] = L'\0';
    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
    {
        VAR_6[0] = (VAR_3[0] & (1 << VAR_5)) ? L'x' : L' ';
        FUNC_1(VAR_9, VAR_8, VAR_5 + 1, VAR_6);
    }
    return 1;
}
