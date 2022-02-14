
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(DWORD VAR_2, DWORD VAR_3, DWORD VAR_4)
{
  static const BYTE VAR_5[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  if (VAR_2 && VAR_3 && VAR_3 < 13)
  {
    if (VAR_2 <= VAR_5[VAR_3] || (VAR_3 == 2 && VAR_2 == 29 && FUNC_0(VAR_4)))
      return VAR_1;
  }
  return VAR_0;
}
