
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_sni {struct swaybar_sni* icon_theme_path; struct swaybar_sni* menu; int attention_icon_pixmap; struct swaybar_sni* attention_icon_name; int icon_pixmap; struct swaybar_sni* icon_name; struct swaybar_sni* status; struct swaybar_sni* path; struct swaybar_sni* service; struct swaybar_sni* watcher_id; int new_status_slot; int new_attention_icon_slot; int new_icon_slot; int icon; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct swaybar_sni*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct swaybar_sni *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_0(VAR_0->icon);

 FUNC_3(VAR_0->new_icon_slot);
 FUNC_3(VAR_0->new_attention_icon_slot);
 FUNC_3(VAR_0->new_status_slot);

 FUNC_1(VAR_0->watcher_id);
 FUNC_1(VAR_0->service);
 FUNC_1(VAR_0->path);
 FUNC_1(VAR_0->status);
 FUNC_1(VAR_0->icon_name);
 FUNC_2(VAR_0->icon_pixmap);
 FUNC_1(VAR_0->attention_icon_name);
 FUNC_2(VAR_0->attention_icon_pixmap);
 FUNC_1(VAR_0->menu);
 FUNC_1(VAR_0->icon_theme_path);
 FUNC_1(VAR_0);
}
