
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {scalar_t__ reloading; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,int ,...) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_2 (int,char**) ;
 struct cmd_results* FUNC_3 (int,char**) ;

struct cmd_results *FUNC_4(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = FUNC_0(VAR_5, "gaps", VAR_1, 2);
 if (VAR_7) {
  return VAR_7;
 }

 bool VAR_8 = !VAR_2->active || VAR_2->reloading;

 if (VAR_5 == 2) {
  return FUNC_2(VAR_5, VAR_6);
 }
 if (VAR_5 == 4 && !VAR_8) {
  return FUNC_3(VAR_5, VAR_6);
 }
 if (VAR_8) {
  return FUNC_1(VAR_0, "Expected %s", VAR_3);
 }
 return FUNC_1(VAR_0, "Expected %s or %s",
   VAR_4, VAR_3);
}
