
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int tiling_drag_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*,char**,int) ;

struct cmd_results *FUNC_3(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "tiling_drag_threshold", VAR_2, 1))) {
  return VAR_6;
 }

 char *VAR_7;
 int VAR_8 = FUNC_2(VAR_5[0], &VAR_7, 10);
 if (*VAR_7 != '\0' || VAR_8 < 0) {
  return FUNC_1(VAR_0, "Invalid threshold specified");
 }

 VAR_3->tiling_drag_threshold = VAR_8;

 return FUNC_1(VAR_1, ((void*)0));
}
