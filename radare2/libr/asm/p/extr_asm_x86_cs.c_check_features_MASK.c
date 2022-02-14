
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
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_3, cs_insn *VAR_4) {
 const char *VAR_5;
 int VAR_6;
 if (!VAR_4 || !VAR_4->detail) {
  return 1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->detail->groups_count; VAR_6++) {
  int VAR_7 = VAR_4->detail->groups[VAR_6];
  if (VAR_7 < 128) {
   continue;
  }
  if (VAR_7 == VAR_0) {
   continue;
  }
  if (VAR_7 == VAR_1) {
   continue;
  }
  VAR_5 = FUNC_0 (VAR_2, VAR_7);
  if (!VAR_5) {
   return 1;
  }
  if (!FUNC_1 (VAR_3->features, VAR_5)) {
   return 0;
  }
 }
 return 1;
}
