
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_tray {int dummy; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int VAR_0 ;
 int FUNC_0 (struct swaybar_tray*,char*) ;
 int FUNC_1 (int *,char*,char**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_1, void *VAR_2,
  sd_bus_error *VAR_3) {
 char *VAR_4;
 int VAR_5 = FUNC_1(VAR_1, "s", &VAR_4);
 if (VAR_5 < 0) {
  FUNC_3(VAR_0, "Failed to parse register SNI message: %s", FUNC_2(-VAR_5));
 }

 struct swaybar_tray *VAR_6 = VAR_2;
 FUNC_0(VAR_6, VAR_4);

 return VAR_5;
}
