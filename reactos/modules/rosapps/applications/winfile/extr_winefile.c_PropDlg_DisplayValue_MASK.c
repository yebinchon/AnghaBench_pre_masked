
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(HWND VAR_3, HWND VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3, VAR_1, 0, 0);

 if (VAR_5 != VAR_0) {
  LPCWSTR VAR_6 = (LPCWSTR)FUNC_0(VAR_3, VAR_2, VAR_5, 0);

  if (VAR_6)
   FUNC_1(VAR_4, VAR_6);
 }
}
