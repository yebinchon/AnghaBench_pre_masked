
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ThemeActive; } ;
struct TYPE_4__ {int Scheme; scalar_t__ hdcThemePreview; TYPE_2__ ActiveTheme; } ;
typedef int RECT ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ GLOBALS ;


 scalar_t__ FUNC_0 (scalar_t__,int *,TYPE_2__*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(HWND VAR_3, GLOBALS *VAR_4)
{
    if (VAR_4->ActiveTheme.ThemeActive)
    {
        RECT VAR_5;

        FUNC_1(FUNC_2(VAR_3, VAR_0), &VAR_5);
        if (FUNC_0(VAR_4->hdcThemePreview, &VAR_4->Scheme, &VAR_4->ActiveTheme, &VAR_5))
        {
            FUNC_3(VAR_3, VAR_0, VAR_1, 0, (LPARAM)VAR_4->hdcThemePreview);
            return;
        }
    }

    FUNC_3(VAR_3, VAR_0, VAR_2, 0, (LPARAM)&VAR_4->Scheme);
    FUNC_3(VAR_3, VAR_0, VAR_1, 0, 0);
}
