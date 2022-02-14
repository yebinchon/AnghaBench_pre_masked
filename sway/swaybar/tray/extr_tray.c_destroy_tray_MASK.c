
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaybar_tray {int basedirs; int themes; int bus; int watcher_kde; int watcher_xdg; TYPE_1__* items; int host_kde; int host_xdg; } ;
struct TYPE_2__ {int length; int * items; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct swaybar_tray*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct swaybar_tray *VAR_0) {
 if (!VAR_0) {
  return;
 }
 FUNC_2(&VAR_0->host_xdg);
 FUNC_2(&VAR_0->host_kde);
 for (int VAR_1 = 0; VAR_1 < VAR_0->items->length; ++VAR_1) {
  FUNC_0(VAR_0->items->items[VAR_1]);
 }
 FUNC_5(VAR_0->items);
 FUNC_1(VAR_0->watcher_xdg);
 FUNC_1(VAR_0->watcher_kde);
 FUNC_6(VAR_0->bus);
 FUNC_3(VAR_0->themes, VAR_0->basedirs);
 FUNC_4(VAR_0);
}
