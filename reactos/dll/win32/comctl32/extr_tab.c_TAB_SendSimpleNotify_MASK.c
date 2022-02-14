
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_4__ {int hwndNotify; int hwnd; } ;
typedef TYPE_1__ TAB_INFO ;
typedef TYPE_2__ NMHDR ;
typedef int LPARAM ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_2 (const TAB_INFO *VAR_2, UINT VAR_3)
{
    NMHDR VAR_4;

    VAR_4.hwndFrom = VAR_2->hwnd;
    VAR_4.idFrom = FUNC_0(VAR_2->hwnd, VAR_0);
    VAR_4.code = VAR_3;

    return (BOOL) FUNC_1 (VAR_2->hwndNotify, VAR_1,
            VAR_4.idFrom, (LPARAM) &VAR_4);
}
