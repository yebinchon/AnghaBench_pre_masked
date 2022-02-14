
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int destroy; } ;
struct sway_node {int type; TYPE_1__ events; void* sway_root; int id; } ;
typedef enum sway_node_type { ____Placeholder_sway_node_type } sway_node_type ;


 int FUNC_0 (int *) ;

void FUNC_1(struct sway_node *VAR_0, enum sway_node_type VAR_1, void *VAR_2) {
 static size_t VAR_3 = 1;
 VAR_0->id = VAR_3++;
 VAR_0->type = VAR_1;
 VAR_0->sway_root = VAR_2;
 FUNC_0(&VAR_0->events.destroy);
}
