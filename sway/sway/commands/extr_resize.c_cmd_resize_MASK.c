
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_container {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {struct sway_container* container; } ;
struct TYPE_8__ {TYPE_2__ handler_context; } ;
struct TYPE_7__ {TYPE_1__* outputs; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int,char**,int) ;
 struct cmd_results* FUNC_2 (int,char**) ;
 struct cmd_results* FUNC_3 (int ,char const*) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*) ;

struct cmd_results *FUNC_5(int VAR_4, char **VAR_5) {
 if (!VAR_3->outputs->length) {
  return FUNC_3(VAR_0,
    "Can't run this command while there's no outputs connected.");
 }
 struct sway_container *VAR_6 = VAR_2->handler_context.container;
 if (!VAR_6) {
  return FUNC_3(VAR_0, "Cannot resize nothing");
 }

 struct cmd_results *VAR_7;
 if ((VAR_7 = FUNC_0(VAR_4, "resize", VAR_1, 2))) {
  return VAR_7;
 }

 if (FUNC_4(VAR_5[0], "set") == 0) {
  return FUNC_2(VAR_4 - 1, &VAR_5[1]);
 }
 if (FUNC_4(VAR_5[0], "grow") == 0) {
  return FUNC_1(VAR_4 - 1, &VAR_5[1], 1);
 }
 if (FUNC_4(VAR_5[0], "shrink") == 0) {
  return FUNC_1(VAR_4 - 1, &VAR_5[1], -1);
 }

 const char VAR_8[] = "Expected 'resize <shrink|grow> "
  "<width|height|up|down|left|right> [<amount>] [px|ppt]'";

 return FUNC_3(VAR_0, VAR_8);
}
