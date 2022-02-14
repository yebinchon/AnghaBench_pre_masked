
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* detail; } ;
typedef TYPE_2__ cs_insn ;
struct TYPE_8__ {int features; } ;
struct TYPE_6__ {int groups_count; int* groups; } ;
typedef TYPE_3__ RAsm ;






 int VAR_0 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static bool FUNC_2(RAsm *VAR_1, cs_insn *VAR_2) {
 int VAR_3;
 if (!VAR_2 || !VAR_2->detail) {
  return 1;
 }
 for (VAR_3 = 0; VAR_3 < VAR_2->detail->groups_count; VAR_3++) {
  int VAR_4 = VAR_2->detail->groups[VAR_3];
  switch (VAR_4) {
  case 131:
  case 130:
  case 129:
  case 128:
   continue;
  default:
   if (VAR_4 < 128) {
    continue;
   }
  }
  const char *VAR_5 = FUNC_0 (VAR_0, VAR_4);
  if (!VAR_5) {
   return 1;
  }
  if (!FUNC_1 (VAR_1->features, VAR_5)) {
   return 0;
  }
 }
 return 1;
}
