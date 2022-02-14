
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int focus_on_window_activation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_2 (char*,char*) ;

struct cmd_results *FUNC_3(int VAR_8, char **VAR_9) {
 struct cmd_results *VAR_10 = ((void*)0);
 if ((VAR_10 = FUNC_0(VAR_8, "focus_on_window_activation",
     VAR_2, 1))) {
  return VAR_10;
 }

 if (FUNC_2(VAR_9[0], "smart") == 0) {
  VAR_7->focus_on_window_activation = VAR_5;
 } else if (FUNC_2(VAR_9[0], "urgent") == 0) {
  VAR_7->focus_on_window_activation = VAR_6;
 } else if (FUNC_2(VAR_9[0], "focus") == 0) {
  VAR_7->focus_on_window_activation = VAR_3;
 } else if (FUNC_2(VAR_9[0], "none") == 0) {
  VAR_7->focus_on_window_activation = VAR_4;
 } else {
  return FUNC_1(VAR_0,
    "Expected "
    "'focus_on_window_activation smart|urgent|focus|none'");
 }

 return FUNC_1(VAR_1, ((void*)0));
}
