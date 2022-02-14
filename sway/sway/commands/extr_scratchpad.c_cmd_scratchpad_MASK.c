
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sway_container {int scratchpad; struct sway_container* parent; } ;
struct cmd_results {int dummy; } ;
struct TYPE_8__ {struct sway_container* container; scalar_t__ using_criteria; } ;
struct TYPE_10__ {TYPE_3__ handler_context; } ;
struct TYPE_9__ {TYPE_2__* scratchpad; TYPE_1__* outputs; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_6__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_5__* VAR_3 ;
 scalar_t__ FUNC_2 (struct sway_container*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (struct sway_container*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

struct cmd_results *FUNC_6(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "scratchpad", VAR_2, 1))) {
  return VAR_7;
 }
 if (FUNC_5(VAR_6[0], "show") != 0) {
  return FUNC_1(VAR_0, "Expected 'scratchpad show'");
 }
 if (!VAR_4->outputs->length) {
  return FUNC_1(VAR_0,
    "Can't run this command while there's no outputs connected.");
 }
 if (!VAR_4->scratchpad->length) {
  return FUNC_1(VAR_0, "Scratchpad is empty");
 }

 if (VAR_3->handler_context.using_criteria) {
  struct sway_container *VAR_8 = VAR_3->handler_context.container;



  if (FUNC_2(VAR_8)) {
   while (VAR_8->parent) {
    VAR_8 = VAR_8->parent;
   }
  }




  if (!VAR_8->scratchpad) {
   return FUNC_1(VAR_1, ((void*)0));
  }
  FUNC_4(VAR_8);
 } else {
  FUNC_3();
 }

 return FUNC_1(VAR_1, ((void*)0));
}
