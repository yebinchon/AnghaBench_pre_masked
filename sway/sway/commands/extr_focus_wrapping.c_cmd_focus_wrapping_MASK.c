
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {scalar_t__ focus_wrapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;

struct cmd_results *FUNC_4(int VAR_7, char **VAR_8) {
 struct cmd_results *VAR_9 = ((void*)0);
 if ((VAR_9 = FUNC_0(VAR_7, "focus_wrapping", VAR_1, 1))) {
  return VAR_9;
 }

 if (FUNC_3(VAR_8[0], "force") == 0) {
  VAR_6->focus_wrapping = VAR_2;
 } else if (FUNC_3(VAR_8[0], "workspace") == 0) {
  VAR_6->focus_wrapping = VAR_4;
 } else if (FUNC_2(VAR_8[0], VAR_6->focus_wrapping == VAR_5)) {
  VAR_6->focus_wrapping = VAR_5;
 } else {
  VAR_6->focus_wrapping = VAR_3;
 }

 return FUNC_1(VAR_0, ((void*)0));
}
