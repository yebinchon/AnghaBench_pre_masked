
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_sni {char* status; scalar_t__ icon_pixmap; scalar_t__ icon_name; scalar_t__ attention_icon_pixmap; scalar_t__ attention_icon_name; } ;



__attribute__((used)) static bool FUNC_0(struct swaybar_sni *VAR_0) {
 return VAR_0->status && (VAR_0->status[0] == 'N' ?
   VAR_0->attention_icon_name || VAR_0->attention_icon_pixmap :
   VAR_0->icon_name || VAR_0->icon_pixmap);
}
