
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_watcher {int interface; int bus; int items; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 char* FUNC_3 (size_t) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,char*,char*,char*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char**) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,size_t,char*,char const*,char const*) ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (int ,char*,char*) ;
 scalar_t__ FUNC_12 (struct swaybar_watcher*) ;

__attribute__((used)) static int FUNC_13(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
 char *VAR_7, *VAR_8;
 int VAR_9 = FUNC_6(VAR_4, "s", &VAR_7);
 if (VAR_9 < 0) {
  FUNC_11(VAR_1, "Failed to parse register SNI message: %s", FUNC_10(-VAR_9));
  return VAR_9;
 }

 struct swaybar_watcher *VAR_10 = VAR_5;
 if (FUNC_12(VAR_10)) {
  VAR_8 = FUNC_9(VAR_7);
 } else {
  const char *VAR_11, *VAR_12;
  if (VAR_7[0] == '/') {
   VAR_11 = FUNC_5(VAR_4);
   VAR_12 = VAR_7;
  } else {
   VAR_11 = VAR_7;
   VAR_12 = "/StatusNotifierItem";
  }
  size_t VAR_13 = FUNC_8(((void*)0), 0, "%s%s", VAR_11, VAR_12) + 1;
  VAR_8 = FUNC_3(VAR_13);
  FUNC_8(VAR_8, VAR_13, "%s%s", VAR_11, VAR_12);
 }

 if (FUNC_2(VAR_10->items, VAR_2, VAR_8) == -1) {
  FUNC_11(VAR_0, "Registering Status Notifier Item '%s'", VAR_8);
  FUNC_1(VAR_10->items, VAR_8);
  FUNC_4(VAR_10->bus, VAR_3, VAR_10->interface,
    "StatusNotifierItemRegistered", "s", VAR_8);
 } else {
  FUNC_11(VAR_0, "Status Notifier Item '%s' already registered", VAR_8);
  FUNC_0(VAR_8);
 }

 return FUNC_7(VAR_4, "");
}
