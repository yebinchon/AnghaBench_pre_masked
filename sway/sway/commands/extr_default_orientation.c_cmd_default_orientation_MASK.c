
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int default_orientation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_2 (char*,char*) ;

struct cmd_results *FUNC_3(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_0(VAR_6, "default_orientation", VAR_2, 1))) {
  return VAR_8;
 }
 if (FUNC_2(VAR_7[0], "horizontal") == 0) {
  VAR_5->default_orientation = VAR_3;
 } else if (FUNC_2(VAR_7[0], "vertical") == 0) {
  VAR_5->default_orientation = VAR_4;
 } else if (FUNC_2(VAR_7[0], "auto") == 0) {

 } else {
  return FUNC_1(VAR_0,
    "Expected 'orientation <horizontal|vertical|auto>'");
 }
 return FUNC_1(VAR_1, ((void*)0));
}
