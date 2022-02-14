
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ coutput; } ;
typedef TYPE_1__ RAsmState ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(RAsmState *VAR_0, char *VAR_1) {
 int VAR_2;
 if (VAR_0->coutput) {
  FUNC_0 ("\"");
  for (VAR_2 = 1; *VAR_1; VAR_1 += 2, VAR_2 += 2) {
   if (!(VAR_2 % 41)) {
    FUNC_0 ("\" \\\n\"");
    VAR_2 = 1;
   }
   FUNC_0 ("\\x%c%c", *VAR_1, VAR_1[1]);
  }
  FUNC_0 ("\"\n");
 } else {
  FUNC_0 ("%s\n", VAR_1);
 }
}
