
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int default_layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_2 (char*,char*) ;

struct cmd_results *FUNC_3(int VAR_7, char **VAR_8) {
 struct cmd_results *VAR_9 = ((void*)0);
 if ((VAR_9 = FUNC_0(VAR_7, "workspace_layout", VAR_2, 1))) {
  return VAR_9;
 }
 if (FUNC_2(VAR_8[0], "default") == 0) {
  VAR_6->default_layout = VAR_3;
 } else if (FUNC_2(VAR_8[0], "stacking") == 0) {
  VAR_6->default_layout = VAR_4;
 } else if (FUNC_2(VAR_8[0], "tabbed") == 0) {
  VAR_6->default_layout = VAR_5;
 } else {
  return FUNC_1(VAR_0,
    "Expected 'workspace_layout <default|stacking|tabbed>'");
 }
 return FUNC_1(VAR_1, ((void*)0));
}
