
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int * name; } ;
struct seat_config {int fallback; int hide_cursor_timeout; scalar_t__ allow_constrain; TYPE_1__ xcursor_theme; TYPE_2__* attachments; } ;
struct seat_attachment_config {int identifier; } ;
struct TYPE_4__ {int length; struct seat_attachment_config** items; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,struct seat_attachment_config*) ;
 int FUNC_2 (struct seat_attachment_config*,struct seat_attachment_config*) ;
 struct seat_attachment_config* FUNC_3 (struct seat_attachment_config*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *) ;

void FUNC_6(struct seat_config *VAR_1, struct seat_config *VAR_2) {
 if (VAR_2->fallback != -1) {
  VAR_1->fallback = VAR_2->fallback;
 }

 for (int VAR_3 = 0; VAR_3 < VAR_2->attachments->length; ++VAR_3) {
  struct seat_attachment_config *VAR_4 =
   VAR_2->attachments->items[VAR_3];
  bool VAR_5 = 0;
  for (int VAR_6 = 0; VAR_6 < VAR_1->attachments->length; ++VAR_6) {
   struct seat_attachment_config *VAR_7 =
    VAR_1->attachments->items[VAR_6];
   if (FUNC_4(VAR_4->identifier,
      VAR_7->identifier) == 0) {
    FUNC_2(VAR_7,
     VAR_4);
    VAR_5 = 1;
   }
  }

  if (!VAR_5) {
   struct seat_attachment_config *VAR_8 =
    FUNC_3(VAR_4);
   if (VAR_8) {
    FUNC_1(VAR_1->attachments, VAR_8);
   }
  }
 }

 if (VAR_2->hide_cursor_timeout != -1) {
  VAR_1->hide_cursor_timeout = VAR_2->hide_cursor_timeout;
 }

 if (VAR_2->allow_constrain != VAR_0) {
  VAR_1->allow_constrain = VAR_2->allow_constrain;
 }

 if (VAR_2->xcursor_theme.name != ((void*)0)) {
  FUNC_0(VAR_1->xcursor_theme.name);
  VAR_1->xcursor_theme.name = FUNC_5(VAR_2->xcursor_theme.name);
  VAR_1->xcursor_theme.size = VAR_2->xcursor_theme.size;
 }
}
