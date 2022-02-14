
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_tray {int items; } ;
struct swaybar_sni {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct swaybar_sni* FUNC_0 (char*,struct swaybar_tray*) ;
 int FUNC_1 (int ,struct swaybar_sni*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct swaybar_tray *VAR_2, char *VAR_3) {
 int VAR_4 = FUNC_2(VAR_2->items, VAR_1, VAR_3);
 if (VAR_4 == -1) {
  FUNC_3(VAR_0, "Registering Status Notifier Item '%s'", VAR_3);
  struct swaybar_sni *VAR_5 = FUNC_0(VAR_3, VAR_2);
  if (VAR_5) {
   FUNC_1(VAR_2->items, VAR_5);
  }
 }
}
