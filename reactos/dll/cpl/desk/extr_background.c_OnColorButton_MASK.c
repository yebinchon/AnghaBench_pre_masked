
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int desktop_color; } ;
struct TYPE_7__ {int lStructSize; int Flags; int rgbResult; int * lpTemplateName; int * lpfnHook; scalar_t__ lCustData; scalar_t__ lpCustColors; int * hInstance; int hwndOwner; } ;
struct TYPE_6__ {scalar_t__ custom_colors; int bClrBackgroundChanged; } ;
typedef TYPE_1__* PBACKGROUND_DATA ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef int * HKEY ;
typedef int DWORD ;
typedef TYPE_2__ CHOOSECOLOR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *,int ,int ,int *,int **,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int **) ;
 scalar_t__ FUNC_8 (int *,int ,int *,int*,int ,int*) ;
 int FUNC_9 (int *,int ,int ,int,int ,int) ;
 int FUNC_10 (char*) ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;

__attribute__((used)) static VOID
FUNC_11(HWND VAR_12, PBACKGROUND_DATA VAR_13)
{

    HKEY VAR_14 = ((void*)0);
    LONG VAR_15 = VAR_3;
    CHOOSECOLOR VAR_16;

    VAR_15 = FUNC_6(VAR_4, FUNC_10("Control Panel\\Appearance"), 0, ((void*)0),
                         VAR_9, VAR_6, ((void*)0), &VAR_14, ((void*)0));

    if (VAR_15 == VAR_3)
    {

        DWORD VAR_17 = VAR_8;
        DWORD VAR_18 = sizeof(VAR_13->custom_colors);
        VAR_15 = FUNC_8(VAR_14, FUNC_10("CustomColors"), ((void*)0), &VAR_17,
                              (LPBYTE)VAR_13->custom_colors, &VAR_18);
        FUNC_5(VAR_14);
        VAR_14 = ((void*)0);
    }



    VAR_16.lStructSize = sizeof(CHOOSECOLOR);
    VAR_16.hwndOwner = VAR_12;
    VAR_16.hInstance = ((void*)0);
    VAR_16.rgbResult = VAR_11.desktop_color;
    VAR_16.lpCustColors = VAR_13->custom_colors;
    VAR_16.Flags = VAR_0 |
               VAR_1 |
               VAR_2 ;
    VAR_16.lCustData = 0;
    VAR_16.lpfnHook = ((void*)0);
    VAR_16.lpTemplateName = ((void*)0);
    if (FUNC_0(&VAR_16))
    {

        VAR_11.desktop_color = VAR_16.rgbResult;
        VAR_13->bClrBackgroundChanged = VAR_10;


        FUNC_4(FUNC_2(VAR_12), VAR_12);


        FUNC_3(FUNC_1(VAR_12, VAR_5), ((void*)0), VAR_10);


        VAR_15 = FUNC_7(VAR_4, FUNC_10("Control Panel\\Appearance"), 0,
                           VAR_7, &VAR_14);
        if (VAR_15 == VAR_3)
        {

            FUNC_9(VAR_14, FUNC_10("CustomColors"), 0, VAR_8,
                          (LPBYTE)VAR_13->custom_colors, sizeof(VAR_13->custom_colors));
            FUNC_5(VAR_14);
            VAR_14 = ((void*)0);
        }
    }
}
