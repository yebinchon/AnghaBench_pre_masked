
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_results {int dummy; } ;
struct cmd_handler {struct cmd_results* (* handle ) (int,char**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int ,char*,char*) ;
 struct cmd_handler* FUNC_1 (char*,struct cmd_handler*,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,int) ;
 struct cmd_results* FUNC_4 (int,char**) ;
 int FUNC_5 (int ,char*,char*) ;

struct cmd_results *FUNC_6(char **VAR_2, int VAR_3,
  struct cmd_handler *VAR_4, size_t VAR_5) {
 char *VAR_6 = FUNC_3(VAR_2, VAR_3);
 FUNC_5(VAR_1, "Subcommand: %s", VAR_6);
 FUNC_2(VAR_6);

 struct cmd_handler *VAR_7 = FUNC_1(VAR_2[0], VAR_4,
   VAR_5);
 if (!VAR_7) {
  return FUNC_0(VAR_0,
    "Unknown/invalid command '%s'", VAR_2[0]);
 }
 if (VAR_7->handle) {
  return VAR_7->handle(VAR_3 - 1, VAR_2 + 1);
 }
 return FUNC_0(VAR_0,
   "The command '%s' is shimmed, but unimplemented", VAR_2[0]);
}
