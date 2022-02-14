
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cy; int cx; int y; int x; int hwndInsertAfter; } ;
typedef TYPE_1__ WINDOWPOS ;
struct TYPE_4__ {TYPE_1__* pwpos; int * prc; } ;
typedef int RECT ;
typedef int LPARAM ;
typedef int * HWND ;
typedef TYPE_2__ HDLAYOUT ;


 int * FUNC_0 (int ,int ,int *,int,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static HWND FUNC_6 (void)
{
    HWND VAR_10;
    HDLAYOUT VAR_11;
    RECT VAR_12;
    WINDOWPOS VAR_13;

    VAR_10 = FUNC_0(0, VAR_4, ((void*)0),
        VAR_6|VAR_5|VAR_7|VAR_1|VAR_2,
        0, 0, 0, 0,
        VAR_8, ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_10 != ((void*)0), "failed to create header window\n");

    if (VAR_9)
 FUNC_4 (VAR_8, VAR_3);

    FUNC_1(VAR_8,&VAR_12);
    VAR_11.prc = &VAR_12;
    VAR_11.pwpos = &VAR_13;
    FUNC_2(VAR_10, VAR_0, 0, (LPARAM)&VAR_11);
    FUNC_3(VAR_10, VAR_13.hwndInsertAfter, VAR_13.x, VAR_13.y,
                 VAR_13.cx, VAR_13.cy, 0);

    return VAR_10;
}
