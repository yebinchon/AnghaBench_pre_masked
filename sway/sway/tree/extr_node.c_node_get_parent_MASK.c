
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {TYPE_1__* output; } ;
struct sway_node {int type; struct sway_workspace* sway_workspace; struct sway_container* sway_container; } ;
struct sway_container {TYPE_3__* workspace; TYPE_2__* parent; } ;
struct TYPE_8__ {struct sway_node node; } ;
struct TYPE_7__ {struct sway_node node; } ;
struct TYPE_6__ {struct sway_node node; } ;
struct TYPE_5__ {struct sway_node node; } ;






 TYPE_4__* VAR_0 ;

struct sway_node *FUNC_0(struct sway_node *VAR_1) {
 switch (VAR_1->type) {
 case 131: {
   struct sway_container *VAR_2 = VAR_1->sway_container;
   if (VAR_2->parent) {
    return &VAR_2->parent->node;
   }
   if (VAR_2->workspace) {
    return &VAR_2->workspace->node;
   }
  }
  return ((void*)0);
 case 128: {
   struct sway_workspace *VAR_3 = VAR_1->sway_workspace;
   if (VAR_3->output) {
    return &VAR_3->output->node;
   }
  }
  return ((void*)0);
 case 130:
  return &VAR_0->node;
 case 129:
  return ((void*)0);
 }
 return ((void*)0);
}
