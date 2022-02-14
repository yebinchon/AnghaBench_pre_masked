
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int sbi ;
typedef int WCHAR ;
struct TYPE_23__ {TYPE_3__* pRun; } ;
struct TYPE_17__ {short top; short left; short bottom; } ;
struct TYPE_22__ {scalar_t__ nSelectionType; int texthost; TYPE_1__ rcFormat; scalar_t__ bEmulateVersion10; scalar_t__ bMouseCaptured; scalar_t__ hWnd; } ;
struct TYPE_21__ {short x; short y; } ;
struct TYPE_20__ {int cbSize; int* rgstate; int rcScrollBar; } ;
struct TYPE_18__ {int run; } ;
struct TYPE_19__ {TYPE_2__ member; } ;
typedef TYPE_4__ SCROLLBARINFO ;
typedef TYPE_5__ POINT ;
typedef TYPE_6__ ME_TextEditor ;
typedef int ME_Run ;
typedef TYPE_7__ ME_Cursor ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_6__*,short,short,TYPE_7__*,scalar_t__*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_6__*,int*,int*) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (int *,TYPE_5__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static BOOL FUNC_13(ME_TextEditor *VAR_11)
{
  ME_Cursor VAR_12;
  POINT VAR_13;
  BOOL VAR_14;
  SCROLLBARINFO VAR_15;
  DWORD VAR_16 = FUNC_0();
  VAR_13.x = (short)FUNC_5(VAR_16);
  VAR_13.y = (short)FUNC_2(VAR_16);

  if (VAR_11->hWnd)
  {
    VAR_15.cbSize = sizeof(VAR_15);
    FUNC_1(VAR_11->hWnd, VAR_4, &VAR_15);
    if (!(VAR_15.rgstate[0] & (VAR_6|VAR_7)) &&
        FUNC_11(&VAR_15.rcScrollBar, VAR_13))
    {
        FUNC_4(VAR_11->texthost,
                              FUNC_6(((void*)0), (WCHAR*)VAR_1), VAR_0);
        return VAR_8;
    }
    VAR_15.cbSize = sizeof(VAR_15);
    FUNC_1(VAR_11->hWnd, VAR_5, &VAR_15);
    if (!(VAR_15.rgstate[0] & (VAR_6|VAR_7)) &&
        FUNC_11(&VAR_15.rcScrollBar, VAR_13))
    {
        FUNC_4(VAR_11->texthost,
                              FUNC_6(((void*)0), (WCHAR*)VAR_1), VAR_0);
        return VAR_8;
    }
  }
  FUNC_3(VAR_11->texthost, &VAR_13);

  if (VAR_11->nSelectionType == VAR_10 && VAR_11->bMouseCaptured) {
      FUNC_4(VAR_11->texthost, VAR_9, VAR_0);
      return VAR_8;
  }
  if (!VAR_11->bEmulateVersion10 &&
      VAR_13.y < VAR_11->rcFormat.top &&
      VAR_13.x < VAR_11->rcFormat.left)
  {
      FUNC_4(VAR_11->texthost, VAR_9, VAR_0);
      return VAR_8;
  }
  if (VAR_13.y < VAR_11->rcFormat.top || VAR_13.y > VAR_11->rcFormat.bottom)
  {
      if (VAR_11->bEmulateVersion10)
          FUNC_4(VAR_11->texthost,
                                FUNC_6(((void*)0), (WCHAR*)VAR_1), VAR_0);
      else
          FUNC_4(VAR_11->texthost,
                                FUNC_6(((void*)0), (WCHAR*)VAR_3), VAR_8);
      return VAR_8;
  }
  if (VAR_13.x < VAR_11->rcFormat.left)
  {
      FUNC_4(VAR_11->texthost, VAR_9, VAR_0);
      return VAR_8;
  }
  FUNC_7(VAR_11, VAR_13.x, VAR_13.y, &VAR_12, &VAR_14);
  if (VAR_14)
  {
      ME_Run *VAR_17;

      VAR_17 = &VAR_12.pRun->member.run;
      if (FUNC_12( VAR_17 ))
      {
          FUNC_4(VAR_11->texthost,
                                FUNC_6(((void*)0), (WCHAR*)VAR_2),
                                VAR_0);
          return VAR_8;
      }

      if (FUNC_10(VAR_11))
      {
          int VAR_18, VAR_19;
          int VAR_20 = FUNC_8(&VAR_12);

          FUNC_9(VAR_11, &VAR_18, &VAR_19);
          if (VAR_18 <= VAR_20 && VAR_19 >= VAR_20) {
              FUNC_4(VAR_11->texthost,
                                    FUNC_6(((void*)0), (WCHAR*)VAR_1),
                                    VAR_0);
              return VAR_8;
          }
      }
  }
  FUNC_4(VAR_11->texthost,
                        FUNC_6(((void*)0), (WCHAR*)VAR_3), VAR_8);
  return VAR_8;
}
