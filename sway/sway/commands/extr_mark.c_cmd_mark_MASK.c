
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {scalar_t__ view; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct sway_container*,char*) ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct sway_container*,char*) ;
 int FUNC_6 (struct sway_container*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char**,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (scalar_t__) ;

struct cmd_results *FUNC_12(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "mark", VAR_2, 1))) {
  return VAR_6;
 }
 struct sway_container *VAR_7 = VAR_3->handler_context.container;
 if (!VAR_7) {
  return FUNC_1(VAR_0, "Only containers can have marks");
 }

 bool VAR_8 = 0, VAR_9 = 0;
 while (VAR_4 > 0 && FUNC_10(*VAR_5, "--", 2) == 0) {
  if (FUNC_9(*VAR_5, "--add") == 0) {
   VAR_8 = 1;
  } else if (FUNC_9(*VAR_5, "--replace") == 0) {
   VAR_8 = 0;
  } else if (FUNC_9(*VAR_5, "--toggle") == 0) {
   VAR_9 = 1;
  } else {
   return FUNC_1(VAR_0,
     "Unrecognized argument '%s'", *VAR_5);
  }
  ++VAR_5;
  --VAR_4;
 }

 if (!VAR_4) {
  return FUNC_1(VAR_0,
    "Expected '[--add|--replace] [--toggle] <identifier>'");
 }

 char *VAR_10 = FUNC_8(VAR_5, VAR_4);
 bool VAR_11 = FUNC_5(VAR_7, VAR_10);

 if (!VAR_8) {

  FUNC_3(VAR_7);
 }

 FUNC_4(VAR_10);

 if (!VAR_9 || !VAR_11) {
  FUNC_2(VAR_7, VAR_10);
 }

 FUNC_7(VAR_10);
 FUNC_6(VAR_7);
 if (VAR_7->view) {
  FUNC_11(VAR_7->view);
 }

 return FUNC_1(VAR_1, ((void*)0));
}
