
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hBrowseDlg; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef scalar_t__ LPARAM ;
typedef int LONG_PTR ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_1(HWND VAR_2,
                   LPARAM VAR_3)
{
    PMAIN_WND_INFO VAR_4;

    VAR_4 = (PMAIN_WND_INFO)VAR_3;

    VAR_4->hBrowseDlg = VAR_2;

    FUNC_0(VAR_2,
                     VAR_0,
                     (LONG_PTR)VAR_4);

    return VAR_1;
}
