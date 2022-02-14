
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* graph; } ;
struct TYPE_5__ {scalar_t__ cc; scalar_t__ nbbs; scalar_t__ ebbs; scalar_t__ edges; scalar_t__ bbsum; } ;
typedef TYPE_2__ RSignItem ;



__attribute__((used)) static bool FUNC_0(RSignItem *VAR_0, RSignItem *VAR_1) {
 if (VAR_0->graph && VAR_1->graph) {
  if (VAR_0->graph->cc != VAR_1->graph->cc) {
   return 0;
  }
  if (VAR_0->graph->nbbs != VAR_1->graph->nbbs) {
   return 0;
  }
  if (VAR_0->graph->ebbs != VAR_1->graph->ebbs) {
   return 0;
  }
  if (VAR_0->graph->edges != VAR_1->graph->edges) {
   return 0;
  }
  if (VAR_0->graph->bbsum!= VAR_1->graph->bbsum) {
   return 0;
  }
  return 1;
 }
 return 0;
}
