
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container_state {scalar_t__ content_x; scalar_t__ content_y; scalar_t__ content_width; scalar_t__ content_height; } ;
struct sway_transaction_instruction {struct sway_container_state container_state; } ;
struct sway_node {TYPE_2__* sway_container; scalar_t__ destroying; } ;
struct TYPE_4__ {TYPE_1__* view; struct sway_container_state current; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_node*) ;

__attribute__((used)) static bool FUNC_1(struct sway_node *VAR_1,
  struct sway_transaction_instruction *VAR_2) {
 if (!FUNC_0(VAR_1)) {
  return 0;
 }
 if (VAR_1->destroying) {
  return 0;
 }
 struct sway_container_state *VAR_3 = &VAR_1->sway_container->current;
 struct sway_container_state *VAR_4 = &VAR_2->container_state;
 if (VAR_3->content_width == VAR_4->content_width &&
   VAR_3->content_height == VAR_4->content_height) {
  return 0;
 }
 return 1;
}
