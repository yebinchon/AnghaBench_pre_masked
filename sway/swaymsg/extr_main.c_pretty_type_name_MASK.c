
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_names ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0) {

 struct {
  const char *a;
  const char *b;
 } VAR_1[] = {
  { "keyboard", "Keyboard" },
  { "pointer", "Mouse" },
  { "touchpad", "Touchpad" },
  { "tablet_pad", "Tablet pad" },
  { "tablet_tool", "Tablet tool" },
  { "touch", "Touch" },
  { "switch", "Switch" },
 };

 for (size_t VAR_2 = 0; VAR_2 < sizeof(VAR_1) / sizeof(VAR_1[0]); ++VAR_2) {
  if (FUNC_0(VAR_1[VAR_2].a, VAR_0) == 0) {
   return VAR_1[VAR_2].b;
  }
 }

 return VAR_0;
}
