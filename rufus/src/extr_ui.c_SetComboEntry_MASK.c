
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(HWND VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = FUNC_0(VAR_0);

 if (VAR_3 <= 0)
  return;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (FUNC_1(VAR_0, VAR_2) == VAR_1) {
   FUNC_3(FUNC_2(VAR_0, VAR_2));
   return;
  }
 }
 if (VAR_2 == VAR_3)
  FUNC_3(FUNC_2(VAR_0, 0));
}
