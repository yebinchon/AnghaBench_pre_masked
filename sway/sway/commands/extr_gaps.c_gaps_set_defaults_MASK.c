
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_3__ {int top; int right; int bottom; int left; } ;
struct TYPE_4__ {int gaps_inner; TYPE_1__ gaps_outer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char**,int) ;

__attribute__((used)) static struct cmd_results *FUNC_6(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = FUNC_0(VAR_5, "gaps", VAR_2, 2);
 if (VAR_7) {
  return VAR_7;
 }

 char *VAR_8;
 int VAR_9 = FUNC_5(VAR_6[1], &VAR_8, 10);
 if (FUNC_4(VAR_8) && FUNC_3(VAR_8, "px") != 0) {
  return FUNC_1(VAR_0, "Expected %s", VAR_4);
 }

 bool VAR_10 = 0;
 if (!FUNC_3(VAR_6[0], "inner")) {
  VAR_10 = 1;
  VAR_3->gaps_inner = (VAR_9 >= 0) ? VAR_9 : 0;
 } else {
  if (!FUNC_3(VAR_6[0], "outer") || !FUNC_3(VAR_6[0], "vertical")
    || !FUNC_3(VAR_6[0], "top")) {
   VAR_10 = 1;
   VAR_3->gaps_outer.top = VAR_9;
  }
  if (!FUNC_3(VAR_6[0], "outer") || !FUNC_3(VAR_6[0], "horizontal")
    || !FUNC_3(VAR_6[0], "right")) {
   VAR_10 = 1;
   VAR_3->gaps_outer.right = VAR_9;
  }
  if (!FUNC_3(VAR_6[0], "outer") || !FUNC_3(VAR_6[0], "vertical")
    || !FUNC_3(VAR_6[0], "bottom")) {
   VAR_10 = 1;
   VAR_3->gaps_outer.bottom = VAR_9;
  }
  if (!FUNC_3(VAR_6[0], "outer") || !FUNC_3(VAR_6[0], "horizontal")
    || !FUNC_3(VAR_6[0], "left")) {
   VAR_10 = 1;
   VAR_3->gaps_outer.left = VAR_9;
  }
 }
 if (!VAR_10) {
  return FUNC_1(VAR_0, "Expected %s", VAR_4);
 }

 FUNC_2();
 return FUNC_1(VAR_1, ((void*)0));
}
