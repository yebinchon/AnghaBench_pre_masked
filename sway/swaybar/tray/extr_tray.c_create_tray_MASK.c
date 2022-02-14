
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_tray {int basedirs; int themes; int host_kde; int host_xdg; int items; int * bus; void* watcher_kde; void* watcher_xdg; int fd; struct swaybar* bar; } ;
struct swaybar {int dummy; } ;
typedef int sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 struct swaybar_tray* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 void* FUNC_2 (char*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,struct swaybar_tray*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*,char*,char*,char*,int ,struct swaybar_tray*) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;

struct swaybar_tray *FUNC_10(struct swaybar *VAR_3) {
 FUNC_9(VAR_0, "Initializing tray");

 sd_bus *VAR_4;
 int VAR_5 = FUNC_7(&VAR_4);
 if (VAR_5 < 0) {
  FUNC_9(VAR_1, "Failed to connect to user bus: %s", FUNC_8(-VAR_5));
  return ((void*)0);
 }

 struct swaybar_tray *VAR_6 = FUNC_0(1, sizeof(struct swaybar_tray));
 if (!VAR_6) {
  return ((void*)0);
 }
 VAR_6->bar = VAR_3;
 VAR_6->bus = VAR_4;
 VAR_6->fd = FUNC_5(VAR_6->bus);

 VAR_6->watcher_xdg = FUNC_2("freedesktop", VAR_6->bus);
 VAR_6->watcher_kde = FUNC_2("kde", VAR_6->bus);

 VAR_5 = FUNC_6(VAR_4, ((void*)0), "org.freedesktop.DBus",
   "/org/freedesktop/DBus", "org.freedesktop.DBus",
   "NameOwnerChanged", VAR_2, VAR_6);
 if (VAR_5 < 0) {
  FUNC_9(VAR_1, "Failed to subscribe to unregistering events: %s",
    FUNC_8(-VAR_5));
 }

 VAR_6->items = FUNC_1();

 FUNC_3(&VAR_6->host_xdg, "freedesktop", VAR_6);
 FUNC_3(&VAR_6->host_kde, "kde", VAR_6);

 FUNC_4(&VAR_6->themes, &VAR_6->basedirs);

 return VAR_6;
}
