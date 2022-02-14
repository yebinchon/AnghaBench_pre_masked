
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {struct sway_output* output; } ;
struct sway_output {int dummy; } ;
struct sway_node {int type; struct sway_output* sway_output; TYPE_2__* sway_workspace; TYPE_1__* sway_container; } ;
struct TYPE_4__ {struct sway_output* output; } ;
struct TYPE_3__ {struct sway_workspace* workspace; } ;







struct sway_output *FUNC_0(struct sway_node *VAR_0) {
 switch (VAR_0->type) {
 case 131: {
  struct sway_workspace *VAR_1 = VAR_0->sway_container->workspace;
  return VAR_1 ? VAR_1->output : ((void*)0);
    }
 case 128:
  return VAR_0->sway_workspace->output;
 case 130:
  return VAR_0->sway_output;
 case 129:
  return ((void*)0);
 }
 return ((void*)0);
}
