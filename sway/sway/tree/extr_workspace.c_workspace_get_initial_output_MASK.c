
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct workspace_config {TYPE_1__* outputs; } ;
struct sway_seat {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_node {scalar_t__ type; TYPE_4__* sway_container; TYPE_2__* sway_workspace; } ;
struct TYPE_12__ {struct sway_output* noop_output; TYPE_5__* outputs; int node; } ;
struct TYPE_11__ {struct sway_output** items; scalar_t__ length; } ;
struct TYPE_10__ {TYPE_3__* workspace; } ;
struct TYPE_9__ {struct sway_output* output; } ;
struct TYPE_8__ {struct sway_output* output; } ;
struct TYPE_7__ {int length; int * items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sway_seat* FUNC_0 () ;
 struct sway_output* FUNC_1 (int ) ;
 TYPE_6__* VAR_2 ;
 struct sway_node* FUNC_2 (struct sway_seat*,int *) ;
 struct workspace_config* FUNC_3 (char const*) ;

struct sway_output *FUNC_4(const char *VAR_3) {

 struct workspace_config *VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  for (int VAR_5 = 0; VAR_5 < VAR_4->outputs->length; VAR_5++) {
   struct sway_output *VAR_6 =
    FUNC_1(VAR_4->outputs->items[VAR_5]);
   if (VAR_6) {
    return VAR_6;
   }
  }
 }

 struct sway_seat *VAR_7 = FUNC_0();
 struct sway_node *VAR_8 = FUNC_2(VAR_7, &VAR_2->node);
 if (VAR_8 && VAR_8->type == VAR_1) {
  return VAR_8->sway_workspace->output;
 } else if (VAR_8 && VAR_8->type == VAR_0) {
  return VAR_8->sway_container->workspace->output;
 }

 return VAR_2->outputs->length ? VAR_2->outputs->items[0] : VAR_2->noop_output;
}
