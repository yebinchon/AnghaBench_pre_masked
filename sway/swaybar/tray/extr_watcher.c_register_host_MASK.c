
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_watcher {int interface; int bus; int hosts; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,char*,char*,char*) ;
 int FUNC_3 (int *,char*,char**) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_8(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
 char *VAR_7;
 int VAR_8 = FUNC_3(VAR_4, "s", &VAR_7);
 if (VAR_8 < 0) {
  FUNC_7(VAR_1, "Failed to parse register host message: %s", FUNC_6(-VAR_8));
  return VAR_8;
 }

 struct swaybar_watcher *VAR_9 = VAR_5;
 if (FUNC_1(VAR_9->hosts, VAR_2, VAR_7) == -1) {
  FUNC_7(VAR_0, "Registering Status Notifier Host '%s'", VAR_7);
  FUNC_0(VAR_9->hosts, FUNC_5(VAR_7));
  FUNC_2(VAR_9->bus, VAR_3, VAR_9->interface,
    "StatusNotifierHostRegistered", "s", VAR_7);
 } else {
  FUNC_7(VAR_0, "Status Notifier Host '%s' already registered", VAR_7);
 }

 return FUNC_4(VAR_4, "");
}
