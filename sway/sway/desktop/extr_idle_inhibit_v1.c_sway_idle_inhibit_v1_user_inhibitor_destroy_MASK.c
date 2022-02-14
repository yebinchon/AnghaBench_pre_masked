
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_idle_inhibitor_v1 {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_idle_inhibitor_v1*) ;
 int FUNC_1 (int,char*) ;

void FUNC_2(
  struct sway_idle_inhibitor_v1 *VAR_1) {
 if (!VAR_1) {
  return;
 }
 if (!FUNC_1(VAR_1->mode != VAR_0,
    "User should not be able to destroy application inhibitor")) {
  return;
 }
 FUNC_0(VAR_1);
}
