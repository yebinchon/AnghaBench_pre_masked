
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
typedef enum xwayland_mode { ____Placeholder_xwayland_mode } xwayland_mode ;
struct TYPE_2__ {int xwayland; scalar_t__ reloading; } ;


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
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;

struct cmd_results *FUNC_5(int VAR_8, char **VAR_9) {
 struct cmd_results *VAR_10 = ((void*)0);
 if ((VAR_10 = FUNC_0(VAR_8, "xwayland", VAR_2, 1))) {
  return VAR_10;
 }
 FUNC_4(VAR_3, "Ignoring `xwayland` command, "
  "sway hasn't been built with Xwayland support");


 return FUNC_1(VAR_1, ((void*)0));
}
