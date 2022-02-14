
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wm0010_state { ____Placeholder_wm0010_state } wm0010_state ;


 int FUNC_0 (char const* const*) ;

__attribute__((used)) static const char *FUNC_1(enum wm0010_state VAR_0)
{
 static const char * const VAR_1[] = {
  "Power off",
  "Out of reset",
  "Boot ROM",
  "Stage2",
  "Firmware"
 };

 if (VAR_0 < 0 || VAR_0 >= FUNC_0(VAR_1))
  return "null";
 return VAR_1[VAR_0];
}
