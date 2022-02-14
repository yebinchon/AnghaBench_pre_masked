
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct swaybar_tray {int bar; TYPE_1__* items; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_3__ {int * items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (int *,char*,char**) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_3, void *VAR_4,
  sd_bus_error *VAR_5) {
 char *VAR_6;
 int VAR_7 = FUNC_3(VAR_3, "s", &VAR_6);
 if (VAR_7 < 0) {
  FUNC_6(VAR_0, "Failed to parse unregister SNI message: %s", FUNC_5(-VAR_7));
 }

 struct swaybar_tray *VAR_8 = VAR_4;
 int VAR_9 = FUNC_2(VAR_8->items, VAR_2, VAR_6);
 if (VAR_9 != -1) {
  FUNC_6(VAR_1, "Unregistering Status Notifier Item '%s'", VAR_6);
  FUNC_0(VAR_8->items->items[VAR_9]);
  FUNC_1(VAR_8->items, VAR_9);
  FUNC_4(VAR_8->bar);
 }
 return VAR_7;
}
