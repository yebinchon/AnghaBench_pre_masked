
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int name ;
typedef int HWND ;


 int FUNC_0 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,char*) ;

bool FUNC_2(HWND VAR_0)
{
 wchar_t VAR_1[256];

 VAR_1[0] = 0;
 if (!FUNC_0(VAR_0, VAR_1, sizeof(VAR_1) / sizeof(wchar_t)))
  return 0;

 return FUNC_1(VAR_1, L"ApplicationFrameWindow") == 0;
}
