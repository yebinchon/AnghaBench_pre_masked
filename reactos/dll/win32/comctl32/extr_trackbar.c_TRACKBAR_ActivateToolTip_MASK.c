
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ti ;
struct TYPE_6__ {int hwndToolTip; int hwndSelf; } ;
struct TYPE_5__ {int cbSize; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ TRACKBAR_INFO ;
typedef int LPARAM ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline void
FUNC_2 (const TRACKBAR_INFO *VAR_1, BOOL VAR_2)
{
    TTTOOLINFOW VAR_3;

    if (!VAR_1->hwndToolTip) return;

    FUNC_1(&VAR_3, sizeof(VAR_3));
    VAR_3.cbSize = sizeof(VAR_3);
    VAR_3.hwnd = VAR_1->hwndSelf;

    FUNC_0 (VAR_1->hwndToolTip, VAR_0, VAR_2, (LPARAM)&VAR_3);
}
