
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct sway_view {TYPE_2__* container; } ;
struct sway_seat {int dummy; } ;
struct sway_node {int dummy; } ;
struct sway_container {struct sway_node node; } ;
struct criteria {int raw; } ;
struct cmd_results {scalar_t__ status; } ;
struct cmd_handler {struct cmd_results* (* handle ) (int,char**) ;} ;
struct TYPE_14__ {scalar_t__ length; struct sway_view** items; } ;
typedef TYPE_3__ list_t ;
struct TYPE_15__ {int node; } ;
struct TYPE_13__ {struct sway_node node; } ;
struct TYPE_12__ {int using_criteria; struct sway_seat* seat; } ;
struct TYPE_11__ {TYPE_1__ handler_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char**,char*,char*) ;
 struct cmd_results* FUNC_1 (scalar_t__,char*,...) ;
 struct cmd_results* FUNC_2 (int,char**) ;
 TYPE_10__* VAR_4 ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (struct criteria*) ;
 TYPE_3__* FUNC_5 (struct criteria*) ;
 struct criteria* FUNC_6 (char*,char**) ;
 char* FUNC_7 (char*) ;
 struct cmd_handler* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char**) ;
 int FUNC_11 (struct cmd_results*) ;
 struct sway_seat* FUNC_12 () ;
 scalar_t__ FUNC_13 (char) ;
 int FUNC_14 (TYPE_3__*,struct cmd_results*) ;
 int FUNC_15 (TYPE_3__*) ;
 TYPE_4__* VAR_5 ;
 struct sway_node* FUNC_16 (struct sway_seat*,int *) ;
 int FUNC_17 (struct sway_node*) ;
 char** FUNC_18 (char*,int*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ) ;
 struct cmd_results* FUNC_23 (int,char**) ;
 struct cmd_results* FUNC_24 (int,char**) ;
 int FUNC_25 (struct sway_seat*,char*) ;
 int FUNC_26 (int ,char*,...) ;

list_t *FUNC_27(char *VAR_6, struct sway_seat *VAR_7,
  struct sway_container *VAR_8) {
 char *VAR_9;
 char VAR_10 = ';';
 list_t *VAR_11 = ((void*)0);

 if (VAR_7 == ((void*)0)) {

  VAR_7 = FUNC_12();
  if (!FUNC_25(VAR_7, "could not find a seat to run the command on")) {
   return ((void*)0);
  }
 }

 char *VAR_12 = FUNC_20(VAR_6);
 char *VAR_13 = VAR_12;
 list_t *VAR_14 = FUNC_3();

 if (!VAR_14 || !VAR_12) {
  return ((void*)0);
 }

 VAR_4->handler_context.seat = VAR_7;

 do {
  for (; FUNC_13(*VAR_13); ++VAR_13) {}

  if (VAR_10 == ';') {
   VAR_4->handler_context.using_criteria = 0;
   if (*VAR_13 == '[') {
    char *VAR_15 = ((void*)0);
    struct criteria *VAR_16 = FUNC_6(VAR_13, &VAR_15);
    if (!VAR_16) {
     FUNC_14(VAR_14,
       FUNC_1(VAR_1, "%s", VAR_15));
     FUNC_9(VAR_15);
     goto cleanup;
    }
    FUNC_15(VAR_11);
    VAR_11 = FUNC_5(VAR_16);
    VAR_13 += FUNC_22(VAR_16->raw);
    FUNC_4(VAR_16);
    VAR_4->handler_context.using_criteria = 1;

    for (; FUNC_13(*VAR_13); ++VAR_13) {}
   }
  }

  VAR_9 = FUNC_0(&VAR_13, ";,", &VAR_10);
  for (; FUNC_13(*VAR_9); ++VAR_9) {}

  if (FUNC_19(VAR_9, "") == 0) {
   FUNC_26(VAR_3, "Ignoring empty command.");
   continue;
  }
  FUNC_26(VAR_3, "Handling command '%s'", VAR_9);

  int VAR_17;
  char **VAR_18 = FUNC_18(VAR_9, &VAR_17);
  if (FUNC_19(VAR_18[0], "exec") != 0 &&
    FUNC_19(VAR_18[0], "exec_always") != 0 &&
    FUNC_19(VAR_18[0], "mode") != 0) {
   for (int VAR_19 = 1; VAR_19 < VAR_17; ++VAR_19) {
    if (*VAR_18[VAR_19] == '\"' || *VAR_18[VAR_19] == '\'') {
     FUNC_21(VAR_18[VAR_19]);
    }
   }
  }
  struct cmd_handler *VAR_20 = FUNC_8(VAR_18[0]);
  if (!VAR_20) {
   FUNC_14(VAR_14, FUNC_1(VAR_1,
     "Unknown/invalid command '%s'", VAR_18[0]));
   FUNC_10(VAR_17, VAR_18);
   goto cleanup;
  }


  for (int VAR_21 = VAR_20->handle == FUNC_2 ? 2 : 1; VAR_21 < VAR_17; ++VAR_21) {
   VAR_18[VAR_21] = FUNC_7(VAR_18[VAR_21]);
  }

  if (!VAR_4->handler_context.using_criteria) {

   struct sway_node *VAR_22 = VAR_8 ? &VAR_8->node :
     FUNC_16(VAR_7, &VAR_5->node);
   FUNC_17(VAR_22);
   struct cmd_results *VAR_23 = VAR_20->handle(VAR_17-1, VAR_18+1);
   FUNC_14(VAR_14, VAR_23);
   if (VAR_23->status == VAR_1) {
    FUNC_10(VAR_17, VAR_18);
    goto cleanup;
   }
  } else if (VAR_11->length == 0) {
   FUNC_14(VAR_14,
     FUNC_1(VAR_0, "No matching node."));
  } else {
   struct cmd_results *VAR_24 = ((void*)0);
   for (int VAR_25 = 0; VAR_25 < VAR_11->length; ++VAR_25) {
    struct sway_view *VAR_26 = VAR_11->items[VAR_25];
    FUNC_17(&VAR_26->container->node);
    struct cmd_results *VAR_27 = VAR_20->handle(VAR_17-1, VAR_18+1);
    if (VAR_27->status == VAR_2) {
     FUNC_11(VAR_27);
    } else {

     if (VAR_24) {
      FUNC_11(VAR_24);
     }
     VAR_24 = VAR_27;
     if (VAR_27->status == VAR_1) {
      FUNC_14(VAR_14, VAR_24);
      FUNC_10(VAR_17, VAR_18);
      goto cleanup;
     }
    }
   }
   FUNC_14(VAR_14,
     VAR_24 ? VAR_24 : FUNC_1(VAR_2, ((void*)0)));
  }
  FUNC_10(VAR_17, VAR_18);
 } while(VAR_13);
cleanup:
 FUNC_9(VAR_12);
 FUNC_15(VAR_11);
 return VAR_14;
}
