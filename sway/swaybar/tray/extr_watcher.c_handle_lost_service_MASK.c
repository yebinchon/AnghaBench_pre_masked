
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct swaybar_watcher {TYPE_1__* hosts; int interface; int bus; TYPE_1__* items; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_3__ {int length; char** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int (*) (char*,char*),char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,char*,char*,char*) ;
 int FUNC_5 (int *,char*,char**,char**,char**) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int ,char*,char*) ;
 scalar_t__ FUNC_10 (struct swaybar_watcher*) ;

__attribute__((used)) static int FUNC_11(sd_bus_message *VAR_3,
  void *VAR_4, sd_bus_error *VAR_5) {
 char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9 = FUNC_5(VAR_3, "sss", &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_9(VAR_1, "Failed to parse owner change message: %s", FUNC_6(-VAR_9));
  return VAR_9;
 }

 if (!*VAR_8) {
  struct swaybar_watcher *VAR_10 = VAR_4;
  for (int VAR_11 = 0; VAR_11 < VAR_10->items->length; ++VAR_11) {
   char *VAR_12 = VAR_10->items->items[VAR_11];
   int VAR_13 = FUNC_10(VAR_10) ?
    FUNC_0(VAR_12, VAR_6) : FUNC_8(VAR_12, VAR_6, FUNC_7(VAR_6));
   if (VAR_13 == 0) {
    FUNC_9(VAR_0, "Unregistering Status Notifier Item '%s'", VAR_12);
    FUNC_2(VAR_10->items, VAR_11--);
    FUNC_4(VAR_10->bus, VAR_2, VAR_10->interface,
      "StatusNotifierItemUnregistered", "s", VAR_12);
    FUNC_1(VAR_12);
    if (FUNC_10(VAR_10)) {
     break;
    }
   }
  }

  int VAR_14 = FUNC_3(VAR_10->hosts, FUNC_0, VAR_6);
  if (VAR_14 != -1) {
   FUNC_9(VAR_0, "Unregistering Status Notifier Host '%s'", VAR_6);
   FUNC_1(VAR_10->hosts->items[VAR_14]);
   FUNC_2(VAR_10->hosts, VAR_14);
  }
 }

 return 0;
}
