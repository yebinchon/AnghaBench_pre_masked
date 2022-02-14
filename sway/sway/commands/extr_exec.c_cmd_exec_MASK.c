
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {scalar_t__ reloading; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char**) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,int) ;
 int FUNC_4 (int ,char*,char*) ;

struct cmd_results *FUNC_5(int VAR_4, char **VAR_5) {
 if (!VAR_3->active) return FUNC_1(VAR_0, ((void*)0));
 if (VAR_3->reloading) {
  char *VAR_6 = FUNC_3(VAR_5, VAR_4);
  FUNC_4(VAR_2, "Ignoring 'exec %s' due to reload", VAR_6);
  FUNC_2(VAR_6);
  return FUNC_1(VAR_1, ((void*)0));
 }
 return FUNC_0(VAR_4, VAR_5);
}
