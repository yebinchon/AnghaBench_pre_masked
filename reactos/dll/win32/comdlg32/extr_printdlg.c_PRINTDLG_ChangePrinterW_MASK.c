
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_13__ {int dmCopies; scalar_t__ dmOrientation; } ;
struct TYPE_14__ {TYPE_1__ s1; } ;
struct TYPE_17__ {int dmFields; int pPortName; int * pPrinterName; TYPE_2__ u1; int dmDeviceName; } ;
struct TYPE_16__ {scalar_t__ hDevMode; int Flags; int nFromPage; int nToPage; int nCopies; } ;
struct TYPE_15__ {scalar_t__ hLandscapeIcon; scalar_t__ hPortraitIcon; TYPE_5__* lpPrinterInfo; scalar_t__ hNoCollateIcon; scalar_t__ hCollateIcon; TYPE_5__* lpDevMode; TYPE_5__* lpDriverInfo; TYPE_4__* lpPrintDlg; } ;
typedef TYPE_3__ PRINT_PTRW ;
typedef TYPE_4__* LPPRINTDLGW ;
typedef TYPE_5__* LPDEVMODEW ;
typedef int * LPBYTE ;
typedef int LPARAM ;
typedef int LONG ;
typedef int INT ;
typedef int HWND ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int *,TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *,int,int *,int,int*) ;
 int FUNC_8 (int ,int,int *,int,int*) ;
 int FUNC_9 () ;
 TYPE_5__* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 void* FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int *,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_15 (int ,int ,int *,int ,TYPE_5__*) ;
 int FUNC_16 (int ,TYPE_5__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_17 (int ,int ,int ,int ,int ) ;
 int FUNC_18 (int ,int ,int,int) ;
 int FUNC_19 (int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_20 (int *) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_21 (int ,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

__attribute__((used)) static BOOL FUNC_22(HWND VAR_38, WCHAR *VAR_39,
       PRINT_PTRW *VAR_40)
{
    LPPRINTDLGW VAR_41 = VAR_40->lpPrintDlg;
    LPDEVMODEW VAR_42 = ((void*)0);
    LONG VAR_43;
    DWORD VAR_44;
    HANDLE VAR_45;

    FUNC_13(FUNC_9(),0, VAR_40->lpPrinterInfo);
    FUNC_13(FUNC_9(),0, VAR_40->lpDriverInfo);
    if(!FUNC_14(VAR_39, &VAR_45, ((void*)0))) {
        FUNC_4("Can't open printer %s\n", FUNC_20(VAR_39));
 return VAR_5;
    }
    FUNC_8(VAR_45, 2, ((void*)0), 0, &VAR_44);
    VAR_40->lpPrinterInfo = FUNC_12(FUNC_9(),0,VAR_44);
    FUNC_8(VAR_45, 2, (LPBYTE)VAR_40->lpPrinterInfo, VAR_44,
  &VAR_44);
    FUNC_7(VAR_45, ((void*)0), 3, ((void*)0), 0, &VAR_44);
    VAR_40->lpDriverInfo = FUNC_12(FUNC_9(),0,VAR_44);
    if (!FUNC_7(VAR_45, ((void*)0), 3, (LPBYTE)VAR_40->lpDriverInfo,
     VAR_44, &VAR_44)) {
 FUNC_4("GetPrinterDriverA failed for %s, fix your config!\n",FUNC_20(VAR_40->lpPrinterInfo->pPrinterName));
 return VAR_5;
    }
    FUNC_2(VAR_45);

    FUNC_16(VAR_38, VAR_40->lpPrinterInfo);

    FUNC_13(FUNC_9(), 0, VAR_40->lpDevMode);
    VAR_40->lpDevMode = ((void*)0);

    VAR_43 = FUNC_3(0, 0, VAR_39, ((void*)0), ((void*)0), 0);
    if(VAR_43 == -1) {
        FUNC_4("DocumentProperties fails on %s\n", FUNC_20(VAR_39));
 return VAR_5;
    }
    VAR_40->lpDevMode = FUNC_12(FUNC_9(), 0, VAR_43);
    VAR_43 = FUNC_3(0, 0, VAR_39, VAR_40->lpDevMode, ((void*)0),
     VAR_4);
    if(VAR_41->hDevMode && (VAR_42 = FUNC_10(VAR_41->hDevMode)) &&
     !FUNC_21(VAR_42->dmDeviceName,
      VAR_40->lpDevMode->dmDeviceName)) {

        FUNC_3(0, 0, VAR_39, VAR_40->lpDevMode, VAR_42,
       VAR_4 | VAR_3);
    }
    if(VAR_42)
        FUNC_11(VAR_41->hDevMode);

    VAR_42 = VAR_40->lpDevMode;

    if(!(VAR_41->Flags & VAR_14)) {

 if(VAR_41->nFromPage != 0xffff)
     FUNC_18(VAR_38, VAR_26, VAR_41->nFromPage, VAR_5);
 if(VAR_41->nToPage != 0xffff)
     FUNC_18(VAR_38, VAR_27, VAR_41->nToPage, VAR_5);

 FUNC_1(VAR_38, VAR_32, VAR_34, VAR_32);
 if (VAR_41->Flags & VAR_12)
     FUNC_5(FUNC_6(VAR_38, VAR_33), VAR_5);
 else
     if (VAR_41->Flags & VAR_16)
         FUNC_1(VAR_38, VAR_32, VAR_34, VAR_33);
 if (VAR_41->Flags & VAR_11) {
     FUNC_5(FUNC_6(VAR_38, VAR_34), VAR_5);
     FUNC_5(FUNC_6(VAR_38, VAR_35),VAR_5);
     FUNC_5(FUNC_6(VAR_38, VAR_26), VAR_5);
     FUNC_5(FUNC_6(VAR_38, VAR_36),VAR_5);
     FUNC_5(FUNC_6(VAR_38, VAR_27), VAR_5);
 } else {
     if (VAR_41->Flags & VAR_13)
         FUNC_1(VAR_38, VAR_32, VAR_34, VAR_34);
 }





 if (VAR_41->Flags & VAR_8) {
            FUNC_17(VAR_38, VAR_30, VAR_19, VAR_6,
    (LPARAM)VAR_40->hCollateIcon);
     FUNC_0(VAR_38, VAR_23, 1);
 } else {
            FUNC_17(VAR_38, VAR_30, VAR_19, VAR_6,
    (LPARAM)VAR_40->hNoCollateIcon);
     FUNC_0(VAR_38, VAR_23, 0);
 }

 if (VAR_41->Flags & VAR_18) {

     if (!(VAR_42->dmFields & VAR_1)) {
         FUNC_5(FUNC_6(VAR_38, VAR_23), VAR_5);
  FUNC_5(FUNC_6(VAR_38, VAR_30), VAR_5);
     }
 }


 {
   INT VAR_46;
   if (VAR_41->hDevMode == 0)
       VAR_46 = VAR_41->nCopies;
   else
       VAR_46 = VAR_42->u1.s1.dmCopies;
   if(VAR_46 == 0) VAR_46 = 1;
   else if(VAR_46 < 0) VAR_46 = VAR_7;
   FUNC_18(VAR_38, VAR_28, VAR_46, VAR_5);
 }

 if (VAR_41->Flags & VAR_18) {

     if (!(VAR_42->dmFields & VAR_2)) {
         FUNC_5(FUNC_6(VAR_38, VAR_28), VAR_5);
  FUNC_5(FUNC_6(VAR_38, VAR_37), VAR_5);
     }
 }


 FUNC_0(VAR_38, VAR_22, (VAR_41->Flags & VAR_15) ? 1 : 0);
 if (VAR_41->Flags & VAR_9)
            FUNC_5(FUNC_6(VAR_38, VAR_22), VAR_5);
 if (VAR_41->Flags & VAR_10)
            FUNC_19(FUNC_6(VAR_38, VAR_22), VAR_20);

    } else {
      BOOL VAR_47 = (VAR_42->u1.s1.dmOrientation == VAR_0);

      FUNC_15(VAR_38, VAR_24,
      VAR_40->lpPrinterInfo->pPrinterName,
      VAR_40->lpPrinterInfo->pPortName,
      VAR_42);
      FUNC_15(VAR_38, VAR_25,
      VAR_40->lpPrinterInfo->pPrinterName,
      VAR_40->lpPrinterInfo->pPortName,
      VAR_42);
      FUNC_1(VAR_38, VAR_32, VAR_33, VAR_47 ? VAR_32: VAR_33);
      FUNC_17(VAR_38, VAR_29, VAR_19, VAR_6,
                          (LPARAM)(VAR_47 ? VAR_40->hPortraitIcon :
                                   VAR_40->hLandscapeIcon));

    }


    if ((VAR_41->Flags & VAR_17)==0) {

        FUNC_19(FUNC_6(VAR_38, VAR_31), VAR_20);
    }
    return VAR_21;
}
