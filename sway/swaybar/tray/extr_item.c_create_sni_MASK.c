
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_tray {int dummy; } ;
struct swaybar_sni {char* interface; int new_status_slot; int new_attention_icon_slot; int new_icon_slot; int menu; int item_is_menu; int attention_icon_pixmap; int attention_icon_name; int icon_pixmap; int icon_name; int status; int icon_theme_path; void* path; void* service; void* watcher_id; struct swaybar_tray* tray; } ;


 struct swaybar_sni* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct swaybar_sni*,char*,char*,int *) ;
 int FUNC_2 (struct swaybar_sni*,int *,char*,int ) ;
 char* FUNC_3 (char*,char) ;
 void* FUNC_4 (char*) ;
 void* FUNC_5 (char*,int) ;

struct swaybar_sni *FUNC_6(char *VAR_3, struct swaybar_tray *VAR_4) {
 struct swaybar_sni *VAR_5 = FUNC_0(1, sizeof(struct swaybar_sni));
 if (!VAR_5) {
  return ((void*)0);
 }
 VAR_5->tray = VAR_4;
 VAR_5->watcher_id = FUNC_4(VAR_3);
 char *VAR_6 = FUNC_3(VAR_3, '/');
 if (!VAR_6) {
  VAR_5->service = FUNC_4(VAR_3);
  VAR_5->path = FUNC_4("/StatusNotifierItem");
  VAR_5->interface = "org.freedesktop.StatusNotifierItem";
 } else {
  VAR_5->service = FUNC_5(VAR_3, VAR_6 - VAR_3);
  VAR_5->path = FUNC_4(VAR_6);
  VAR_5->interface = "org.kde.StatusNotifierItem";
  FUNC_1(VAR_5, "IconThemePath", "s", &VAR_5->icon_theme_path);
 }



 FUNC_1(VAR_5, "Status", "s", &VAR_5->status);
 FUNC_1(VAR_5, "IconName", "s", &VAR_5->icon_name);
 FUNC_1(VAR_5, "IconPixmap", ((void*)0), &VAR_5->icon_pixmap);
 FUNC_1(VAR_5, "AttentionIconName", "s", &VAR_5->attention_icon_name);
 FUNC_1(VAR_5, "AttentionIconPixmap", ((void*)0), &VAR_5->attention_icon_pixmap);
 FUNC_1(VAR_5, "ItemIsMenu", "b", &VAR_5->item_is_menu);
 FUNC_1(VAR_5, "Menu", "o", &VAR_5->menu);

 FUNC_2(VAR_5, &VAR_5->new_icon_slot, "NewIcon", VAR_1);
 FUNC_2(VAR_5, &VAR_5->new_attention_icon_slot, "NewAttentionIcon",
   VAR_0);
 FUNC_2(VAR_5, &VAR_5->new_status_slot, "NewStatus", VAR_2);

 return VAR_5;
}
