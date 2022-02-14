
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,char*,char const*) ;

__attribute__((used)) static void FUNC_2(HWND VAR_1, BOOL VAR_2, const char * VAR_3)
{
  BOOL VAR_4 = VAR_0;

  VAR_4 = FUNC_0(VAR_1, 0, 1);
  if (VAR_2)
  {
    FUNC_1(VAR_4, "URL Case: CFE_LINK not set for [%s].\n", VAR_3);
  }
  else
  {
    FUNC_1(!VAR_4, "Non-URL Case: CFE_LINK set for [%s].\n", VAR_3);
  }
}
