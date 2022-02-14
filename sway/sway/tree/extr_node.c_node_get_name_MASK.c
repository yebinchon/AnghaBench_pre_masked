
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_node {int type; TYPE_4__* sway_container; TYPE_3__* sway_workspace; TYPE_2__* sway_output; } ;
struct TYPE_8__ {char* title; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_6__ {TYPE_1__* wlr_output; } ;
struct TYPE_5__ {char* name; } ;







char *FUNC_0(struct sway_node *VAR_0) {
 switch (VAR_0->type) {
 case 129:
  return "root";
 case 130:
  return VAR_0->sway_output->wlr_output->name;
 case 128:
  return VAR_0->sway_workspace->name;
 case 131:
  return VAR_0->sway_container->title;
 }
 return ((void*)0);
}
