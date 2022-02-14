
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 char* FUNC_4 (char*,char*,char const*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,int) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char const*) ;

__attribute__((used)) static char *FUNC_10(RCore *VAR_0, const char *VAR_1) {
 char *VAR_2 = FUNC_9 (VAR_1);
 int VAR_3, VAR_4 = FUNC_6 (VAR_2, ',');
 char *VAR_5 = FUNC_9 ("");
 if (!VAR_2 || !VAR_5) {
  FUNC_1 (VAR_2);
  FUNC_1 (VAR_5);
  return ((void*)0);
 }
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  char *VAR_6, *VAR_7 = (char *)FUNC_7 (VAR_2, VAR_3);
  if (!VAR_7) {
   break;
  }
  VAR_6 = FUNC_8 (VAR_7, '=');
  if (VAR_6) {
   *VAR_6 = 0;
   const char *VAR_8 = FUNC_2 (VAR_0->config, VAR_7);
   if (!VAR_8) {
    continue;
   }
   char *VAR_9 = FUNC_4 ("e %s=%s;", VAR_7, VAR_8);
   if (!VAR_9) {
    FUNC_1 (VAR_2);
    FUNC_1 (VAR_5);
    return ((void*)0);
   }
   VAR_5 = FUNC_5 (VAR_5, VAR_9);
   FUNC_1 (VAR_9);
   FUNC_3 (VAR_0->config, VAR_7, VAR_6 + 1);
   *VAR_6 = '=';
  } else {
   FUNC_0 ("Missing '=' in e: expression (%s)\n", VAR_7);
  }
 }
 FUNC_1 (VAR_2);
 return VAR_5;
}
