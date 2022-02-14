
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_sni {int status; int watcher_id; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char**) ;
 int FUNC_2 (struct swaybar_sni*) ;
 int FUNC_3 (struct swaybar_sni*,int *,char*) ;
 int FUNC_4 (struct swaybar_sni*,char*,char*,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ,char*) ;

__attribute__((used)) static int FUNC_8(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
 struct swaybar_sni *VAR_5 = VAR_3;
 int VAR_6 = FUNC_3(VAR_5, VAR_2, "status");
 if (VAR_6 == 1) {
  char *VAR_7;
  int VAR_8 = FUNC_1(VAR_2, "s", &VAR_7);
  if (VAR_8 < 0) {
   FUNC_7(VAR_1, "%s new status error: %s", VAR_5->watcher_id, FUNC_6(-VAR_6));
   VAR_6 = VAR_8;
  } else {
   FUNC_0(VAR_5->status);
   VAR_5->status = FUNC_5(VAR_7);
   FUNC_7(VAR_0, "%s has new status = '%s'", VAR_5->watcher_id, VAR_7);
   FUNC_2(VAR_5);
  }
 } else {
  FUNC_4(VAR_5, "Status", "s", &VAR_5->status);
 }

 return VAR_6;
}
