
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_node {scalar_t__ type; TYPE_1__* sway_container; } ;
struct TYPE_2__ {scalar_t__ view; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct sway_node *VAR_1) {
 return VAR_1->type == VAR_0 && VAR_1->sway_container->view;
}
