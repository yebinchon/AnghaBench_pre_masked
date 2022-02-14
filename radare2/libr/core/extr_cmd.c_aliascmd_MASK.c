
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rcmd; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_0, const char *VAR_1) {
 switch (VAR_1[0]) {
 case '\0':
  FUNC_3 (VAR_0, "$");
  break;
 case '-':
  if (VAR_1[1]) {
   FUNC_1 (VAR_0->rcmd, VAR_1 + 2);
  } else {
   FUNC_1 (VAR_0->rcmd, ((void*)0));

  }
  break;
 case '?':
  FUNC_0 ("Usage: =$[-][remotecmd]  # remote command alias\n");
  FUNC_0 (" =$dr   # makes 'dr' alias for =!dr\n");
  FUNC_0 (" =$-dr  # unset 'dr' alias\n");
  break;
 default:
  FUNC_2 (VAR_0->rcmd, VAR_1, "", 1);
  break;
 }
}
