
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bottom; int right; int top; int left; } ;
struct TYPE_6__ {int length; int flags; TYPE_1__ rcNormalPosition; } ;
typedef TYPE_2__ WINDOWPLACEMENT ;
typedef int VOID ;
struct TYPE_7__ {int Maximized; int Bottom; int Right; int Top; int Left; } ;
typedef int SHIMGVW_SETTINGS ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static VOID
FUNC_7(HWND VAR_8)
{
    WINDOWPLACEMENT VAR_9;
    HKEY VAR_10;

    FUNC_5(VAR_8, VAR_5);
    VAR_9.length = sizeof(WINDOWPLACEMENT);
    FUNC_0(VAR_8, &VAR_9);

    VAR_7.Left = VAR_9.rcNormalPosition.left;
    VAR_7.Top = VAR_9.rcNormalPosition.top;
    VAR_7.Right = VAR_9.rcNormalPosition.right;
    VAR_7.Bottom = VAR_9.rcNormalPosition.bottom;
    VAR_7.Maximized = (FUNC_1(VAR_8) || (VAR_9.flags & VAR_6));

    if (FUNC_3(VAR_1, FUNC_6("Software\\ReactOS\\shimgvw"), 0, ((void*)0),
        VAR_4, VAR_2, ((void*)0), &VAR_10, ((void*)0)) == VAR_0)
    {
        FUNC_4(VAR_10, FUNC_6("Settings"), 0, VAR_3, (LPBYTE)&VAR_7, sizeof(SHIMGVW_SETTINGS));
        FUNC_2(VAR_10);
    }
}
