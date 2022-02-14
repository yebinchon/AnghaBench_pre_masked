
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view_child {int * impl; } ;
struct TYPE_2__ {int link; } ;
struct sway_subsurface {TYPE_1__ destroy; } ;


 int FUNC_0 (struct sway_subsurface*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sway_view_child *VAR_1) {
 if (!FUNC_1(VAR_1->impl == &VAR_0,
   "Expected a subsurface")) {
  return;
 }
 struct sway_subsurface *VAR_2 = (struct sway_subsurface *)VAR_1;
 FUNC_2(&VAR_2->destroy.link);
 FUNC_0(VAR_2);
}
