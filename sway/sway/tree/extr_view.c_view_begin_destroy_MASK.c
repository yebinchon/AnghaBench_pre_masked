
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_view {int destroying; int container; int * surface; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sway_view*) ;

void FUNC_2(struct sway_view *VAR_0) {
 if (!FUNC_0(VAR_0->surface == ((void*)0), "Tried to destroy a mapped view")) {
  return;
 }
 VAR_0->destroying = 1;

 if (!VAR_0->container) {
  FUNC_1(VAR_0);
 }
}
