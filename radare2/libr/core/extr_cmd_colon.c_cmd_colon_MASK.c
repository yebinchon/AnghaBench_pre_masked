
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*,int) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, const char *VAR_1) {

 if (*VAR_1 == '{') {

  return 1;
 }
 if (!*VAR_1) {
  return 1;
 }
 if (*VAR_1 == '?') {
  FUNC_0 ("Usage: :<command> <arguments\n");
  FUNC_0 ("Usage: :{json-goes-here}\n");
  FUNC_0 ("See: T command to save/replay/. long commands\n");
  FUNC_0 ("See: e http.colon=true\n");
  return 1;
 }
 const char *VAR_2 = FUNC_4 (VAR_1, ' ');
 if (VAR_2) {
  int VAR_3 = VAR_2 - VAR_1;
  char *VAR_4 = FUNC_3 (VAR_1, VAR_3);
  FUNC_2 ("-> %s\n", VAR_4);
  FUNC_1 (VAR_4);
  return 1;
 }
 FUNC_0 ("Invalid command\n");

 return 0;
}
