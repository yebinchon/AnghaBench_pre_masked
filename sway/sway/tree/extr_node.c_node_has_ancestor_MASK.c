
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_node {scalar_t__ type; TYPE_1__* sway_container; } ;
struct TYPE_2__ {scalar_t__ fullscreen_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sway_node* FUNC_0 (struct sway_node*) ;

bool FUNC_1(struct sway_node *VAR_3, struct sway_node *VAR_4) {
 if (VAR_4->type == VAR_2 && VAR_3->type == VAR_1 &&
   VAR_3->sway_container->fullscreen_mode == VAR_0) {
  return 1;
 }
 struct sway_node *VAR_5 = FUNC_0(VAR_3);
 while (VAR_5) {
  if (VAR_5 == VAR_4) {
   return 1;
  }
  if (VAR_4->type == VAR_2 && VAR_5->type == VAR_1 &&
    VAR_5->sway_container->fullscreen_mode == VAR_0) {
   return 1;
  }
  VAR_5 = FUNC_0(VAR_5);
 }
 return 0;
}
