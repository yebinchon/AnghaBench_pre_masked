
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_seat {int dummy; } ;
struct sway_node {scalar_t__ type; struct sway_workspace* sway_workspace; TYPE_1__* sway_container; } ;
struct TYPE_4__ {int node; } ;
struct TYPE_3__ {struct sway_workspace* workspace; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct sway_node* FUNC_0 (struct sway_seat*,int *) ;

struct sway_workspace *FUNC_1(struct sway_seat *VAR_3) {
 struct sway_node *VAR_4 = FUNC_0(VAR_3, &VAR_2->node);
 if (!VAR_4) {
  return ((void*)0);
 }
 if (VAR_4->type == VAR_0) {
  return VAR_4->sway_container->workspace;
 }
 if (VAR_4->type == VAR_1) {
  return VAR_4->sway_workspace;
 }
 return ((void*)0);
}
