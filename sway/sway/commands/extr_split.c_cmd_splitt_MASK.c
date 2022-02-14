
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 struct cmd_results* FUNC_2 (scalar_t__) ;

struct cmd_results *FUNC_3(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "splitv", VAR_0, 0))) {
  return VAR_6;
 }

 struct sway_container *VAR_7 = VAR_3->handler_context.container;

 if (VAR_7 && FUNC_1(VAR_7) == VAR_2) {
  return FUNC_2(VAR_1);
 } else {
  return FUNC_2(VAR_2);
 }
}
