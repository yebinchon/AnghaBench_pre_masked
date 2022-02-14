
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int WCHAR ;
struct TYPE_13__ {int Flags; scalar_t__ nMinPage; scalar_t__ nMaxPage; int nCopies; scalar_t__ nToPage; scalar_t__ nFromPage; } ;
struct TYPE_12__ {char* pPortName; } ;
struct TYPE_8__ {int dmCopies; int dmPrintQuality; } ;
struct TYPE_9__ {TYPE_1__ s1; } ;
struct TYPE_11__ {int dmFields; int dmCollate; int dmYResolution; TYPE_2__ u1; } ;
struct TYPE_10__ {TYPE_5__* lpPrinterInfo; TYPE_4__* lpDevMode; TYPE_6__* lpPrintDlg; } ;
typedef TYPE_3__ PRINT_PTRA ;
typedef TYPE_4__* PDEVMODEA ;
typedef TYPE_5__* LPPRINTER_INFO_2A ;
typedef TYPE_6__* LPPRINTDLGA ;
typedef void* LONG ;
typedef scalar_t__ HWND ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 void* FUNC_2 (scalar_t__,int ,int *,int ) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (scalar_t__,int *,int *,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_8 (scalar_t__,int ,int,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_9 (int *,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_10(HWND VAR_29,
        PRINT_PTRA* VAR_30)
{
    LPPRINTDLGA VAR_31 = VAR_30->lpPrintDlg;
    PDEVMODEA VAR_32 = VAR_30->lpDevMode;
    LPPRINTER_INFO_2A VAR_33 = VAR_30->lpPrinterInfo;


    if(!VAR_32) {
 FUNC_0("No lpdm ptr?\n");
 return VAR_9;
    }


    if(!(VAR_31->Flags & VAR_16)) {



        if (FUNC_4(VAR_29, VAR_28) == VAR_0) {
     WORD VAR_34;
     WORD VAR_35;
            BOOL VAR_36;
     VAR_35 = FUNC_2(VAR_29, VAR_24, ((void*)0), VAR_9);
     VAR_34 = FUNC_2(VAR_29, VAR_25, &VAR_36, VAR_9);


     if(!VAR_36) VAR_34 = VAR_35;

     if (VAR_35 < VAR_31->nMinPage || VAR_35 > VAR_31->nMaxPage ||
  VAR_34 < VAR_31->nMinPage || VAR_34 > VAR_31->nMaxPage) {
         WCHAR VAR_37[256];
  WCHAR VAR_38[256];
  FUNC_6(VAR_4, VAR_12, VAR_37, 255);
  FUNC_9(VAR_38,VAR_37, VAR_31->nMinPage, VAR_31->nMaxPage);
  FUNC_6(VAR_4, VAR_13, VAR_37, 255);
  FUNC_7(VAR_29, VAR_38, VAR_37, VAR_11 | VAR_10);
  return VAR_9;
     }
     VAR_31->nFromPage = VAR_35;
     VAR_31->nToPage = VAR_34;
     VAR_31->Flags |= VAR_15;
 }
 else
     VAR_31->Flags &= ~VAR_15;

        if (FUNC_4(VAR_29, VAR_27) == VAR_0)
            VAR_31->Flags |= VAR_18;
        else
            VAR_31->Flags &= ~VAR_18;

 if (FUNC_4(VAR_29, VAR_21) == VAR_0) {
     static char VAR_39[] = "FILE:";
     VAR_31->Flags |= VAR_17;
     VAR_33->pPortName = VAR_39;
 }

 if (FUNC_4(VAR_29, VAR_22) == VAR_0) {
     FUNC_0("Collate lppd not yet implemented as output\n");
 }


 if (VAR_31->Flags & VAR_19) {


     VAR_31->Flags &= ~VAR_14;
     VAR_31->nCopies = 1;



     if (VAR_32->dmFields & VAR_5)
         VAR_32->dmCollate =
    (FUNC_4(VAR_29, VAR_22) == VAR_0);
     if (VAR_32->dmFields & VAR_6)
         VAR_32->u1.s1.dmCopies = FUNC_2(VAR_29, VAR_26, ((void*)0), VAR_9);
 } else {

     if (FUNC_4(VAR_29, VAR_22) == VAR_0)
         VAR_31->Flags |= VAR_14;
            else
               VAR_31->Flags &= ~VAR_14;
            VAR_31->nCopies = FUNC_2(VAR_29, VAR_26, ((void*)0), VAR_9);

            VAR_32->u1.s1.dmCopies = 1;
 }


 if(FUNC_1(VAR_29, VAR_23))
 {
     HWND VAR_40 = FUNC_1(VAR_29, VAR_23);
     int VAR_41 = FUNC_8(VAR_40, VAR_2, 0, 0);

     if(VAR_41 != VAR_1)
     {
  LONG VAR_42 = FUNC_8(VAR_40, VAR_3, VAR_41, 0);
  VAR_32->dmFields |= VAR_7 | VAR_8;
  VAR_32->u1.s1.dmPrintQuality = FUNC_5(VAR_42);
  VAR_32->dmYResolution = FUNC_3(VAR_42);
     }
 }
    }
    return VAR_20;
}
