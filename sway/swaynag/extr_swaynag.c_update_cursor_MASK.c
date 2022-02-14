
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_cursor {TYPE_1__** images; } ;
struct swaynag_pointer {int cursor_surface; TYPE_1__* cursor_image; int serial; int pointer; scalar_t__ cursor_theme; } ;
struct swaynag {unsigned int scale; int shm; struct swaynag_pointer pointer; } ;
struct TYPE_2__ {int hotspot_x; int hotspot_y; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 unsigned int FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 struct wl_cursor* FUNC_5 (scalar_t__,char*) ;
 scalar_t__ FUNC_6 (char const*,unsigned int,int ) ;
 int FUNC_7 (int ,int ,int ,int,int) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_12(struct swaynag *VAR_2) {
 struct swaynag_pointer *VAR_3 = &VAR_2->pointer;
 if (VAR_2->pointer.cursor_theme) {
  FUNC_4(VAR_2->pointer.cursor_theme);
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
 VAR_3->cursor_theme = FUNC_6(
  VAR_4, VAR_5 * VAR_2->scale, VAR_2->shm);
 struct wl_cursor *VAR_9 =
  FUNC_5(VAR_3->cursor_theme, "left_ptr");
 VAR_3->cursor_image = VAR_9->images[0];
 FUNC_11(VAR_3->cursor_surface,
   VAR_2->scale);
 FUNC_8(VAR_3->cursor_surface,
   FUNC_3(VAR_3->cursor_image), 0, 0);
 FUNC_7(VAR_3->pointer, VAR_3->serial,
   VAR_3->cursor_surface,
   VAR_3->cursor_image->hotspot_x / VAR_2->scale,
   VAR_3->cursor_image->hotspot_y / VAR_2->scale);
 FUNC_10(VAR_3->cursor_surface, 0, 0,
   VAR_0, VAR_0);
 FUNC_9(VAR_3->cursor_surface);
}
