
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int UINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static LRESULT
FUNC_4(HWND VAR_0, UINT VAR_1, WPARAM VAR_2, LPARAM VAR_3)
{
  int VAR_4;
  int VAR_5;
  int VAR_6;

  VAR_5 = FUNC_0(VAR_3);
  VAR_4 = VAR_5;
  VAR_6 = !(VAR_5 & 0x8000);
  VAR_4 &= 0xff;
  if (VAR_4 == 0)
  {
    VAR_4 = FUNC_1(VAR_2);
  }
  VAR_5 &= 0x0100;
  if (VAR_4 == 0x0045)
  {
    VAR_5 &= ~0x0100;
  }
  if (VAR_6)
  {
    FUNC_2(VAR_4, VAR_5);
  }
  else
  {
    FUNC_3(VAR_4, VAR_5);
  }
  return 0;
}
