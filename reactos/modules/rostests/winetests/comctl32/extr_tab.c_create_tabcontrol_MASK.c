
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; char* pszText; int iImage; } ;
typedef TYPE_1__ TCITEMA ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int DWORD ;


 int * FUNC_0 (int ,char*,int,int,int,int,int,int *,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static HWND
FUNC_7 (DWORD VAR_11, DWORD VAR_12)
{
    HWND VAR_13;
    TCITEMA VAR_14;
    static char VAR_15[] = "Tab 1",
    VAR_16[] = "Wide Tab 2",
    VAR_17[] = "T 3";

    VAR_13 = FUNC_0(VAR_5, "TestTab",
            VAR_8 | VAR_7 | VAR_4 | VAR_11, 10, 10, 300, 100, ((void*)0),
            ((void*)0), ((void*)0), 0);
    FUNC_6(VAR_13 != ((void*)0), "failed to create tab wnd\n");

    FUNC_3(VAR_13, VAR_0, VAR_8 | VAR_7 | VAR_4 | VAR_11);
    FUNC_2(VAR_13, VAR_6, 0, (LPARAM)VAR_9);

    VAR_14.mask = VAR_12;
    VAR_14.pszText = VAR_15;
    VAR_14.iImage = 0;
    FUNC_2(VAR_13, VAR_3, 0, (LPARAM)&VAR_14);
    VAR_14.pszText = VAR_16;
    VAR_14.iImage = 1;
    FUNC_2(VAR_13, VAR_3, 1, (LPARAM)&VAR_14);
    VAR_14.pszText = VAR_17;
    VAR_14.iImage = 2;
    FUNC_2(VAR_13, VAR_3, 2, (LPARAM)&VAR_14);

    if (VAR_10)
    {
        FUNC_4 (VAR_13, VAR_2);
        FUNC_1 (VAR_13, ((void*)0), 0, VAR_1);
        FUNC_5 (1000);
    }

    return VAR_13;
}
