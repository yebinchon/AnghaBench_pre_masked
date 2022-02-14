
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch {int family; int model; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(struct arch *VAR_0, const char *VAR_1,
         const char *VAR_2)
{
 if (VAR_0->family != 6 || VAR_0->model < 0x1e || FUNC_0(VAR_2, "jmp"))
  return 0;

 if (VAR_0->model == 0x1e) {

  if ((FUNC_0(VAR_1, "cmp") && !FUNC_0(VAR_1, "xchg")) ||
       FUNC_0(VAR_1, "test")) {
   return 1;
  }
 } else {

  if ((FUNC_0(VAR_1, "cmp") && !FUNC_0(VAR_1, "xchg")) ||
       FUNC_0(VAR_1, "test") ||
       FUNC_0(VAR_1, "add") ||
       FUNC_0(VAR_1, "sub") ||
       FUNC_0(VAR_1, "and") ||
       FUNC_0(VAR_1, "inc") ||
       FUNC_0(VAR_1, "dec")) {
   return 1;
  }
 }

 return 0;
}
