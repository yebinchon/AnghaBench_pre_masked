
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WPARAM ;
typedef scalar_t__ WNDPROC ;
struct TYPE_17__ {int hwndParent; } ;
struct TYPE_16__ {int Enabled; TYPE_3__* Part; int Notify; int Self; } ;
struct TYPE_15__ {int UpperLimit; int EditHwnd; scalar_t__ OrigProc; scalar_t__ LowerLimit; } ;
struct TYPE_14__ {int lfFaceName; } ;
struct TYPE_13__ {int right; int left; scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef int LRESULT ;
typedef TYPE_2__ LOGFONTW ;
typedef TYPE_3__ IPPART_INFO ;
typedef TYPE_4__ IPADDRESS_INFO ;
typedef int HWND ;
typedef int HMENU ;
typedef int HINSTANCE ;
typedef scalar_t__ HFONT ;
typedef int DWORD_PTR ;
typedef TYPE_5__ CREATESTRUCTA ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,int,int,scalar_t__,int,scalar_t__,int ,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,TYPE_2__*,int ) ;
 int FUNC_14 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__* FUNC_15 (int) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static LRESULT FUNC_17 (HWND VAR_15, const CREATESTRUCTA *VAR_16)
{
    IPADDRESS_INFO *VAR_17;
    RECT VAR_18, VAR_19;
    int VAR_20, VAR_21;
    HFONT VAR_22, VAR_23;
    LOGFONTW VAR_24, VAR_25;

    FUNC_14("\n");

    FUNC_12 (VAR_15, VAR_5,
      FUNC_7(VAR_15, VAR_5) & ~VAR_12);

    VAR_17 = FUNC_15 (sizeof(*VAR_17));
    if (!VAR_17) return -1;
    FUNC_11 (VAR_15, 0, (DWORD_PTR)VAR_17);

    FUNC_3 (VAR_15, &VAR_18);

    VAR_21 = (VAR_18.right - VAR_18.left) / 4;

    VAR_19.top = VAR_18.top + 2;
    VAR_19.bottom = VAR_18.bottom - 2;

    VAR_17->Self = VAR_15;
    VAR_17->Enabled = VAR_9;
    VAR_17->Notify = VAR_16->hwndParent;

    VAR_23 = FUNC_5(VAR_0);
    FUNC_4(VAR_23, sizeof(LOGFONTW), &VAR_25);
    FUNC_13(VAR_8, 0, &VAR_24, 0);
    FUNC_16(VAR_24.lfFaceName, VAR_25.lfFaceName);
    VAR_22 = FUNC_0(&VAR_24);

    for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
 IPPART_INFO* VAR_26 = &VAR_17->Part[VAR_20];

 VAR_26->LowerLimit = 0;
 VAR_26->UpperLimit = 255;
        VAR_19.left = VAR_18.left + VAR_20*VAR_21 + 6;
        VAR_19.right = VAR_18.left + (VAR_20+1)*VAR_21 - 2;
        VAR_26->EditHwnd =
  FUNC_1 (VAR_10, ((void*)0), VAR_13 | VAR_14 | VAR_1,
                               VAR_19.left, VAR_19.top, VAR_19.right - VAR_19.left,
          VAR_19.bottom - VAR_19.top, VAR_15, (HMENU) 1,
          (HINSTANCE)FUNC_6(VAR_15, VAR_3), ((void*)0));
        FUNC_9(VAR_26->EditHwnd, VAR_11, (WPARAM) VAR_22, VAR_2);
 FUNC_10(VAR_26->EditHwnd, VAR_7, VAR_15);
        VAR_26->OrigProc = (WNDPROC)
  FUNC_11 (VAR_26->EditHwnd, VAR_4,
    (DWORD_PTR)VAR_6);
        FUNC_2(VAR_26->EditHwnd, VAR_17->Enabled);
    }

    FUNC_8 (VAR_17);

    return 0;
}
