
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 char* FUNC_3 (int ,char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*,char const*,char const*,char const*,...) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static char* FUNC_8(RCore *VAR_0, char *VAR_1, const char *VAR_2) {
 const char *VAR_3 = "dot";
 char *VAR_4 = ((void*)0);
 const char *VAR_5 = FUNC_3 (VAR_0->config, "graph.gv.format");
 char *VAR_6 = FUNC_4 (VAR_3);
 if (!FUNC_7 (VAR_6, VAR_3)) {
  FUNC_1 (VAR_6);
  VAR_3 = "xdot";
  VAR_6 = FUNC_4 (VAR_3);
  if (!FUNC_7 (VAR_6, VAR_3)) {
   FUNC_1 (VAR_6);
   return FUNC_5 ("agf");
  }
 }
 if (VAR_2 && *VAR_2) {
  VAR_4 = FUNC_6 ("%s > a.dot;!%s -T%s -o%s a.dot;",
   VAR_1, VAR_3, VAR_5, VAR_2);
 } else {
  char *VAR_7 = FUNC_2();
  if (VAR_7) {
   VAR_4 = FUNC_6 ("%s > a.dot;!%s -T%s -oa.%s a.dot;!%s a.%s",
    VAR_1, VAR_3, VAR_5, VAR_5, VAR_7, VAR_5);
   FUNC_1 (VAR_7);
  } else {
   FUNC_0 ("Cannot find a valid picture viewer\n");
  }
 }
 FUNC_1 (VAR_6);
 return VAR_4;
}
