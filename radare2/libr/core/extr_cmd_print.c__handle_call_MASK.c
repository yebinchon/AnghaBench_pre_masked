
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* assembler; } ;
struct TYPE_6__ {TYPE_1__* cur; } ;
struct TYPE_5__ {char* arch; } ;
typedef TYPE_3__ RCore ;


 char* FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(RCore *VAR_0, char *VAR_1, char **VAR_2) {
 if (!VAR_0 || !VAR_0->assembler || !VAR_0->assembler->cur) {
  *VAR_2 = ((void*)0);
  return;
 }
 if (FUNC_0 (VAR_0->assembler->cur->arch, "x86")) {
  *VAR_2 = FUNC_0 (VAR_1, "call ");
 } else if (FUNC_0 (VAR_0->assembler->cur->arch, "arm")) {
  *VAR_2 = FUNC_0 (VAR_1, " b ");
  if (*VAR_2 && FUNC_0 (*VAR_2, " 0x")) {




   *VAR_2 = ((void*)0);
  }
  if (!*VAR_2) {
   *VAR_2 = FUNC_0 (VAR_1, "bl ");
  }
  if (!*VAR_2) {
   *VAR_2 = FUNC_0 (VAR_1, "bx ");
  }
 }
}
