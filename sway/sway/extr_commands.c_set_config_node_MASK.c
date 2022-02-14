
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_node {int type; int * sway_workspace; TYPE_1__* sway_container; } ;
struct TYPE_5__ {int * workspace; TYPE_1__* container; struct sway_node* node; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;
struct TYPE_4__ {int * workspace; } ;






 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sway_node *VAR_1) {
 VAR_0->handler_context.node = VAR_1;
 VAR_0->handler_context.container = ((void*)0);
 VAR_0->handler_context.workspace = ((void*)0);

 if (VAR_1 == ((void*)0)) {
  return;
 }

 switch (VAR_1->type) {
 case 131:
  VAR_0->handler_context.container = VAR_1->sway_container;
  VAR_0->handler_context.workspace = VAR_1->sway_container->workspace;
  break;
 case 128:
  VAR_0->handler_context.workspace = VAR_1->sway_workspace;
  break;
 case 129:
 case 130:
  break;
 }
}
