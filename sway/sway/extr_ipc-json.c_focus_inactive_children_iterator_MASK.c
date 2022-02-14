
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_node {size_t id; } ;
struct sway_output {struct sway_node node; } ;
struct focus_inactive_data {int * node; int * object; } ;
typedef int json_object ;
struct TYPE_2__ {int node; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (size_t) ;
 struct sway_output* FUNC_5 (struct sway_node*) ;
 int * FUNC_6 (struct sway_node*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_7(struct sway_node *VAR_1,
  void *VAR_2) {
 struct focus_inactive_data *VAR_3 = VAR_2;
 json_object *VAR_4 = VAR_3->object;
 if (VAR_3->node == &VAR_0->node) {
  struct sway_output *VAR_5 = FUNC_5(VAR_1);
  if (VAR_5 == ((void*)0)) {
   return;
  }
  size_t VAR_6 = VAR_5->node.id;
  int VAR_7 = FUNC_2(VAR_4);
  for (int VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {
   if ((size_t) FUNC_3(FUNC_1(VAR_4, VAR_8)) == VAR_6) {
    return;
   }
  }
  VAR_1 = &VAR_5->node;
 } else if (FUNC_6(VAR_1) != VAR_3->node) {
  return;
 }
 FUNC_0(VAR_4, FUNC_4(VAR_1->id));
}
