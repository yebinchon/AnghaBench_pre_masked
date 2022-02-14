
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_2__ {int right; int left; int bottom; int top; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPRECT ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static LRESULT
FUNC_3(HWND VAR_12, UINT VAR_13, WPARAM VAR_14, LPARAM VAR_15)
{
  LPRECT VAR_16;
  int VAR_17;
  int VAR_18;
  int VAR_19;

  VAR_16 = (LPRECT) VAR_15;
  VAR_17 = (VAR_16->right - VAR_16->left) - (VAR_8 * 2);
  VAR_18 = (VAR_16->bottom - VAR_16->top) - (VAR_10 + VAR_8);
  if (VAR_18 < VAR_6 || VAR_17 < VAR_7)
  {
    VAR_19 = FUNC_0(VAR_5, VAR_0);
    if (!(VAR_19 & VAR_3))
    {
      VAR_19 |= VAR_3 | VAR_4;
      FUNC_2(VAR_5, VAR_0, VAR_19);
      VAR_9 = 0;
      VAR_11 = 0;
      FUNC_1(VAR_5, VAR_1, VAR_9, 1);
      FUNC_1(VAR_5, VAR_2, VAR_11, 1);
    }
  }
  else if (VAR_18 >= VAR_6 && VAR_17 >= VAR_7)
  {
    VAR_19 = FUNC_0(VAR_5, VAR_0);
    if (VAR_19 & VAR_3)
    {
      VAR_19 &= ~VAR_3;
      VAR_19 &= ~VAR_4;
      FUNC_2(VAR_5, VAR_0, VAR_19);
      VAR_9 = 0;
      VAR_11 = 0;
    }
  }
  return 0;
}
