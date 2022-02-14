
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {scalar_t__ scratchpad; TYPE_1__* workspace; int parent; } ;
struct TYPE_2__ {int floating; } ;


 int FUNC_0 (int ,struct sway_container*) ;

bool FUNC_1(struct sway_container *VAR_0) {
 if (!VAR_0->parent && VAR_0->workspace &&
   FUNC_0(VAR_0->workspace->floating, VAR_0) != -1) {
  return 1;
 }
 if (VAR_0->scratchpad) {
  return 1;
 }
 return 0;
}
