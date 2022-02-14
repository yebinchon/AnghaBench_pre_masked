
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_seat {int dummy; } ;
struct sway_node {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_node* node; struct sway_seat* seat; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 struct cmd_results* FUNC_0 (int ,int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct sway_seat*) ;
 struct sway_node* FUNC_2 (struct sway_seat*,struct sway_node*) ;
 int FUNC_3 (struct sway_seat*,struct sway_node*) ;

__attribute__((used)) static struct cmd_results *FUNC_4(void) {
 struct sway_seat *VAR_2 = VAR_1->handler_context.seat;
 struct sway_node *VAR_3 = VAR_1->handler_context.node;
 struct sway_node *VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_2, VAR_4);
  FUNC_1(VAR_2);
 }
 return FUNC_0(VAR_0, ((void*)0));
}
