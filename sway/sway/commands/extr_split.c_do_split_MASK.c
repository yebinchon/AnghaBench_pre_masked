
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_container {scalar_t__ fullscreen_mode; TYPE_1__* parent; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {struct sway_workspace* workspace; struct sway_container* container; } ;
struct TYPE_8__ {TYPE_2__ handler_context; } ;
struct TYPE_7__ {scalar_t__ fullscreen_global; } ;
struct TYPE_5__ {scalar_t__ parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sway_workspace*) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*,int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_6 (struct sway_workspace*,int) ;

__attribute__((used)) static struct cmd_results *FUNC_7(int VAR_5) {
 struct sway_container *VAR_6 = VAR_3->handler_context.container;
 struct sway_workspace *VAR_7 = VAR_3->handler_context.workspace;
 if (VAR_6) {
  if (FUNC_4(VAR_6) &&
    VAR_6->fullscreen_mode != VAR_2) {
   return FUNC_2(VAR_0,
     "Cannot split a hidden scratchpad container");
  }
  FUNC_5(VAR_6, VAR_5);
 } else {
  FUNC_6(VAR_7, VAR_5);
 }

 if (VAR_6 && VAR_6->parent && VAR_6->parent->parent) {
  FUNC_3(VAR_6->parent->parent);
 }

 if (VAR_4->fullscreen_global) {
  FUNC_0();
 } else {
  FUNC_1(VAR_7);
 }

 return FUNC_2(VAR_1, ((void*)0));
}
