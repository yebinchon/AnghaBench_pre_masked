
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_container {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {struct sway_workspace* workspace; struct sway_container* container; } ;
struct TYPE_8__ {TYPE_2__ handler_context; } ;
struct TYPE_7__ {TYPE_1__* outputs; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sway_container*,int *) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (struct sway_container*,int (*) (struct sway_container*,int *),int *) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (struct sway_workspace*,int (*) (struct sway_container*,int *),int *) ;

struct cmd_results *FUNC_4(int VAR_4, char **VAR_5) {
 if (!VAR_3->outputs->length) {
  return FUNC_1(VAR_0,
    "Can't run this command while there's no outputs connected.");
 }
 struct sway_container *VAR_6 = VAR_2->handler_context.container;
 struct sway_workspace *VAR_7 = VAR_2->handler_context.workspace;

 if (VAR_6) {
  FUNC_0(VAR_6, ((void*)0));
  FUNC_2(VAR_6, FUNC_0, ((void*)0));
 } else {
  FUNC_3(VAR_7, FUNC_0, ((void*)0));
 }

 return FUNC_1(VAR_1, ((void*)0));
}
