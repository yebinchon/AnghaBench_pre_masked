
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WPARAM ;
typedef void* WORD ;
typedef int WCHAR ;
typedef int const UINT ;
struct TYPE_11__ {void* dmOrientation; void* dmDefaultSource; void* dmPaperSize; } ;
struct TYPE_12__ {TYPE_1__ s1; } ;
struct TYPE_15__ {TYPE_2__ u1; int * dmFormName; } ;
struct TYPE_14__ {int Flags; void* nToPage; void* nFromPage; int hwndOwner; } ;
struct TYPE_13__ {int hLandscapeIcon; int hPortraitIcon; TYPE_5__* lpDevMode; int hNoCollateIcon; int hCollateIcon; int HelpMessageID; TYPE_4__* lpPrintDlg; } ;
typedef TYPE_3__ PRINT_PTRW ;
typedef int LRESULT ;
typedef TYPE_4__* LPPRINTDLGW ;
typedef TYPE_5__* LPDEVMODEW ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int *,TYPE_5__*,TYPE_5__*,int) ;
 int VAR_13 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_14 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int const) ;
 void* FUNC_7 (int ,int const,int *,int ) ;
 int FUNC_8 (int ,int const,int *,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int *) ;


 int VAR_15 ;
 int FUNC_13 (int ,int const) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *,int *) ;
 int VAR_16 ;
 int FUNC_16 (int ,int *,TYPE_3__*) ;
 int FUNC_17 (int ,TYPE_3__*) ;
 int VAR_17 ;
 void* FUNC_18 (int ,int const,int ,int,int ) ;
 int FUNC_19 (int ,int ,int ,int ) ;
 int FUNC_20 (char*) ;
 int VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;




 int VAR_21 ;
 int const VAR_22 ;

