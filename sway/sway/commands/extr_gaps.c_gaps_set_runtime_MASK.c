
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int top; int right; int bottom; int left; } ;
struct gaps_data {int inner; int amount; int operation; TYPE_2__ outer; int member_0; } ;
struct cmd_results {int dummy; } ;
struct TYPE_8__ {int workspace; } ;
struct TYPE_10__ {TYPE_3__ handler_context; } ;
struct TYPE_9__ {TYPE_1__* outputs; } ;
struct TYPE_6__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_5__* VAR_6 ;
 int FUNC_2 (int ,struct gaps_data*) ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_3 (int (*) (int ,struct gaps_data*),struct gaps_data*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char**,int) ;

__attribute__((used)) static struct cmd_results *FUNC_7(int VAR_9, char **VAR_10) {
 struct cmd_results *VAR_11 = FUNC_0(VAR_9, "gaps", VAR_2, 4);
 if (VAR_11) {
  return VAR_11;
 }
 if (!VAR_8->outputs->length) {
  return FUNC_1(VAR_0,
    "Can't run this command while there's no outputs connected.");
 }

 struct gaps_data VAR_12 = {0};

 if (FUNC_4(VAR_10[0], "inner") == 0) {
  VAR_12.inner = 1;
 } else {
  VAR_12.outer.top = !FUNC_4(VAR_10[0], "outer") ||
   !FUNC_4(VAR_10[0], "vertical") || !FUNC_4(VAR_10[0], "top");
  VAR_12.outer.right = !FUNC_4(VAR_10[0], "outer") ||
   !FUNC_4(VAR_10[0], "horizontal") || !FUNC_4(VAR_10[0], "right");
  VAR_12.outer.bottom = !FUNC_4(VAR_10[0], "outer") ||
   !FUNC_4(VAR_10[0], "vertical") || !FUNC_4(VAR_10[0], "bottom");
  VAR_12.outer.left = !FUNC_4(VAR_10[0], "outer") ||
   !FUNC_4(VAR_10[0], "horizontal") || !FUNC_4(VAR_10[0], "left");
 }
 if (!VAR_12.inner && !VAR_12.outer.top && !VAR_12.outer.right &&
   !VAR_12.outer.bottom && !VAR_12.outer.left) {
  return FUNC_1(VAR_0, "Expected %s", VAR_7);
 }

 bool VAR_13;
 if (FUNC_4(VAR_10[1], "current") == 0) {
  VAR_13 = 0;
 } else if (FUNC_4(VAR_10[1], "all") == 0) {
  VAR_13 = 1;
 } else {
  return FUNC_1(VAR_0, "Expected %s", VAR_7);
 }

 if (FUNC_4(VAR_10[2], "set") == 0) {
  VAR_12.operation = VAR_4;
 } else if (FUNC_4(VAR_10[2], "plus") == 0) {
  VAR_12.operation = VAR_3;
 } else if (FUNC_4(VAR_10[2], "minus") == 0) {
  VAR_12.operation = VAR_5;
 } else {
  return FUNC_1(VAR_0, "Expected %s", VAR_7);
 }

 char *VAR_14;
 VAR_12.amount = FUNC_6(VAR_10[3], &VAR_14, 10);
 if (FUNC_5(VAR_14) && FUNC_4(VAR_14, "px") != 0) {
  return FUNC_1(VAR_0, "Expected %s", VAR_7);
 }

 if (VAR_13) {
  FUNC_3(FUNC_2, &VAR_12);
 } else {
  FUNC_2(VAR_6->handler_context.workspace, &VAR_12);
 }

 return FUNC_1(VAR_1, ((void*)0));
}
