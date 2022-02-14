
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ti ;
typedef int WCHAR ;
struct TYPE_10__ {int style; int hwndParent; } ;
struct TYPE_9__ {int dwStyle; int lRangeMax; int lLineSize; int uTicFreq; scalar_t__ hwndToolTip; int hwndNotify; int * tics; scalar_t__ uNumTics; int fLocation; scalar_t__ lPos; scalar_t__ lSelMax; scalar_t__ lSelMin; int lPageSize; scalar_t__ lRangeMin; void* hwndSelf; } ;
struct TYPE_8__ {int cbSize; int uFlags; int * lpszText; void* hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef void* HWND ;
typedef int DWORD_PTR ;
typedef TYPE_3__ CREATESTRUCTW ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ,int ,int ,int ,int ,void*,int ,int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;
 int FUNC_4 (void*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int VAR_10 ;

__attribute__((used)) static LRESULT
FUNC_7 (HWND VAR_11, const CREATESTRUCTW *VAR_12)
{
    TRACKBAR_INFO *VAR_13;

    VAR_13 = FUNC_0 (sizeof(TRACKBAR_INFO));
    if (!VAR_13) return -1;
    FUNC_4 (VAR_11, 0, (DWORD_PTR)VAR_13);


    VAR_13->hwndSelf = VAR_11;
    VAR_13->dwStyle = VAR_12->style;
    VAR_13->lRangeMin = 0;
    VAR_13->lRangeMax = 100;
    VAR_13->lLineSize = 1;
    VAR_13->lPageSize = VAR_3;
    VAR_13->lSelMin = 0;
    VAR_13->lSelMax = 0;
    VAR_13->lPos = 0;
    VAR_13->fLocation = VAR_2;
    VAR_13->uNumTics = 0;
    VAR_13->uTicFreq = 1;
    VAR_13->tics = ((void*)0);
    VAR_13->hwndNotify= VAR_12->hwndParent;

    FUNC_5 (VAR_13);


    if (VAR_13->dwStyle & VAR_1) {

     VAR_13->hwndToolTip =
            FUNC_1 (0, VAR_4, ((void*)0), VAR_9,
                             VAR_0, VAR_0,
                             VAR_0, VAR_0,
                             VAR_11, 0, 0, 0);

     if (VAR_13->hwndToolTip) {
            TTTOOLINFOW VAR_14;
            WCHAR VAR_15 = 0;
            FUNC_6 (&VAR_14, sizeof(VAR_14));
            VAR_14.cbSize = sizeof(VAR_14);
          VAR_14.uFlags = VAR_6 | VAR_7 | VAR_5;
     VAR_14.hwnd = VAR_11;
            VAR_14.lpszText = &VAR_15;

            FUNC_3 (VAR_13->hwndToolTip, VAR_8, 0, (LPARAM)&VAR_14);
  }
    }

    FUNC_2 (VAR_11, VAR_10);

    return 0;
}
