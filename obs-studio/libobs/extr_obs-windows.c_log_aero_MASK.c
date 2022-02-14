
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* dwm_is_composition_enabled_t ) (int*) ;
typedef int HMODULE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
 dwm_is_composition_enabled_t VAR_2 = ((void*)0);

 const char *VAR_3 =
  VAR_1 >= 0x602
   ? " (Aero is always on for windows 8 and above)"
   : "";

 HMODULE VAR_4 = FUNC_2(L"dwmapi");
 BOOL VAR_5 = 1;

 if (!VAR_4) {
  return;
 }

 VAR_2 = (dwm_is_composition_enabled_t)FUNC_1(
  VAR_4, "DwmIsCompositionEnabled");
 if (!VAR_2) {
  FUNC_0(VAR_4);
  return;
 }

 VAR_2(&VAR_5);
 FUNC_3(VAR_0, "Aero is %s%s", VAR_5 ? "Enabled" : "Disabled",
      VAR_3);
}
