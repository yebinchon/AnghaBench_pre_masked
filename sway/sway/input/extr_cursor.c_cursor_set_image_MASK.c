
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_client {int dummy; } ;
struct sway_cursor {char* image; int cursor; int xcursor_manager; scalar_t__ hidden; struct wl_client* image_client; scalar_t__ hotspot_y; scalar_t__ hotspot_x; int * image_surface; TYPE_2__* seat; } ;
struct TYPE_4__ {TYPE_1__* wlr_seat; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char const*,int ) ;

void FUNC_3(struct sway_cursor *VAR_1, const char *VAR_2,
  struct wl_client *VAR_3) {
 if (!(VAR_1->seat->wlr_seat->capabilities & VAR_0)) {
  return;
 }

 const char *VAR_4 = VAR_1->image;
 VAR_1->image = VAR_2;
 VAR_1->image_surface = ((void*)0);
 VAR_1->hotspot_x = VAR_1->hotspot_y = 0;
 VAR_1->image_client = VAR_3;

 if (VAR_1->hidden) {
  return;
 }

 if (!VAR_2) {
  FUNC_1(VAR_1->cursor, ((void*)0), 0, 0, 0, 0, 0, 0);
 } else if (!VAR_4 || FUNC_0(VAR_4, VAR_2) != 0) {
  FUNC_2(VAR_1->xcursor_manager, VAR_2,
    VAR_1->cursor);
 }
}
