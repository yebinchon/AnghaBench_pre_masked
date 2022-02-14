
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ UINT_PTR ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int mask; int cchTextMax; size_t iItem; scalar_t__ lParam; scalar_t__ iSubItem; int * pszText; } ;
struct TYPE_5__ {int Type; scalar_t__ UserData; scalar_t__ KernelData; scalar_t__ ProcessId; } ;
typedef int TCHAR ;
typedef TYPE_1__* PGDI_TABLE_ENTRY ;
typedef TYPE_2__ LVITEM ;
typedef scalar_t__ LPARAM ;
typedef int LONG_PTR ;
typedef size_t INT ;
typedef int HWND ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 TYPE_1__* VAR_2 ;
 int * FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,size_t,int,int *) ;
 int FUNC_6 (int *,char*,scalar_t__) ;

VOID
FUNC_7(HWND VAR_5, HANDLE VAR_6)
{
 INT VAR_7, VAR_8;
 HANDLE VAR_9;
 PGDI_TABLE_ENTRY VAR_10;
 LVITEM VAR_11;
 TCHAR VAR_12[80];
 TCHAR* VAR_13;

 (void)FUNC_2(VAR_5);
 VAR_11.mask = VAR_4|VAR_3;
 VAR_11.pszText = VAR_12;
 VAR_11.cchTextMax = 80;
 for (VAR_7 = 0; VAR_7<= VAR_1; VAR_7++)
 {
  VAR_10 = &VAR_2[VAR_7];
  if ( ((VAR_6 != (HANDLE)1) && ((VAR_10->Type & VAR_0) != 0)) ||
       ((VAR_6 == (HANDLE)1) && ((VAR_10->Type & VAR_0) == 0)) ||
        (VAR_6 == (HANDLE)2) )
  {
   if (VAR_6 == (HANDLE)1 || VAR_6 == (HANDLE)2 ||
       ((LONG_PTR)VAR_6 & 0xfffc) == ((LONG_PTR)VAR_10->ProcessId & 0xfffc))
   {
    VAR_9 = FUNC_0(VAR_7, VAR_10->Type);
    VAR_8 = FUNC_3(VAR_5);
    VAR_11.iItem = VAR_8;
    VAR_11.iSubItem = 0;
    VAR_11.lParam = (LPARAM)VAR_9;

    FUNC_6(VAR_12, L"%d", VAR_8);
    (void)FUNC_4(VAR_5, &VAR_11);

    FUNC_6(VAR_12, L"%d", VAR_7);
    FUNC_5(VAR_5, VAR_8, 1, VAR_12);

    FUNC_6(VAR_12, L"%#08Ix", VAR_9);
    FUNC_5(VAR_5, VAR_8, 2, VAR_12);

    VAR_13 = FUNC_1(VAR_9);
    FUNC_5(VAR_5, VAR_8, 3, VAR_13);

    FUNC_6(VAR_12, L"%#08Ix", (UINT_PTR)VAR_10->ProcessId);
    FUNC_5(VAR_5, VAR_8, 4, VAR_12);

    FUNC_6(VAR_12, L"%#08Ix", (UINT_PTR)VAR_10->KernelData);
    FUNC_5(VAR_5, VAR_8, 5, VAR_12);

    FUNC_6(VAR_12, L"%#08Ix", (UINT_PTR)VAR_10->UserData);
    FUNC_5(VAR_5, VAR_8, 6, VAR_12);

    FUNC_6(VAR_12, L"%#08x", (UINT)VAR_10->Type);
    FUNC_5(VAR_5, VAR_8, 7, VAR_12);
   }
  }
 }
}
