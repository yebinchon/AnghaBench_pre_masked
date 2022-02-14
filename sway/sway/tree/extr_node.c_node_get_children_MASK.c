
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_node {int type; TYPE_2__* sway_workspace; TYPE_1__* sway_container; } ;
typedef int list_t ;
struct TYPE_4__ {int * tiling; } ;
struct TYPE_3__ {int * children; } ;







list_t *FUNC_0(struct sway_node *VAR_0) {
 switch (VAR_0->type) {
 case 131:
  return VAR_0->sway_container->children;
 case 128:
  return VAR_0->sway_workspace->tiling;
 case 130:
 case 129:
  return ((void*)0);
 }
 return ((void*)0);
}
