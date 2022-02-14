
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* num; int r_main_radiff2; int r_main_rax2; } ;
struct TYPE_4__ {int value; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static bool FUNC_5(RCore *VAR_0, const char *VAR_1) {
 char *VAR_2 = FUNC_2 ("r%s", VAR_1);
 int VAR_3 = 0;
 if (FUNC_3 (VAR_2, "rax2")) {
  VAR_3 = FUNC_0 (VAR_0->r_main_rax2, VAR_2);
 } else if (FUNC_3 (VAR_2, "radare2")) {
  FUNC_4 ("%s", VAR_2);

 } else if (FUNC_3 (VAR_2, "rasm2")) {
  FUNC_4 ("%s", VAR_2);

 } else if (FUNC_3 (VAR_2, "rabin2")) {
  FUNC_4 ("%s", VAR_2);

 } else if (FUNC_3 (VAR_2, "ragg2")) {
  FUNC_4 ("%s", VAR_2);

 } else if (FUNC_3 (VAR_2, "r2pm")) {
  FUNC_4 ("%s", VAR_2);

 } else if (FUNC_3 (VAR_2, "radiff2")) {
  VAR_3 = FUNC_0 (VAR_0->r_main_radiff2, VAR_2);
 } else {
  const char *VAR_4[] = {
   "rax2", "r2pm", "rasm2", "rabin2", "rahash2", "rafind2", "rarun2", "ragg2", "radare2", "r2", ((void*)0)
  };
  int VAR_5;
  for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++) {
   if (FUNC_3 (VAR_2, VAR_4[VAR_5])) {
    FUNC_1 (VAR_2);
    return 1;
   }
  }
  return 0;
 }
 FUNC_1 (VAR_2);
 VAR_0->num->value = VAR_3;
 return 1;
}
