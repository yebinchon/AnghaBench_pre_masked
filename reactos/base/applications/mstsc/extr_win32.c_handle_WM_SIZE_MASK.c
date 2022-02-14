
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
typedef int UINT ;
struct TYPE_2__ {scalar_t__ left; scalar_t__ top; scalar_t__ bottom; scalar_t__ right; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_4 (int,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static LRESULT
FUNC_7(HWND VAR_13, UINT VAR_14, WPARAM VAR_15, LPARAM VAR_16)
{
  int VAR_17;
  int VAR_18;

  if (VAR_15 == VAR_3)
  {
    return FUNC_0(VAR_13, VAR_14, VAR_15, VAR_16);
  }
  VAR_10 = FUNC_2(VAR_16);
  VAR_8 = FUNC_1(VAR_16);
  VAR_9.left = 0;
  VAR_9.top = 0;
  VAR_9.right = VAR_9.left + VAR_10;
  VAR_9.bottom = VAR_9.top + VAR_8;
  if (VAR_10 < VAR_7 || VAR_8 < VAR_6)
  {
    FUNC_3(VAR_5, VAR_0, 0, VAR_7 - VAR_10, 1);
    FUNC_3(VAR_5, VAR_1, 0, VAR_6 - VAR_8, 1);
  }
  VAR_17 = VAR_11;
  VAR_18 = VAR_12;
  if (VAR_10 >= VAR_7)
  {
    VAR_11 = 0;
  }
  else
  {
    VAR_11 = FUNC_4(VAR_11, VAR_7 - VAR_10);
  }
  if (VAR_8 >= VAR_6)
  {
    VAR_12 = 0;
  }
  else
  {
    VAR_12 = FUNC_4(VAR_12, VAR_6 - VAR_8);
  }
  FUNC_6(VAR_17 - VAR_11, VAR_18 - VAR_12);
  if (VAR_15 == VAR_4 || VAR_15 == VAR_2)
  {

    FUNC_5();
  }
  return 0;
}
