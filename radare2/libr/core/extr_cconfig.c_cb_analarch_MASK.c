
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* value; } ;
struct TYPE_6__ {int config; int anal; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RConfigNode ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_7(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 if (*VAR_3->value == '?') {
  FUNC_6 (VAR_2, VAR_3);
  FUNC_1 (VAR_3);
  return 0;
 }
 if (*VAR_3->value) {
  if (FUNC_2 (VAR_2->anal, VAR_3->value)) {
   return 1;
  }
  const char *VAR_4 = FUNC_3 (VAR_2->config, "asm.arch");
  if (!VAR_4 || FUNC_5 (VAR_4, VAR_3->value)) {
   FUNC_0 ("anal.arch: cannot find '%s'\n", VAR_3->value);
  } else {
   FUNC_4 (VAR_2->config, "anal.arch", "null");
   return 1;
  }
 }
 return 0;
}
