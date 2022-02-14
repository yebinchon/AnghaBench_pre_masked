
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int ScreenSaverCount; TYPE_1__* ScreenSaverItems; } ;
struct TYPE_5__ {scalar_t__ szDisplayName; int bIsScreenSaver; } ;
typedef int TCHAR ;
typedef TYPE_1__ ScreenSaverItem ;
typedef TYPE_2__* PDATA ;
typedef char* LPTSTR ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (char) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static VOID
FUNC_10(HWND VAR_7, PDATA VAR_8)
{
    HWND VAR_9 = FUNC_0(VAR_7, VAR_3);
    TCHAR VAR_10[VAR_5];
    TCHAR VAR_11[VAR_5];
    INT VAR_12;
    ScreenSaverItem *VAR_13 = ((void*)0);
    LPTSTR VAR_14;


    VAR_13 = VAR_8->ScreenSaverItems;

    VAR_13->bIsScreenSaver = VAR_2;

    FUNC_4(VAR_6,
               VAR_4,
               VAR_13->szDisplayName,
               sizeof(VAR_13->szDisplayName) / sizeof(TCHAR));

    VAR_12 = FUNC_6(VAR_9,
                    VAR_0,
                    0,
                    (LPARAM)VAR_13->szDisplayName);

    FUNC_6(VAR_9,
                VAR_1,
                VAR_12,
                (LPARAM)0);


    VAR_8->ScreenSaverCount = 1;


    FUNC_1(VAR_6, VAR_11, VAR_5);
    VAR_14 = FUNC_9(VAR_11, FUNC_7('\\'));
    if (VAR_14 != ((void*)0))
    {
        *VAR_14 = '\0';
        FUNC_5(VAR_9, VAR_11, VAR_8);
    }


    FUNC_2(VAR_10, VAR_5);
    if (VAR_14 != ((void*)0) && FUNC_8(VAR_10, VAR_11) != 0)
        FUNC_5(VAR_9, VAR_10, VAR_8);


    FUNC_3(VAR_10, VAR_5);
    if (VAR_14 != ((void*)0) && FUNC_8(VAR_10, VAR_11) != 0)
        FUNC_5(VAR_9, VAR_10, VAR_8);
}
