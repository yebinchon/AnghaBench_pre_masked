
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {scalar_t__ lpDisplayName; } ;
struct TYPE_8__ {int iItem; } ;
struct TYPE_7__ {int hTool; TYPE_5__* pCurrentService; int hStatus; int SelectedItem; int hShortcutMenu; int hMainWnd; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef TYPE_2__* LPNMLISTVIEW ;
typedef int LPARAM ;
typedef int HMENU ;


 int FUNC_0 (int ,int,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 TYPE_5__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

VOID
FUNC_8(PMAIN_WND_INFO VAR_7,
                         LPNMLISTVIEW VAR_8)
{
    HMENU VAR_9;


    VAR_9 = FUNC_1(VAR_7->hMainWnd);


    if (FUNC_2(VAR_9,
                     VAR_1,
                     VAR_2) != VAR_3)
    {
        FUNC_0(VAR_9,
                       VAR_1,
                       VAR_3);
        FUNC_0(FUNC_4(VAR_7->hShortcutMenu, 0),
                       VAR_1,
                       VAR_3);
        FUNC_7(FUNC_4(VAR_7->hShortcutMenu, 0),
                           VAR_1,
                           VAR_2);
    }


    if (FUNC_2(VAR_9,
                     VAR_0,
                     VAR_2) != VAR_3)
    {
        FUNC_0(VAR_9,
                       VAR_0,
                       VAR_3);
        FUNC_0(FUNC_4(VAR_7->hShortcutMenu, 0),
                       VAR_0,
                       VAR_3);
    }


    VAR_7->SelectedItem = VAR_8->iItem;


    VAR_7->pCurrentService = FUNC_3(VAR_7);


    FUNC_6(VAR_7->hStatus,
                VAR_4,
                1,
                (LPARAM)VAR_7->pCurrentService->lpDisplayName);


    FUNC_6(VAR_7->hTool,
                VAR_6,
                VAR_1,
                (LPARAM)FUNC_5(VAR_5, 0));
}