__attribute__((used)) static LRESULT FUNC_21(HWND VAR_23, WPARAM VAR_24,
              PRINT_PTRW* VAR_25)
{
    LPPRINTDLGW VAR_26 = VAR_25->lpPrintDlg;
    UINT VAR_27 = (VAR_26->Flags & VAR_16) ? 138 : 135;
    LPDEVMODEW VAR_28 = VAR_25->lpDevMode;

    switch (FUNC_14(VAR_24)) {
    case 140:
        FUNC_20(" OK button was hit\n");
        if (!FUNC_17(VAR_23, VAR_25)) {
     FUNC_5("Update printdlg was not successful!\n");
     return(VAR_14);
 }
 FUNC_4(VAR_23, VAR_18);
 return(VAR_18);

    case 141:
        FUNC_20(" CANCEL button was hit\n");
        FUNC_4(VAR_23, VAR_14);
 return(VAR_14);

     case 130:
        FUNC_20(" HELP button was hit\n");
        FUNC_19(VAR_26->hwndOwner, VAR_25->HelpMessageID,
           (WPARAM) VAR_23, (LPARAM) VAR_26);
        break;

     case 139:
        if (FUNC_13(VAR_23, 139) == VAR_0)
            FUNC_18(VAR_23, VAR_20, VAR_17, VAR_15,
                                    (LPARAM)VAR_25->hCollateIcon);
        else
            FUNC_18(VAR_23, VAR_20, VAR_17, VAR_15,
                                    (LPARAM)VAR_25->hNoCollateIcon);
        break;
     case 134:
     case 133:
        if (FUNC_10(VAR_24)==VAR_13) {
     WORD VAR_29;
     WORD VAR_30;
     VAR_30 = FUNC_7(VAR_23, 134, ((void*)0), VAR_14);
     VAR_29 = FUNC_7(VAR_23, 133, ((void*)0), VAR_14);
            if (VAR_30 != VAR_26->nFromPage || VAR_29 != VAR_26->nToPage)
         FUNC_0(VAR_23, 129, VAR_21, VAR_21);
 }
        break;

    case 132:
        if(FUNC_10(VAR_24) == VAR_13) {
     INT VAR_31 = FUNC_7(VAR_23, 132, ((void*)0), VAR_14);
     if(VAR_31 <= 1)
         FUNC_3(FUNC_6(VAR_23, 139), VAR_14);
     else
                FUNC_3(FUNC_6(VAR_23, 139), VAR_18);
        }
        break;

     case 131:
       {
         HANDLE VAR_32;
         WCHAR VAR_33[256];

         if (!FUNC_8(VAR_23, VAR_27, VAR_33, 255)) break;
         if (!FUNC_15(VAR_33, &VAR_32, ((void*)0))) {
      FUNC_5(" Call to OpenPrinter did not succeed!\n");
      break;
  }
  FUNC_2(VAR_23, VAR_32, VAR_33,
        VAR_25->lpDevMode,
        VAR_25->lpDevMode,
        VAR_10 | VAR_12 | VAR_11);
  FUNC_1(VAR_32);
         break;
       }

    case 129:
        if (VAR_26->Flags & VAR_16)
        {
              VAR_28->u1.s1.dmOrientation = VAR_9;
              FUNC_18(VAR_23, VAR_19, VAR_17, VAR_15,
                          (LPARAM)(VAR_25->hPortraitIcon));
        }
        break;

    case 128:
        if (VAR_26->Flags & VAR_16)
        {
              VAR_28->u1.s1.dmOrientation = VAR_8;
              FUNC_18(VAR_23, VAR_19, VAR_17, VAR_15,
                          (LPARAM)(VAR_25->hLandscapeIcon));
        }
        break;

    case 138:

    case 135:
         if (FUNC_10(VAR_24)==VAR_1) {
      WCHAR *VAR_34;
      INT VAR_35 = FUNC_18(VAR_23, FUNC_14(VAR_24), VAR_3, 0, 0);
      INT VAR_36 = FUNC_18(VAR_23, FUNC_14(VAR_24), VAR_6, VAR_35, 0);

      VAR_34 = FUNC_11(FUNC_9(),0,sizeof(WCHAR)*(VAR_36+1));
      FUNC_18(VAR_23, FUNC_14(VAR_24), VAR_5, VAR_35, (LPARAM)VAR_34);
      FUNC_16(VAR_23, VAR_34, VAR_25);
      FUNC_12(FUNC_9(),0,VAR_34);
  }
  break;

    case 137:
      {
   DWORD VAR_37 = FUNC_18(VAR_23, 137, VAR_3, 0, 0);
   if(VAR_37 != VAR_2) {
       VAR_28->u1.s1.dmPaperSize = FUNC_18(VAR_23, 137,
           VAR_4,
           VAR_37, 0);
       FUNC_8(VAR_23, 137, VAR_28->dmFormName, VAR_7);
   }
      }
      break;

    case 136:
      {
   DWORD VAR_38 = FUNC_18(VAR_23, 136, VAR_3, 0, 0);
   if(VAR_38 != VAR_2)
       VAR_28->u1.s1.dmDefaultSource = FUNC_18(VAR_23, 136,
         VAR_4, VAR_38,
         0);
      }
      break;
    }
    if(VAR_26->Flags & VAR_16) {
        switch (FUNC_14(VAR_24)) {
 case 129:
 case 128:
     if (FUNC_13(VAR_23, 129) == VAR_0) {
         if(VAR_28->u1.s1.dmOrientation != VAR_9) {
      VAR_28->u1.s1.dmOrientation = VAR_9;
                    FUNC_18(VAR_23, VAR_22, VAR_17, VAR_15,
     (LPARAM)VAR_25->hPortraitIcon);
                    FUNC_18(VAR_23, VAR_19, VAR_17, VAR_15,
     (LPARAM)VAR_25->hPortraitIcon);
  }
     } else {
         if(VAR_28->u1.s1.dmOrientation != VAR_8) {
             VAR_28->u1.s1.dmOrientation = VAR_8;
                    FUNC_18(VAR_23, VAR_22, VAR_17, VAR_15,
     (LPARAM)VAR_25->hLandscapeIcon);
                    FUNC_18(VAR_23, VAR_19, VAR_17, VAR_15,
     (LPARAM)VAR_25->hLandscapeIcon);
  }
     }
     break;
 }
    }
    return VAR_14;
}
