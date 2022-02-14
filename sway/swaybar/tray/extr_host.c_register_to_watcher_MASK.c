
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaybar_host {int watcher_interface; TYPE_1__* tray; int service; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ,char*,char*,int ,TYPE_1__*,char*,int ,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct swaybar_host *VAR_3) {

 int VAR_4 = FUNC_0(VAR_3->tray->bus, ((void*)0),
   VAR_3->watcher_interface, VAR_2, VAR_3->watcher_interface,
   "RegisterStatusNotifierHost", ((void*)0), ((void*)0), "s", VAR_3->service);
 if (VAR_4 < 0) {
  FUNC_2(VAR_0, "Failed to send register call: %s", FUNC_1(-VAR_4));
  return 0;
 }

 VAR_4 = FUNC_0(VAR_3->tray->bus, ((void*)0),
   VAR_3->watcher_interface, VAR_2,
   "org.freedesktop.DBus.Properties", "Get",
   VAR_1, VAR_3->tray, "ss",
   VAR_3->watcher_interface, "RegisteredStatusNotifierItems");
 if (VAR_4 < 0) {
  FUNC_2(VAR_0, "Failed to get registered SNIs: %s", FUNC_1(-VAR_4));
 }

 return VAR_4 >= 0;
}
