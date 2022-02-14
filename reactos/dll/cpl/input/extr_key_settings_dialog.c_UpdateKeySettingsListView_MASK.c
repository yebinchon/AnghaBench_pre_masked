
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int item ;
typedef int WCHAR ;
typedef int VOID ;
struct TYPE_6__ {int dwLanguage; } ;
struct TYPE_5__ {int mask; scalar_t__ iItem; int * pszText; } ;
typedef TYPE_1__ LV_ITEM ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static VOID
FUNC_6(HWND VAR_10)
{
    WCHAR VAR_11[VAR_7];
    LV_ITEM VAR_12;
    INT VAR_13;

    FUNC_1(VAR_10);

    FUNC_5(&VAR_12, sizeof(VAR_12));

    FUNC_4(VAR_9, VAR_3, VAR_11, FUNC_0(VAR_11));
    VAR_12.mask = VAR_6 | VAR_4 | VAR_5;
    VAR_12.pszText = VAR_11;
    VAR_12.iItem = 0;

    VAR_13 = FUNC_2(VAR_10, &VAR_12);

    if (VAR_8.dwLanguage == 1)
    {
        FUNC_4(VAR_9, VAR_1, VAR_11, FUNC_0(VAR_11));
    }
    else if (VAR_8.dwLanguage == 2)
    {
        FUNC_4(VAR_9, VAR_0, VAR_11, FUNC_0(VAR_11));
    }
    else
    {
        FUNC_4(VAR_9, VAR_2, VAR_11, FUNC_0(VAR_11));
    }

    FUNC_3(VAR_10, VAR_13, 1, VAR_11);
}
