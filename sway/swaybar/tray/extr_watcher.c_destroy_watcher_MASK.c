
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_watcher {struct swaybar_watcher* interface; int items; int hosts; } ;


 int FUNC_0 (struct swaybar_watcher*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct swaybar_watcher *VAR_0) {
 if (!VAR_0) {
  return;
 }
 FUNC_1(VAR_0->hosts);
 FUNC_1(VAR_0->items);
 FUNC_0(VAR_0->interface);
 FUNC_0(VAR_0);
}
