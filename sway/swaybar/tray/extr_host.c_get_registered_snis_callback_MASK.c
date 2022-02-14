
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct swaybar_tray {int dummy; } ;
typedef int sd_bus_message ;
struct TYPE_5__ {int message; } ;
typedef TYPE_1__ sd_bus_error ;


 int VAR_0 ;
 int FUNC_0 (struct swaybar_tray*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char,int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char***) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(sd_bus_message *VAR_1, void *VAR_2,
  sd_bus_error *VAR_3) {
 if (FUNC_4(VAR_1, ((void*)0))) {
  sd_bus_error VAR_4 = *FUNC_3(VAR_1);
  FUNC_7(VAR_0, "Failed to get registered SNIs: %s", VAR_4.message);
  return -FUNC_1(&VAR_4);
 }

 int VAR_5 = FUNC_2(VAR_1, 'v', ((void*)0));
 if (VAR_5 < 0) {
  FUNC_7(VAR_0, "Failed to read registered SNIs: %s", FUNC_6(-VAR_5));
  return VAR_5;
 }

 char **VAR_6;
 VAR_5 = FUNC_5(VAR_1, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_7(VAR_0, "Failed to read registered SNIs: %s", FUNC_6(-VAR_5));
  return VAR_5;
 }

 if (VAR_6) {
  struct swaybar_tray *VAR_7 = VAR_2;
  for (char **VAR_8 = VAR_6; *VAR_8; ++VAR_8) {
   FUNC_0(VAR_7, *VAR_8);
  }
 }

 return VAR_5;
}
