
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_results {int dummy; } ;
struct cmd_handler {struct cmd_results* (* handle ) (int,char**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int,scalar_t__) ;
 struct cmd_results* FUNC_1 (int,char**) ;
 struct cmd_results* FUNC_2 (int,char**) ;
 struct cmd_results* FUNC_3 (int,char**) ;
 struct cmd_results* FUNC_4 (int,char**) ;
 struct cmd_results* FUNC_5 (int,char**) ;
 struct cmd_results* FUNC_6 (int,char**) ;
 struct cmd_results* FUNC_7 (int,char**) ;
 struct cmd_results* FUNC_8 (int ,char const*,...) ;
 struct cmd_results* FUNC_9 (int,char**) ;
 char* FUNC_10 (char*) ;
 struct cmd_handler* FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,char**) ;
 char* FUNC_14 (char**,int) ;
 char** FUNC_15 (char*,int*) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*) ;
 struct cmd_results* FUNC_20 (int,char**) ;
 int FUNC_21 (int ,char*,char*) ;
 int FUNC_22 (char*) ;

struct cmd_results *FUNC_23(char *VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 int VAR_8;
 char **VAR_9 = FUNC_15(VAR_5, &VAR_8);


 if (!VAR_8) {
  VAR_7 = FUNC_8(VAR_3, ((void*)0));
  goto cleanup;
 }


 if (VAR_8 > 1 && FUNC_16(VAR_9[VAR_8 - 1], "{") == 0) {
  *VAR_6 = FUNC_14(VAR_9, VAR_8 - 1);
  VAR_7 = FUNC_8(VAR_0, ((void*)0));
  goto cleanup;
 }


 if (FUNC_16(VAR_9[VAR_8 - 1], "}") == 0) {
  VAR_7 = FUNC_8(VAR_1, ((void*)0));
  goto cleanup;
 }


 if (*VAR_9[0] == '$') {
  VAR_9[0] = FUNC_10(VAR_9[0]);
  char *VAR_10 = FUNC_14(VAR_9, VAR_8);
  FUNC_13(VAR_8, VAR_9);
  VAR_9 = FUNC_15(VAR_10, &VAR_8);
  FUNC_12(VAR_10);
  if (!VAR_8) {
   VAR_7 = FUNC_8(VAR_3, ((void*)0));
   goto cleanup;
  }
 }


 FUNC_21(VAR_4, "Config command: %s", VAR_5);
 struct cmd_handler *VAR_11 = FUNC_11(VAR_9[0]);
 if (!VAR_11 || !VAR_11->handle) {
  const char *VAR_12 = VAR_11
   ? "Command '%s' is shimmed, but unimplemented"
   : "Unknown/invalid command '%s'";
  VAR_7 = FUNC_8(VAR_2, VAR_12, VAR_9[0]);
  goto cleanup;
 }


 if (VAR_11->handle == FUNC_9 && VAR_8 > 1 && *VAR_9[1] == '$') {

  char *VAR_13 = FUNC_0(1, FUNC_19(VAR_9[1]) + 2);
  VAR_13[0] = '$';
  FUNC_17(&VAR_13[1], VAR_9[1]);
  FUNC_12(VAR_9[1]);
  VAR_9[1] = VAR_13;
 }
 char *VAR_14 = FUNC_10(FUNC_14(VAR_9, VAR_8));
 FUNC_21(VAR_4, "After replacement: %s", VAR_14);
 FUNC_13(VAR_8, VAR_9);
 VAR_9 = FUNC_15(VAR_14, &VAR_8);
 FUNC_12(VAR_14);


 for (int VAR_15 = VAR_11->handle == FUNC_9 ? 2 : 1; VAR_15 < VAR_8; ++VAR_15) {
  if (VAR_11->handle != FUNC_4 && VAR_11->handle != FUNC_5
    && VAR_11->handle != FUNC_7
    && VAR_11->handle != FUNC_3
    && VAR_11->handle != FUNC_1
    && VAR_11->handle != FUNC_2
    && VAR_11->handle != FUNC_9
    && VAR_11->handle != FUNC_6
    && (*VAR_9[VAR_15] == '\"' || *VAR_9[VAR_15] == '\'')) {
   FUNC_18(VAR_9[VAR_15]);
  }
  FUNC_22(VAR_9[VAR_15]);
 }


 VAR_7 = VAR_11->handle(VAR_8 - 1, VAR_9 + 1);

cleanup:
 FUNC_13(VAR_8, VAR_9);
 return VAR_7;
}
