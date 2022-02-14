
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat {int dummy; } ;
struct sway_node {scalar_t__ type; struct sway_container* sway_container; } ;
struct sway_container {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sway_node* FUNC_0 (struct sway_seat*) ;

struct sway_container *FUNC_1(struct sway_seat *VAR_1) {
 struct sway_node *VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 && VAR_2->type == VAR_0) {
  return VAR_2->sway_container;
 }
 return ((void*)0);
}
