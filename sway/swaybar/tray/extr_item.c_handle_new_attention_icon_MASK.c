
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_sni {int attention_icon_pixmap; int attention_icon_name; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (struct swaybar_sni*,int *,char*) ;
 int FUNC_1 (struct swaybar_sni*,char*,char*,int *) ;

__attribute__((used)) static int FUNC_2(sd_bus_message *VAR_0, void *VAR_1,
  sd_bus_error *VAR_2) {
 struct swaybar_sni *VAR_3 = VAR_1;
 FUNC_1(VAR_3, "AttentionIconName", "s", &VAR_3->attention_icon_name);
 FUNC_1(VAR_3, "AttentionIconPixmap", ((void*)0), &VAR_3->attention_icon_pixmap);
 return FUNC_0(VAR_3, VAR_0, "attention icon");
}
