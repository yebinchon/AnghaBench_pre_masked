
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef int * HWND ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int,char*,char*,int,int ,int ,int,int,int *,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static HWND FUNC_5 (DWORD VAR_8, DWORD VAR_9)
{
    HWND VAR_10;
    HWND VAR_11;
    RECT VAR_12;
    BOOL VAR_13;
    FUNC_2(&VAR_12, 0, 0, 300, 300);
    VAR_13 = FUNC_0(&VAR_12, VAR_4, VAR_1);
    FUNC_4(VAR_13, "AdjustWindowRect failed\n");

    VAR_10 = FUNC_1(0,
                            VAR_6,
                            "Edit Test",
                            VAR_4,
                            VAR_0, VAR_0,
                            VAR_12.right - VAR_12.left, VAR_12.bottom - VAR_12.top,
                            ((void*)0), ((void*)0), VAR_5, ((void*)0));
    FUNC_4 (VAR_10 != ((void*)0), "CreateWindow EDIT Test failed\n");

    VAR_11 = FUNC_1(VAR_9,
                            "EDIT",
                            "Test Text",
                            VAR_3 | VAR_8,
                            0, 0, 300, 300,
                            VAR_10, ((void*)0), VAR_5, ((void*)0));
    FUNC_4 (VAR_11 != ((void*)0), "CreateWindow EDIT Test Text failed\n");
    if (VAR_7)
        FUNC_3 (VAR_10, VAR_2);
    return VAR_11;
}
