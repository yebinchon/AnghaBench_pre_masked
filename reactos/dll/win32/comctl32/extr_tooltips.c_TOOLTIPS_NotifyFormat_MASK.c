
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_5__ {scalar_t__ hwndSelf; TYPE_1__* tools; } ;
struct TYPE_4__ {scalar_t__ bNotifyUnicode; int hwnd; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef int PVOID ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__ LPARAM ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static LRESULT
FUNC_3 (TOOLTIPS_INFO *VAR_7, WPARAM VAR_8, LPARAM VAR_9)
{
    FUNC_0 ("hwnd=%p wParam=%lx lParam=%lx\n", VAR_7->hwndSelf, VAR_8, VAR_9);


    return 0;
}
