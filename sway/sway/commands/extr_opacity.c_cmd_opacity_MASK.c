
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {float alpha; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (struct sway_container*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 float FUNC_4 (char*,char**) ;

struct cmd_results *FUNC_5(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "opacity", VAR_3, 1))) {
  return VAR_7;
 }

 struct sway_container *VAR_8 = VAR_4->handler_context.container;

 if (VAR_8 == ((void*)0)) {
  return FUNC_1(VAR_0, "No current container");
 }

 char *VAR_9;
 float VAR_10 = FUNC_4(VAR_5 == 1 ? VAR_6[0] : VAR_6[1], &VAR_9);
 if (*VAR_9) {
  return FUNC_1(VAR_1, "opacity float invalid");
 }

 if (!FUNC_3(VAR_6[0], "plus")) {
  VAR_10 = VAR_8->alpha + VAR_10;
 } else if (!FUNC_3(VAR_6[0], "minus")) {
  VAR_10 = VAR_8->alpha - VAR_10;
 } else if (VAR_5 > 1 && FUNC_3(VAR_6[0], "set")) {
  return FUNC_1(VAR_1,
    "Expected: set|plus|minus <0..1>: %s", VAR_6[0]);
 }

 if (VAR_10 < 0 || VAR_10 > 1) {
  return FUNC_1(VAR_0, "opacity value out of bounds");
 }

 VAR_8->alpha = VAR_10;
 FUNC_2(VAR_8);
 return FUNC_1(VAR_2, ((void*)0));
}
