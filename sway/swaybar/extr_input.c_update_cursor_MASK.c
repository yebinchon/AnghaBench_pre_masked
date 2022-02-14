
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl_cursor {TYPE_3__** images; } ;
struct swaybar_pointer {int cursor_surface; TYPE_3__* cursor_image; int serial; int pointer; int cursor_theme; TYPE_1__* current; } ;
struct swaybar_seat {TYPE_2__* bar; struct swaybar_pointer pointer; } ;
struct TYPE_6__ {int hotspot_x; int hotspot_y; } ;
struct TYPE_5__ {int shm; } ;
struct TYPE_4__ {int scale; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 unsigned int FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 struct wl_cursor* FUNC_5 (int ,char*) ;
 int FUNC_6 (char const*,unsigned int,int ) ;
 int FUNC_7 (int ,int ,int ,int,int) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int) ;

void FUNC_12(struct swaybar_seat *VAR_2) {
 struct swaybar_pointer *VAR_3 = &VAR_2->pointer;
 if (!VAR_3 || !VAR_3->cursor_surface) {
  return;
 }
 if (VAR_3->cursor_theme) {
  FUNC_4(VAR_3->cursor_theme);
 }
 const char *VAR_4 = FUNC_0("XCURSOR_THEME");
 unsigned VAR_5 = 24;
 const char *VAR_6 = FUNC_0("XCURSOR_SIZE");
 if (VAR_6 && FUNC_1(VAR_6) > 0) {
  VAR_1 = 0;
  char *VAR_7;
  unsigned VAR_8 = FUNC_2(VAR_6, &VAR_7, 10);
  if (!*VAR_7 && VAR_1 == 0) {
   VAR_5 = VAR_8;
  }
 }
 int VAR_9 = VAR_3->current ? VAR_3->current->scale : 1;
 VAR_3->cursor_theme = FUNC_6(
  VAR_4, VAR_5 * VAR_9, VAR_2->bar->shm);
 struct wl_cursor *VAR_10;
 VAR_10 = FUNC_5(VAR_3->cursor_theme, "left_ptr");
 VAR_3->cursor_image = VAR_10->images[0];
 FUNC_11(VAR_3->cursor_surface, VAR_9);
 FUNC_8(VAR_3->cursor_surface,
   FUNC_3(VAR_3->cursor_image), 0, 0);
 FUNC_7(VAR_3->pointer, VAR_3->serial,
   VAR_3->cursor_surface,
   VAR_3->cursor_image->hotspot_x / VAR_9,
   VAR_3->cursor_image->hotspot_y / VAR_9);
 FUNC_10(VAR_3->cursor_surface, 0, 0,
   VAR_0, VAR_0);
 FUNC_9(VAR_3->cursor_surface);
}
