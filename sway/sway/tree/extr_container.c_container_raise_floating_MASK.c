
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {TYPE_1__* workspace; struct sway_container* parent; } ;
struct TYPE_2__ {int node; int floating; } ;


 scalar_t__ FUNC_0 (struct sway_container*) ;
 int FUNC_1 (int ,struct sway_container*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sway_container *VAR_0) {

 struct sway_container *VAR_1 = VAR_0;
 while (VAR_1->parent) {
  VAR_1 = VAR_1->parent;
 }
 if (FUNC_0(VAR_1) && VAR_1->workspace) {
  FUNC_1(VAR_1->workspace->floating, VAR_1);
  FUNC_2(&VAR_1->workspace->node);
 }
}
