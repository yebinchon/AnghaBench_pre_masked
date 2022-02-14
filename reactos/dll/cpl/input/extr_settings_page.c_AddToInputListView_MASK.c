
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int item ;
typedef int VOID ;
struct TYPE_11__ {int wFlags; TYPE_2__* pLayout; TYPE_1__* pLocale; int pszIndicator; } ;
struct TYPE_10__ {int mask; int iImage; scalar_t__ lParam; scalar_t__ iItem; int pszText; } ;
struct TYPE_9__ {int pszName; } ;
struct TYPE_8__ {int pszName; } ;
typedef TYPE_3__ LV_ITEM ;
typedef scalar_t__ LPARAM ;
typedef int INT ;
typedef TYPE_4__ INPUT_LIST_NODE ;
typedef int HWND ;
typedef int * HIMAGELIST ;
typedef int * HICON ;


 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,int,int,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;

__attribute__((used)) static VOID
FUNC_8(HWND VAR_5, INPUT_LIST_NODE *VAR_6)
{
    INT VAR_7 = -1;
    INT VAR_8 = -1;
    LV_ITEM VAR_9;
    HIMAGELIST VAR_10;

    VAR_10 = FUNC_3(VAR_5, VAR_4);

    if (VAR_10 != ((void*)0))
    {
        HICON VAR_11;

        VAR_11 = FUNC_0(VAR_6->pszIndicator,
                                       (VAR_6->wFlags & VAR_0));

        if (VAR_11 != ((void*)0))
        {
            VAR_8 = FUNC_2(VAR_10, VAR_11);
            FUNC_1(VAR_11);
        }
    }

    FUNC_7(&VAR_9, sizeof(VAR_9));

    VAR_9.mask = VAR_3 | VAR_2 | VAR_1;
    VAR_9.pszText = VAR_6->pLocale->pszName;
    VAR_9.iItem = FUNC_4(VAR_5) + 1;
    VAR_9.lParam = (LPARAM)VAR_6;
    VAR_9.iImage = VAR_8;

    VAR_7 = FUNC_5(VAR_5, &VAR_9);

    FUNC_6(VAR_5, VAR_7, 1, VAR_6->pLayout->pszName);
}
