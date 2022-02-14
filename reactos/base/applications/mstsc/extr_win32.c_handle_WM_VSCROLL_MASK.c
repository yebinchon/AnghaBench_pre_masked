
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int UINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static LRESULT
FUNC_6(HWND VAR_12, UINT VAR_13, WPARAM VAR_14, LPARAM VAR_15)
{
  int VAR_16;
  int VAR_17;

  VAR_16 = (int) FUNC_1(VAR_14);
  if (VAR_16 == VAR_1)
  {
    VAR_17 = VAR_11;
    VAR_11--;
    VAR_11 = FUNC_3(VAR_11, 0);
    FUNC_2(VAR_8, VAR_7, VAR_11, 1);
    FUNC_5(0, VAR_17 - VAR_11);
  }
  else if (VAR_16 == VAR_2)
  {
    VAR_17 = VAR_11;
    VAR_11++;
    VAR_11 = FUNC_4(VAR_11, VAR_9 - VAR_10);
    FUNC_2(VAR_8, VAR_7, VAR_11, 1);
    FUNC_5(0, VAR_17 - VAR_11);
  }
  else if (VAR_16 == VAR_3)
  {
    VAR_17 = VAR_11;
    VAR_11 -= VAR_10 / 2;
    VAR_11 = FUNC_3(VAR_11, 0);
    FUNC_2(VAR_8, VAR_7, VAR_11, 1);
    FUNC_5(0, VAR_17 - VAR_11);
  }
  else if (VAR_16 == VAR_4)
  {
    VAR_17 = VAR_11;
    VAR_11 += VAR_10 / 2;
    VAR_11 = FUNC_4(VAR_11, VAR_9 - VAR_10);
    FUNC_2(VAR_8, VAR_7, VAR_11, 1);
    FUNC_5(0, VAR_17 - VAR_11);
  }
  else if (VAR_16 == VAR_0)
  {
    VAR_17 = VAR_11;
    VAR_11 = VAR_9 - VAR_10;
    FUNC_2(VAR_8, VAR_7, VAR_11, 1);
    FUNC_5(0, VAR_17 - VAR_11);
  }
  else if (VAR_16 == VAR_6)
  {
    VAR_17 = VAR_11;
    VAR_11 = 0;
    FUNC_2(VAR_8, VAR_7, VAR_11, 1);
    FUNC_5(0, VAR_17 - VAR_11);
  }
  else if (VAR_16 == VAR_5)
  {
    VAR_17 = VAR_11;
    VAR_11 = (signed short) FUNC_0(VAR_14);
    FUNC_2(VAR_8, VAR_7, VAR_11, 1);
    FUNC_5(0, VAR_17 - VAR_11);
  }
  return 0;
}
