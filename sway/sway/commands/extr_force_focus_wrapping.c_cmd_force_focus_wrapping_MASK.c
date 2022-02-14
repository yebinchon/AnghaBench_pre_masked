
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {scalar_t__ focus_wrapping; scalar_t__ reading; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*) ;

struct cmd_results *FUNC_5(int VAR_6, char **VAR_7) {
 FUNC_4(VAR_2, "Warning: force_focus_wrapping is deprecated. "
  "Use focus_wrapping instead.");
 if (VAR_5->reading) {
  FUNC_2("force_focus_wrapping is deprecated. "
   "Use focus_wrapping instead.");
 }

 struct cmd_results *VAR_8 =
  FUNC_0(VAR_6, "force_focus_wrapping", VAR_1, 1);
 if (VAR_8) {
  return VAR_8;
 }

 if (FUNC_3(VAR_7[0], VAR_5->focus_wrapping == VAR_3)) {
  VAR_5->focus_wrapping = VAR_3;
 } else {
  VAR_5->focus_wrapping = VAR_4;
 }

 return FUNC_1(VAR_0, ((void*)0));
}
