
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int cbSize; scalar_t__ hIcon; scalar_t__ dwHotKey; int nShow; int * lpDirectory; int * lpParameters; scalar_t__ lpVerb; int hwnd; scalar_t__ fMask; } ;
typedef int LPVOID ;
typedef scalar_t__ LPCSTR ;
typedef int LPCITEMIDLIST ;
typedef int IShellFolder ;
typedef scalar_t__ INT_PTR ;
typedef int IContextMenu ;
typedef int HWND ;
typedef int HRESULT ;
typedef scalar_t__ HMENU ;
typedef TYPE_1__ CMINVOKECOMMANDINFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,scalar_t__,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ,int,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_9 (scalar_t__,int,int,int,int ,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_10(IShellFolder* VAR_12, HWND VAR_13, int VAR_14, LPCITEMIDLIST* VAR_15, int VAR_16, int VAR_17)
{
 IContextMenu* VAR_18;
 BOOL VAR_19 = VAR_1;

 HRESULT VAR_20 = FUNC_7(VAR_12, VAR_13, VAR_14, VAR_15, &VAR_4, ((void*)0), (LPVOID*)&VAR_18);

 if (FUNC_8(VAR_20)) {
  HMENU VAR_21 = FUNC_0();

  VAR_18 = FUNC_1(VAR_18);

  if (VAR_21) {
   VAR_20 = FUNC_5(VAR_18, VAR_21, 0, VAR_2, VAR_3, VAR_0);

   if (FUNC_8(VAR_20)) {
    UINT VAR_22 = FUNC_9(VAR_21, VAR_8|VAR_9|VAR_10, VAR_16, VAR_17, 0, VAR_13, ((void*)0));

    FUNC_2();

    if (VAR_22) {
      CMINVOKECOMMANDINFO VAR_23;

      VAR_23.cbSize = sizeof(CMINVOKECOMMANDINFO);
      VAR_23.fMask = 0;
      VAR_23.hwnd = VAR_13;
      VAR_23.lpVerb = (LPCSTR)(INT_PTR)(VAR_22 - VAR_2);
      VAR_23.lpParameters = ((void*)0);
      VAR_23.lpDirectory = ((void*)0);
      VAR_23.nShow = VAR_5;
      VAR_23.dwHotKey = 0;
      VAR_23.hIcon = 0;

      VAR_20 = FUNC_4(VAR_18, &VAR_23);
     VAR_19 = VAR_11;
    }
   } else
    FUNC_2();
  }

  FUNC_6(VAR_18);
 }

 return FUNC_3(VAR_20)? VAR_20: VAR_19? VAR_7: VAR_6;
}
