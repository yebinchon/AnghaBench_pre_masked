
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_0, const char *VAR_1, int VAR_2) {
 if (FUNC_1 (VAR_0->config, "scr.tts")) {
  if (VAR_2 > 0) {
   char *VAR_3 = FUNC_2 ("%d %s", VAR_2, VAR_1);
   FUNC_3 (VAR_3, 1);
   FUNC_0 (VAR_3);
  } else if (VAR_2 == 0) {
   char *VAR_4 = FUNC_2 ("there are no %s", VAR_1);
   FUNC_3 (VAR_4, 1);
   FUNC_0 (VAR_4);
  }
 }
}
