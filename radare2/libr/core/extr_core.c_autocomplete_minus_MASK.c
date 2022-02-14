
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rcmd; } ;
typedef int RLineCompletion ;
typedef TYPE_1__ RCore ;


 char** FUNC_0 (int ,int*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_5(RCore *VAR_0, RLineCompletion *VAR_1, const char *VAR_2) {
 FUNC_2 (VAR_2);
 int VAR_3;
 int VAR_4 = FUNC_3 (VAR_2);
 char **VAR_5 = FUNC_0(VAR_0->rcmd, &VAR_3);
 if (!VAR_5) {
  return;
 }
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (!FUNC_4 (VAR_5[VAR_6], VAR_2, VAR_4)) {
   FUNC_1 (VAR_1, VAR_5[VAR_6]);
  }
 }
}
