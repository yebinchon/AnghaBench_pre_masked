
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {TYPE_2__* num; int config; } ;
typedef TYPE_1__ RCore ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 if (VAR_1[0] == '!') {
  if (VAR_1[1] == '!') {
   if (!FUNC_4 (0)) {
    FUNC_1 (0);
   }
   return -2;
  }
  FUNC_2 (VAR_2->config, "scr.histsave", "false");
 }
 if (FUNC_0 (VAR_1[0]) || VAR_1[0] == ' ') {
  VAR_2->num->value = FUNC_3 (VAR_2->num, VAR_1);
 } else {
  VAR_2->num->value = -1;
 }
 return -2;
}
