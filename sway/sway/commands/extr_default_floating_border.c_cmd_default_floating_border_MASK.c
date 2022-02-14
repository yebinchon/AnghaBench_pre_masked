
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int floating_border_thickness; int floating_border; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_3 (char*,char*) ;

struct cmd_results *FUNC_4(int VAR_7, char **VAR_8) {
 struct cmd_results *VAR_9 = ((void*)0);
 if ((VAR_9 = FUNC_1(VAR_7, "default_floating_border",
     VAR_5, 1))) {
  return VAR_9;
 }

 if (FUNC_3(VAR_8[0], "none") == 0) {
  VAR_6->floating_border = VAR_0;
 } else if (FUNC_3(VAR_8[0], "normal") == 0) {
  VAR_6->floating_border = VAR_1;
 } else if (FUNC_3(VAR_8[0], "pixel") == 0) {
  VAR_6->floating_border = VAR_2;
 } else {
  return FUNC_2(VAR_3,
    "Expected 'default_floating_border <none|normal|pixel>' "
    "or 'default_floating_border <normal|pixel> <px>'");
 }
 if (VAR_7 == 2) {
  VAR_6->floating_border_thickness = FUNC_0(VAR_8[1]);
 }

 return FUNC_2(VAR_4, ((void*)0));
}
