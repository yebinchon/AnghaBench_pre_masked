
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_4__ {TYPE_1__* current_bar; } ;
struct TYPE_3__ {int strip_workspace_numbers; int id; scalar_t__ strip_workspace_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;

struct cmd_results *FUNC_4(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4,
    "strip_workspace_name", VAR_1, 1))) {
  return VAR_6;
 }

 VAR_3->current_bar->strip_workspace_name =
  FUNC_2(VAR_5[0], VAR_3->current_bar->strip_workspace_name);

 if (VAR_3->current_bar->strip_workspace_name) {
  VAR_3->current_bar->strip_workspace_numbers = 0;

  FUNC_3(VAR_2, "Stripping workspace name on bar: %s",
    VAR_3->current_bar->id);
 } else {
  FUNC_3(VAR_2, "Enabling workspace name on bar: %s",
    VAR_3->current_bar->id);
 }

 return FUNC_1(VAR_0, ((void*)0));
}
