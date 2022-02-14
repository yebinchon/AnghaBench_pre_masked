
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; scalar_t__ using_criteria; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 struct cmd_results* FUNC_0 (int ,int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct sway_container*,char*) ;
 int FUNC_4 (struct sway_container*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char**,int) ;
 int VAR_2 ;
 int FUNC_7 (int ,int *) ;

struct cmd_results *FUNC_8(int VAR_3, char **VAR_4) {

 struct sway_container *VAR_5 = ((void*)0);
 if (VAR_1->handler_context.using_criteria) {
  VAR_5 = VAR_1->handler_context.container;
 }


 char *VAR_6 = ((void*)0);
 if (VAR_3 > 0) {
  VAR_6 = FUNC_6(VAR_4, VAR_3);
 }

 if (VAR_5 && VAR_6) {

  if (FUNC_3(VAR_5, VAR_6)) {
   FUNC_2(VAR_6);
  }
 } else if (VAR_5 && !VAR_6) {

  FUNC_1(VAR_5);
  FUNC_4(VAR_5);
 } else if (!VAR_5 && VAR_6) {

  FUNC_2(VAR_6);
 } else {

  FUNC_7(VAR_2, ((void*)0));
 }
 FUNC_5(VAR_6);

 return FUNC_0(VAR_0, ((void*)0));
}
