
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int focus_follows_mouse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_2 (char*,char*) ;

struct cmd_results *FUNC_3(int VAR_7, char **VAR_8) {
 struct cmd_results *VAR_9 = ((void*)0);
 if ((VAR_9 = FUNC_0(VAR_7, "focus_follows_mouse", VAR_2, 1))) {
  return VAR_9;
 } else if(FUNC_2(VAR_8[0], "no") == 0) {
  VAR_6->focus_follows_mouse = VAR_4;
 } else if(FUNC_2(VAR_8[0], "yes") == 0) {
  VAR_6->focus_follows_mouse = VAR_5;
 } else if(FUNC_2(VAR_8[0], "always") == 0) {
  VAR_6->focus_follows_mouse = VAR_3;
 } else {
  return FUNC_1(VAR_0,
    "Expected 'focus_follows_mouse no|yes|always'");
 }
 return FUNC_1(VAR_1, ((void*)0));
}
