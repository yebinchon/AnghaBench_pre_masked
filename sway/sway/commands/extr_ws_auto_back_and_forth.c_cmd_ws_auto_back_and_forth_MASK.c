
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int auto_back_and_forth; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,int ) ;

struct cmd_results *FUNC_3(int VAR_3, char **VAR_4) {
 struct cmd_results *VAR_5 = ((void*)0);
 if ((VAR_5 = FUNC_0(VAR_3, "workspace_auto_back_and_forth", VAR_1, 1))) {
  return VAR_5;
 }
 VAR_2->auto_back_and_forth =
  FUNC_2(VAR_4[0], VAR_2->auto_back_and_forth);
 return FUNC_1(VAR_0, ((void*)0));
}
