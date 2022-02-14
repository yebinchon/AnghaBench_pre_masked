
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_tray {int bus; void* watcher_kde; void* watcher_xdg; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int VAR_0 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char*,char**,char**,char**) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_1,
  void *VAR_2, sd_bus_error *VAR_3) {
 char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7 = FUNC_1(VAR_1, "sss", &VAR_4, &VAR_5, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_4(VAR_0, "Failed to parse owner change message: %s", FUNC_3(-VAR_7));
  return VAR_7;
 }

 if (!*VAR_6) {
  struct swaybar_tray *VAR_8 = VAR_2;
  if (FUNC_2(VAR_4, "org.freedesktop.StatusNotifierWatcher") == 0) {
   VAR_8->watcher_xdg = FUNC_0("freedesktop", VAR_8->bus);
  } else if (FUNC_2(VAR_4, "org.kde.StatusNotifierWatcher") == 0) {
   VAR_8->watcher_kde = FUNC_0("kde", VAR_8->bus);
  }
 }

 return 0;
}
