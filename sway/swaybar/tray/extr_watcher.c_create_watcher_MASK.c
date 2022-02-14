
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_watcher {int * interface; scalar_t__ version; void* items; void* hosts; int * bus; } ;
typedef int sd_bus_slot ;
typedef int sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 struct swaybar_watcher* FUNC_0 (int,int) ;
 void* FUNC_1 () ;
 int FUNC_2 (struct swaybar_watcher*) ;
 int VAR_2 ;
 int * FUNC_3 (size_t) ;
 int VAR_3 ;
 int FUNC_4 (int *,int **,int ,int *,int ,struct swaybar_watcher*) ;
 int FUNC_5 (int *,int **,char*,char*,char*,char*,int ,struct swaybar_watcher*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t,char*,char*) ;
 int * FUNC_10 (int) ;
 int FUNC_11 (int ,char*,int *) ;
 int VAR_4 ;

struct swaybar_watcher *FUNC_12(char *VAR_5, sd_bus *VAR_6) {
 struct swaybar_watcher *VAR_7 =
  FUNC_0(1, sizeof(struct swaybar_watcher));
 if (!VAR_7) {
  return ((void*)0);
 }

 size_t VAR_8 = FUNC_9(((void*)0), 0, "org.%s.StatusNotifierWatcher", VAR_5) + 1;
 VAR_7->interface = FUNC_3(VAR_8);
 FUNC_9(VAR_7->interface, VAR_8, "org.%s.StatusNotifierWatcher", VAR_5);

 sd_bus_slot *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 int VAR_11 = FUNC_4(VAR_6, &VAR_10, VAR_3,
   VAR_7->interface, VAR_4, VAR_7);
 if (VAR_11 < 0) {
  FUNC_11(VAR_1, "Failed to add object vtable: %s", FUNC_10(-VAR_11));
  goto error;
 }

 VAR_11 = FUNC_5(VAR_6, &VAR_9, "org.freedesktop.DBus",
   "/org/freedesktop/DBus", "org.freedesktop.DBus",
   "NameOwnerChanged", VAR_2, VAR_7);
 if (VAR_11 < 0) {
  FUNC_11(VAR_1, "Failed to subscribe to unregistering events: %s",
    FUNC_10(-VAR_11));
  goto error;
 }

 VAR_11 = FUNC_6(VAR_6, VAR_7->interface, 0);
 if (VAR_11 < 0) {
  FUNC_11(VAR_1, "Failed to acquire service name: %s", FUNC_10(-VAR_11));
  goto error;
 }

 FUNC_7(VAR_9, 0);
 FUNC_7(VAR_10, 0);

 VAR_7->bus = VAR_6;
 VAR_7->hosts = FUNC_1();
 VAR_7->items = FUNC_1();
 VAR_7->version = 0;
 FUNC_11(VAR_0, "Registered %s", VAR_7->interface);
 return VAR_7;
error:
 FUNC_8(VAR_9);
 FUNC_8(VAR_10);
 FUNC_2(VAR_7);
 return ((void*)0);
}
