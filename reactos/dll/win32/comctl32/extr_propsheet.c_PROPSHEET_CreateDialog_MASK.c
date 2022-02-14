
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_10__ {int style; } ;
struct TYPE_9__ {int signature; int style; } ;
struct TYPE_7__ {int dwFlags; int hwndParent; int hInstance; int (* pfnCallback ) (int ,int ,int ) ;} ;
struct TYPE_8__ {TYPE_1__ ppshheader; scalar_t__ unicode; scalar_t__ useCallback; } ;
typedef TYPE_2__ PropSheetInfo ;
typedef TYPE_3__ MyDLGTEMPLATEEX ;
typedef int LRESULT ;
typedef int LPWSTR ;
typedef scalar_t__ LPVOID ;
typedef int LPSTR ;
typedef int LPCVOID ;
typedef int LPARAM ;
typedef int INT_PTR ;
typedef int HRSRC ;
typedef int DWORD ;
typedef TYPE_4__ DLGTEMPLATE ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,TYPE_2__*) ;
 int FUNC_11 (scalar_t__,int ,int) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static INT_PTR FUNC_13(PropSheetInfo* VAR_10)
{
  LRESULT VAR_11;
  LPCVOID VAR_12;
  LPVOID VAR_13 = 0;
  HRSRC VAR_14;
  DWORD VAR_15;
  WORD VAR_16 = VAR_2;

  FUNC_10("(%p)\n", VAR_10);
  if (VAR_10->ppshheader.dwFlags & VAR_4)
    VAR_16 = VAR_3;

  if( VAR_10->unicode )
  {
    if(!(VAR_14 = FUNC_4(VAR_0,
                            FUNC_8(VAR_16),
                            (LPWSTR)VAR_9)))
      return -1;
  }
  else
  {
    if(!(VAR_14 = FUNC_3(VAR_0,
                            FUNC_7(VAR_16),
                            (LPSTR)VAR_9)))
      return -1;
  }

  if(!(VAR_12 = FUNC_6(VAR_0, VAR_14)))
    return -1;




  VAR_15 = FUNC_9(VAR_0, VAR_14);

  VAR_13 = FUNC_0(2 * VAR_15);

  if (!VAR_13)
    return -1;

  FUNC_11(VAR_13, VAR_12, VAR_15);

  if (VAR_10->ppshheader.dwFlags & VAR_7)
  {
    if (((MyDLGTEMPLATEEX*)VAR_13)->signature == 0xFFFF)
      ((MyDLGTEMPLATEEX*)VAR_13)->style &= ~VAR_1;
    else
      ((DLGTEMPLATE*)VAR_13)->style &= ~VAR_1;
  }
  if ((VAR_10->ppshheader.dwFlags & VAR_4) &&
      (VAR_10->ppshheader.dwFlags & VAR_8))
  {
    if (((MyDLGTEMPLATEEX*)VAR_13)->signature == 0xFFFF)
      ((MyDLGTEMPLATEEX*)VAR_13)->style |= VAR_1;
    else
      ((DLGTEMPLATE*)VAR_13)->style |= VAR_1;
  }

  if (VAR_10->useCallback)
    (*(VAR_10->ppshheader.pfnCallback))(0, VAR_6, (LPARAM)VAR_13);





  if( VAR_10->unicode )
  {
    VAR_11 = (INT_PTR)FUNC_2(VAR_10->ppshheader.hInstance,
                                          VAR_13, VAR_10->ppshheader.hwndParent,
                                          VAR_5, (LPARAM)VAR_10);
    if ( !VAR_11 ) VAR_11 = -1;
  }
  else
  {
    VAR_11 = (INT_PTR)FUNC_1(VAR_10->ppshheader.hInstance,
                                          VAR_13, VAR_10->ppshheader.hwndParent,
                                          VAR_5, (LPARAM)VAR_10);
    if ( !VAR_11 ) VAR_11 = -1;
  }

  FUNC_5(VAR_13);

  return VAR_11;
}
