
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mii ;
typedef int buf ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_7__ {int nActiveChildren; scalar_t__ idFirstChild; scalar_t__* child; scalar_t__ hwndActiveChild; int hFrameMenu; int hWindowMenu; } ;
struct TYPE_6__ {int cbSize; int fType; scalar_t__ wID; int fMask; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef TYPE_2__ MDICLIENTINFO ;
typedef int LRESULT ;


 int FUNC_0 (int ,int,int,char*) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int ,int,int ) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 int FUNC_10 (char*,int,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (char*,int ) ;
 int VAR_13 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;

__attribute__((used)) static LRESULT FUNC_14(MDICLIENTINFO *VAR_14)
{
    UINT VAR_15, VAR_16, VAR_17, VAR_18;
    WCHAR VAR_19[VAR_3];

    FUNC_10("children %u, window menu %p\n", VAR_14->nActiveChildren, VAR_14->hWindowMenu);

    if (!VAR_14->hWindowMenu)
        return 0;

    if (!FUNC_6(VAR_14->hWindowMenu))
    {
        FUNC_11("Window menu handle %p is no longer valid\n", VAR_14->hWindowMenu);
        return 0;
    }





    VAR_16 = FUNC_2(VAR_14->hWindowMenu);
    for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
    {
        MENUITEMINFOW VAR_20;

        FUNC_13(&VAR_20, 0, sizeof(VAR_20));
        VAR_20.cbSize = sizeof(VAR_20);
        VAR_20.fMask = VAR_10;
        if (FUNC_3(VAR_14->hWindowMenu, VAR_15, VAR_11, &VAR_20))
        {
            if (VAR_20.fType & VAR_7)
            {

                FUNC_13(&VAR_20, 0, sizeof(VAR_20));
                VAR_20.cbSize = sizeof(VAR_20);
                VAR_20.fMask = VAR_9;
                if (FUNC_3(VAR_14->hWindowMenu, VAR_15 + 1, VAR_11, &VAR_20))
                {
                    if (VAR_20.wID == VAR_14->idFirstChild)
                    {
                        FUNC_10("removing %u items including separator\n", VAR_16 - VAR_15);
                        while (FUNC_8(VAR_14->hWindowMenu, VAR_15, VAR_5))
                                         ;

                        break;
                    }
                }
            }
        }
    }

    VAR_17 = 0;
    for (VAR_15 = 0; VAR_15 < VAR_14->nActiveChildren; VAR_15++)
    {
        if (FUNC_4(VAR_14->child[VAR_15], VAR_1) & VAR_13)
        {
            VAR_18 = VAR_14->idFirstChild + VAR_17;

            if (VAR_17 == VAR_4)
            {
                FUNC_7(VAR_12, VAR_2, VAR_19, sizeof(VAR_19)/sizeof(WCHAR));
                FUNC_0(VAR_14->hWindowMenu, VAR_8, VAR_18, VAR_19);
                break;
            }

            if (!VAR_17)

                FUNC_0(VAR_14->hWindowMenu, VAR_7, 0, ((void*)0));

            VAR_17++;

            FUNC_9(VAR_14->child[VAR_15], VAR_0, VAR_18);

            VAR_19[0] = '&';
            VAR_19[1] = '0' + VAR_17;
            VAR_19[2] = ' ';
            FUNC_5(VAR_14->child[VAR_15], VAR_19 + 3, sizeof(VAR_19)/sizeof(WCHAR) - 3);
            FUNC_10("Adding %p, id %u %s\n", VAR_14->child[VAR_15], VAR_18, FUNC_12(VAR_19));
            FUNC_0(VAR_14->hWindowMenu, VAR_8, VAR_18, VAR_19);

            if (VAR_14->child[VAR_15] == VAR_14->hwndActiveChild)
                FUNC_1(VAR_14->hWindowMenu, VAR_18, VAR_6);
        }
        else
            FUNC_10("MDI child %p is not visible, skipping\n", VAR_14->child[VAR_15]);
    }

    return (LRESULT)VAR_14->hFrameMenu;
}
