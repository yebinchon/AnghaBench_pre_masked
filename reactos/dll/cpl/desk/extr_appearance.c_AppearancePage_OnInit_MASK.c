
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_23__ {scalar_t__ ThemeActive; TYPE_3__* Theme; TYPE_1__* Color; int Size; } ;
struct TYPE_22__ {scalar_t__ pwszFile; scalar_t__ pwszAction; } ;
struct TYPE_21__ {void* bInitializing; TYPE_9__ ActiveTheme; TYPE_3__* pThemes; int hbmpThemePreview; int hdcThemePreview; TYPE_9__ ClassicTheme; void* bSchemeChanged; void* bThemeChanged; int Scheme; } ;
struct TYPE_20__ {scalar_t__ DisplayName; struct TYPE_20__* NextTheme; TYPE_1__* ColoursList; } ;
struct TYPE_19__ {int bottom; int right; } ;
struct TYPE_18__ {int ChildStyle; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PTHEME ;
typedef int LPARAM ;
typedef int LONG_PTR ;
typedef scalar_t__ INT_PTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef int HDC ;
typedef TYPE_4__ GLOBALS ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__,TYPE_4__*) ;
 int FUNC_1 (scalar_t__,TYPE_4__*) ;
 int FUNC_2 (scalar_t__,TYPE_4__*) ;
 int FUNC_3 (scalar_t__,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_3__*,scalar_t__,int *,int *,TYPE_9__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_9__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_9__*) ;
 int FUNC_9 (scalar_t__,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int VAR_5 ;
 scalar_t__ FUNC_14 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int *) ;
 TYPE_3__* FUNC_16 () ;
 int VAR_8 ;
 int FUNC_17 (int ,int ,scalar_t__,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_21 (scalar_t__,int ,int ) ;
 void* VAR_9 ;
 TYPE_5__ VAR_10 ;
 scalar_t__ FUNC_22 (scalar_t__,char*) ;

__attribute__((used)) static INT_PTR
FUNC_23(HWND VAR_11)
{
    INT VAR_12;
    HWND VAR_13;
    GLOBALS *VAR_14;
    RECT VAR_15;
    HDC VAR_16;
    PTHEME VAR_17;

    VAR_14 = (GLOBALS*)FUNC_14(FUNC_13(), VAR_5, sizeof(GLOBALS));
    if (VAR_14 == ((void*)0))
        return VAR_4;

    FUNC_21(VAR_11, VAR_3, (LONG_PTR)VAR_14);

    VAR_14->bInitializing = VAR_9;

    if (!FUNC_15(&VAR_14->Scheme))
        return VAR_4;

    VAR_14->pThemes = FUNC_16();
    if (VAR_14->pThemes)
    {
        BOOL VAR_18 = VAR_4;

        if (VAR_10.pwszAction &&
            VAR_10.pwszFile &&
            FUNC_22(VAR_10.pwszAction, L"OpenMSTheme") == 0)
        {
            VAR_18 = FUNC_6(VAR_14->pThemes,
                                             VAR_10.pwszFile,
                                             ((void*)0),
                                             ((void*)0),
                                             &VAR_14->ActiveTheme);
        }

        if (VAR_18)
        {
            VAR_14->bThemeChanged = VAR_9;
            VAR_14->bSchemeChanged = VAR_9;

            FUNC_17(FUNC_12(VAR_11), VAR_8, (WPARAM)VAR_11, 0);

            FUNC_0(VAR_11, VAR_14);
        }
        else
        {
            if (!FUNC_8(VAR_14->pThemes, &VAR_14->ActiveTheme))
            {
                VAR_14->ActiveTheme.ThemeActive = VAR_4;
            }
        }





        if (!FUNC_7(VAR_14->pThemes, &VAR_14->ClassicTheme))
        {
            VAR_14->ClassicTheme.Theme = VAR_14->pThemes;
            VAR_14->ClassicTheme.Color = VAR_14->pThemes->ColoursList;
            VAR_14->ClassicTheme.Size = VAR_14->ClassicTheme.Color->ChildStyle;
        }

        if (VAR_14->ActiveTheme.ThemeActive == VAR_4)
            VAR_14->ActiveTheme = VAR_14->ClassicTheme;

        FUNC_9(FUNC_11(VAR_11, VAR_6), &VAR_15);

        VAR_16 = FUNC_10(((void*)0));
        VAR_14->hbmpThemePreview = FUNC_4(VAR_16, VAR_15.right, VAR_15.bottom);
        VAR_14->hdcThemePreview = FUNC_5(VAR_16);
        FUNC_19(VAR_14->hdcThemePreview, VAR_14->hbmpThemePreview);
        FUNC_18(((void*)0), VAR_16);

        VAR_13 = FUNC_11(VAR_11, VAR_7);

        for (VAR_17 = VAR_14->pThemes; VAR_17; VAR_17 = VAR_17->NextTheme)
        {
            VAR_12 = FUNC_20(VAR_13, VAR_0, 0, (LPARAM)VAR_17->DisplayName);
            FUNC_20(VAR_13, VAR_2, VAR_12, (LPARAM)VAR_17);
            if (VAR_17 == VAR_14->ActiveTheme.Theme)
            {
                FUNC_20(VAR_13, VAR_1, (WPARAM)VAR_12, 0);
            }
        }

        if (VAR_14->ActiveTheme.Theme)
        {
            FUNC_1(VAR_11, VAR_14);
            FUNC_2(VAR_11, VAR_14);
            FUNC_3(VAR_11, VAR_14);
        }
    }
    VAR_14->bInitializing = VAR_4;

    return VAR_4;
}
