
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaybar_sni {int interface; int path; int service; TYPE_1__* tray; } ;
typedef int sd_bus_slot ;
typedef int sd_bus_message_handler_t ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int **,int ,int ,int ,char*,int ,struct swaybar_sni*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct swaybar_sni *VAR_1, sd_bus_slot **VAR_2,
  char *VAR_3, sd_bus_message_handler_t VAR_4) {
 int VAR_5 = FUNC_0(VAR_1->tray->bus, VAR_2, VAR_1->service, VAR_1->path,
   VAR_1->interface, VAR_3, VAR_4, VAR_1);
 if (VAR_5 < 0) {
  FUNC_2(VAR_0, "Failed to subscribe to signal %s: %s", VAR_3,
    FUNC_1(-VAR_5));
 }
}
