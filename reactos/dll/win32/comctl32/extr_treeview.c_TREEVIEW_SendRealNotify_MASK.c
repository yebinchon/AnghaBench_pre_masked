
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_7__ {int hwndNotify; int hwnd; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef TYPE_2__ NMHDR ;
typedef int LPARAM ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__ const*,int ) ;

__attribute__((used)) static inline BOOL
FUNC_4(const TREEVIEW_INFO *VAR_2, UINT VAR_3, NMHDR *VAR_4)
{
    FUNC_2("code=%d, hdr=%p\n", VAR_3, VAR_4);

    VAR_4->hwndFrom = VAR_2->hwnd;
    VAR_4->idFrom = FUNC_0(VAR_2->hwnd, VAR_0);
    VAR_4->code = FUNC_3(VAR_2, VAR_3);

    return FUNC_1(VAR_2->hwndNotify, VAR_1, VAR_4->idFrom, (LPARAM)VAR_4);
}
