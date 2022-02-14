
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_4__ {TYPE_1__* current_bar; } ;
struct TYPE_3__ {char* status_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*) ;

struct cmd_results *FUNC_6(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "status_command", VAR_1, 1))) {
  return VAR_6;
 }
 FUNC_2(VAR_3->current_bar->status_command);
 VAR_3->current_bar->status_command = ((void*)0);

 char *VAR_7 = FUNC_3(VAR_5, VAR_4);
 if (FUNC_4(VAR_7, "-") != 0) {
  VAR_3->current_bar->status_command = VAR_7;
  FUNC_5(VAR_2, "Feeding bar with status command: %s",
    VAR_3->current_bar->status_command);
 } else {
  FUNC_2(VAR_7);
 }
 return FUNC_1(VAR_0, ((void*)0));
}
