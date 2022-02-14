
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {scalar_t__ reading; } ;


 int VAR_0 ;
 struct cmd_results* FUNC_0 (int,char**) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;

struct cmd_results *FUNC_3(int VAR_2, char **VAR_3) {
 FUNC_2(VAR_0, "Warning: new_window is deprecated. "
  "Use default_border instead.");
 if (VAR_1->reading) {
  FUNC_1("new_window is deprecated. "
   "Use default_border instead.");
 }
 return FUNC_0(VAR_2, VAR_3);
}
