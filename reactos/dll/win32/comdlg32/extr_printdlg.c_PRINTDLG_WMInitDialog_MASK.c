
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {scalar_t__ dmDeviceName; } ;
struct TYPE_9__ {int wDeviceOffset; } ;
struct TYPE_8__ {int Flags; scalar_t__ nMaxPage; scalar_t__ nMinPage; scalar_t__ nToPage; scalar_t__ nFromPage; int hDevNames; int hDevMode; } ;
struct TYPE_7__ {scalar_t__ hCollateIcon; scalar_t__ hNoCollateIcon; scalar_t__ hPortraitIcon; scalar_t__ hLandscapeIcon; int hwndUpDown; scalar_t__ HelpMessageID; TYPE_2__* lpPrintDlg; } ;
typedef TYPE_1__ PRINT_PTRA ;
typedef int LRESULT ;
typedef TYPE_2__* LPPRINTDLGA ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;
typedef TYPE_3__ DEVNAMES ;
typedef TYPE_4__ DEVMODEA ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int ,int ,int ,int ,int ,int ,scalar_t__,int ,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,char*,int) ;
 int FUNC_9 () ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 char* FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,char*) ;
 int VAR_5 ;
 void* FUNC_14 (int ,char*) ;
 void* FUNC_15 (int ,char*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int ,char*,TYPE_1__*) ;
 int FUNC_17 (int ,int ,char*) ;
 scalar_t__ FUNC_18 (int ) ;
 int VAR_10 ;
 int FUNC_19 (int ,int ,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static LRESULT FUNC_20(HWND VAR_24,
         PRINT_PTRA* VAR_25)
{
    LPPRINTDLGA VAR_26 = VAR_25->lpPrintDlg;
    DEVNAMES *VAR_27;
    DEVMODEA *VAR_28;
    char *VAR_29 = ((void*)0);
    UINT VAR_30 = (VAR_26->Flags & VAR_8) ? VAR_20 : VAR_21;




    VAR_25->hCollateIcon =
      FUNC_15(VAR_2, "PD32_COLLATE", VAR_5, 0, 0, 0);
    VAR_25->hNoCollateIcon =
      FUNC_15(VAR_2, "PD32_NOCOLLATE", VAR_5, 0, 0, 0);


    VAR_25->hPortraitIcon =
      FUNC_14(VAR_2, "PD32_PORTRAIT");
    VAR_25->hLandscapeIcon =
      FUNC_14(VAR_2, "PD32_LANDSCAPE");


    FUNC_19(VAR_24, VAR_23, VAR_10, VAR_5,
                        (LPARAM)VAR_25->hNoCollateIcon);

    if(VAR_25->hCollateIcon == 0 ||
       VAR_25->hNoCollateIcon == 0 ||
       VAR_25->hPortraitIcon == 0 ||
       VAR_25->hLandscapeIcon == 0) {
        FUNC_3("no icon in resource file\n");
 FUNC_1(VAR_0);
 FUNC_4(VAR_24, VAR_3);
    }





    if (VAR_26->Flags & VAR_9) {
        if((VAR_25->HelpMessageID =
     FUNC_18(VAR_4)) == 0) {
     FUNC_1(VAR_1);
     return VAR_3;
 }
    } else
        VAR_25->HelpMessageID = 0;

    if(!(VAR_26->Flags &VAR_8)) {
        VAR_25->hwndUpDown =
   FUNC_2(VAR_18 | VAR_19 | VAR_17 |
         VAR_14 | VAR_13 |
         VAR_12 | VAR_15, 0, 0, 0, 0,
         VAR_24, VAR_16, VAR_2,
         FUNC_7(VAR_24, VAR_22), VAR_6, 1, 1);
    }





    if (VAR_26->nMaxPage < VAR_26->nMinPage)
     VAR_26->nMaxPage = VAR_26->nMinPage;
    if (VAR_26->nMinPage == VAR_26->nMaxPage)
     VAR_26->Flags |= VAR_7;
    if (VAR_26->nToPage < VAR_26->nMinPage)
        VAR_26->nToPage = VAR_26->nMinPage;
    if (VAR_26->nToPage > VAR_26->nMaxPage)
        VAR_26->nToPage = VAR_26->nMaxPage;
    if (VAR_26->nFromPage < VAR_26->nMinPage)
        VAR_26->nFromPage = VAR_26->nMinPage;
    if (VAR_26->nFromPage > VAR_26->nMaxPage)
        VAR_26->nFromPage = VAR_26->nMaxPage;


    if (FUNC_7(VAR_24,VAR_30)) {


 VAR_27 = FUNC_10(VAR_26->hDevNames);
 VAR_28 = FUNC_10(VAR_26->hDevMode);
 if(VAR_27)
     VAR_29 = (char*)VAR_27 + VAR_27->wDeviceOffset;
 else if(VAR_28)
     VAR_29 = (char*)VAR_28->dmDeviceName;
 FUNC_17(VAR_24, VAR_30, VAR_29);
 if(VAR_28) FUNC_11(VAR_26->hDevMode);
 if(VAR_27) FUNC_11(VAR_26->hDevNames);


 VAR_29 = FUNC_12(FUNC_9(),0,256);
 if (FUNC_8(VAR_24, VAR_30, VAR_29, 255))
     FUNC_16(VAR_24, VAR_29, VAR_25);
 FUNC_13(FUNC_9(),0,VAR_29);
    } else {

 char VAR_31[200];
        DWORD VAR_32 = FUNC_0(VAR_31);
 BOOL VAR_33 = FUNC_6(VAR_31, &VAR_32);

 if (VAR_33)
     FUNC_16(VAR_24, VAR_31, VAR_25);
 else
     FUNC_5("No default printer found, expect problems!\n");
    }
    return VAR_11;
}
