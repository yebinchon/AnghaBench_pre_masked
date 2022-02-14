
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct swaybar_sni {char* status; char* attention_icon_name; char* icon_name; int icon; TYPE_2__* icon_pixmap; TYPE_2__* attention_icon_pixmap; int max_size; int min_size; scalar_t__ icon_theme_path; TYPE_1__* tray; } ;
struct swaybar_pixmap {scalar_t__ size; int pixels; } ;
struct TYPE_9__ {int length; struct swaybar_pixmap** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_8__ {int themes; int basedirs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 () ;
 char* FUNC_5 (int ,TYPE_2__*,char*,int,char*,int *,int *) ;
 char* FUNC_6 (char*,scalar_t__,int *,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(struct swaybar_sni *VAR_2, char *VAR_3,
  int VAR_4) {
 char *VAR_5 = VAR_2->status[0] == 'N' ?
  VAR_2->attention_icon_name : VAR_2->icon_name;
 if (VAR_5) {
  list_t *VAR_6 = FUNC_4();
  FUNC_9(VAR_6, VAR_2->tray->basedirs);
  if (VAR_2->icon_theme_path) {
   FUNC_8(VAR_6, VAR_2->icon_theme_path);
  }
  char *VAR_7 = FUNC_5(VAR_2->tray->themes, VAR_6,
    VAR_5, VAR_4, VAR_3,
    &VAR_2->min_size, &VAR_2->max_size);
  FUNC_10(VAR_6);
  if (!VAR_7 && VAR_2->icon_theme_path) {
   VAR_7 = FUNC_6(VAR_5, VAR_2->icon_theme_path,
     &VAR_2->min_size, &VAR_2->max_size);
  }
  if (VAR_7) {
   FUNC_3(VAR_2->icon);
   VAR_2->icon = FUNC_11(VAR_7);
   FUNC_7(VAR_7);
   return;
  }
 }

 list_t *VAR_8 = VAR_2->status[0] == 'N' ?
  VAR_2->attention_icon_pixmap : VAR_2->icon_pixmap;
 if (VAR_8) {
  struct swaybar_pixmap *VAR_9 = ((void*)0);
  int VAR_10 = VAR_1;
  for (int VAR_11 = 0; VAR_11 < VAR_8->length; ++VAR_11) {
   struct swaybar_pixmap *VAR_12 = VAR_8->items[VAR_11];
   int VAR_13 = FUNC_0(VAR_4 - VAR_12->size);
   if (VAR_13 < VAR_10) {
    VAR_9 = VAR_12;
    VAR_10 = VAR_13;
   }
  }
  FUNC_3(VAR_2->icon);
  VAR_2->icon = FUNC_2(VAR_9->pixels,
    VAR_0, VAR_9->size, VAR_9->size,
    FUNC_1(VAR_0, VAR_9->size));
 }
}
