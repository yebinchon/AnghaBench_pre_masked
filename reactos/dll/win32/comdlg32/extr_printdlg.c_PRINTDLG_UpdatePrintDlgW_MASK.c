
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


typedef int __ms_va_list ;
typedef scalar_t__ WORD ;
typedef float WCHAR ;
struct TYPE_13__ {int Flags; scalar_t__ nMinPage; scalar_t__ nMaxPage; int nCopies; scalar_t__ nToPage; scalar_t__ nFromPage; } ;
struct TYPE_12__ {float* pPortName; } ;
struct TYPE_8__ {void* dmCopies; } ;
struct TYPE_9__ {TYPE_1__ s1; } ;
struct TYPE_11__ {int dmFields; int dmCollate; TYPE_2__ u1; } ;
struct TYPE_10__ {TYPE_5__* lpPrinterInfo; TYPE_4__* lpDevMode; TYPE_6__* lpPrintDlg; } ;
typedef TYPE_3__ PRINT_PTRW ;
typedef TYPE_4__* PDEVMODEW ;
typedef TYPE_5__* LPPRINTER_INFO_2W ;
typedef TYPE_6__* LPPRINTDLGW ;
typedef int HWND ;
typedef scalar_t__ DWORD_PTR ;
typedef int BOOL ;


 int FUNC_0 (float*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,float*,int ,int ,float*,int ,int *) ;
 void* FUNC_3 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,float*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,float*,float*,int) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static BOOL FUNC_7(HWND VAR_25,
        PRINT_PTRW* VAR_26)
{
    LPPRINTDLGW VAR_27 = VAR_26->lpPrintDlg;
    PDEVMODEW VAR_28 = VAR_26->lpDevMode;
    LPPRINTER_INFO_2W VAR_29 = VAR_26->lpPrinterInfo;


    if(!VAR_28) {
 FUNC_1("No lpdm ptr?\n");
 return VAR_4;
    }


    if(!(VAR_27->Flags & VAR_13)) {



        if (FUNC_4(VAR_25, VAR_24) == VAR_0) {
     WORD VAR_30;
     WORD VAR_31;
            BOOL VAR_32;
     VAR_31 = FUNC_3(VAR_25, VAR_20, ((void*)0), VAR_4);
     VAR_30 = FUNC_3(VAR_25, VAR_21, &VAR_32, VAR_4);


     if(!VAR_32) VAR_30 = VAR_31;

     if (VAR_31 < VAR_27->nMinPage || VAR_31 > VAR_27->nMaxPage ||
  VAR_30 < VAR_27->nMinPage || VAR_30 > VAR_27->nMaxPage) {
         WCHAR VAR_33[256];
  WCHAR VAR_34[256];
                DWORD_PTR VAR_35[2];
  FUNC_5(VAR_1, VAR_9,
       VAR_33, 255);
                VAR_35[0] = VAR_27->nMinPage;
                VAR_35[1] = VAR_27->nMaxPage;
                FUNC_2(VAR_6|VAR_5,
                               VAR_33, 0, 0, VAR_34,
                               FUNC_0(VAR_34),
                               (__ms_va_list*)VAR_35);
  FUNC_5(VAR_1, VAR_10,
       VAR_33, 255);
  FUNC_6(VAR_25, VAR_34, VAR_33,
       VAR_8 | VAR_7);
  return VAR_4;
     }
     VAR_27->nFromPage = VAR_31;
     VAR_27->nToPage = VAR_30;
     VAR_27->Flags |= VAR_12;
 }
 else
     VAR_27->Flags &= ~VAR_12;

        if (FUNC_4(VAR_25, VAR_23) == VAR_0)
            VAR_27->Flags |= VAR_15;
        else
            VAR_27->Flags &= ~VAR_15;

 if (FUNC_4(VAR_25, VAR_18) == VAR_0) {
     static WCHAR VAR_36[] = {'F','I','L','E',':',0};
     VAR_27->Flags |= VAR_14;
     VAR_29->pPortName = VAR_36;
 }

 if (FUNC_4(VAR_25, VAR_19) == VAR_0) {
     FUNC_1("Collate lppd not yet implemented as output\n");
 }


 if (VAR_27->Flags & VAR_16) {


     VAR_27->Flags &= ~VAR_11;
     VAR_27->nCopies = 1;



     if (VAR_28->dmFields & VAR_2)
         VAR_28->dmCollate =
    (FUNC_4(VAR_25, VAR_19) == VAR_0);
     if (VAR_28->dmFields & VAR_3)
         VAR_28->u1.s1.dmCopies = FUNC_3(VAR_25, VAR_22, ((void*)0), VAR_4);
 } else {
     if (FUNC_4(VAR_25, VAR_19) == VAR_0)
         VAR_27->Flags |= VAR_11;
            else
               VAR_27->Flags &= ~VAR_11;
            VAR_27->nCopies = FUNC_3(VAR_25, VAR_22, ((void*)0), VAR_4);
 }
    }
    return VAR_17;
}
