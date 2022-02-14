
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(void) {
 char *VAR_5 = FUNC_3 ("COLORTERM");
 if (VAR_5) {
  if ((FUNC_2 (VAR_5, "truecolor") || FUNC_2 (VAR_5, "24bit"))) {
   FUNC_1 (VAR_4.config, "scr.color", VAR_1);
  }
 } else {
  VAR_5 = FUNC_3 ("TERM");
  if (!VAR_5) {
   return;
  }
  if (FUNC_2 (VAR_5, "truecolor") || FUNC_2 (VAR_5, "24bit")) {
   FUNC_1 (VAR_4.config, "scr.color", VAR_1);
  } else if (FUNC_2 (VAR_5, "256color")) {
   FUNC_1 (VAR_4.config, "scr.color", VAR_2);
  } else if (!FUNC_4 (VAR_5, "dumb")) {

   FUNC_1 (VAR_4.config, "scr.color", VAR_3);
  }
 }
 FUNC_0 (VAR_5);
}
