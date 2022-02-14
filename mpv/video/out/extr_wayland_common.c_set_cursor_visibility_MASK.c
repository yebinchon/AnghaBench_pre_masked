
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_cursor_image {int hotspot_x; int hotspot_y; int height; int width; } ;
struct wl_buffer {int dummy; } ;
struct vo_wayland_state {int cursor_visible; int scaling; int pointer_id; int pointer; int * cursor_surface; TYPE_1__* default_cursor; } ;
struct TYPE_2__ {struct wl_cursor_image** images; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vo_wayland_state*) ;
 struct wl_buffer* FUNC_1 (struct wl_cursor_image*) ;
 int FUNC_2 (int ,int ,int *,int,int) ;
 int FUNC_3 (int *,struct wl_buffer*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct vo_wayland_state *VAR_3, bool VAR_4)
{
    if (!VAR_3->pointer)
        return VAR_1;
    VAR_3->cursor_visible = VAR_4;
    if (VAR_4) {
        if (FUNC_0(VAR_3))
            return VAR_0;
        struct wl_cursor_image *VAR_5 = VAR_3->default_cursor->images[0];
        struct wl_buffer *VAR_6 = FUNC_1(VAR_5);
        if (!VAR_6)
            return VAR_0;
        FUNC_2(VAR_3->pointer, VAR_3->pointer_id, VAR_3->cursor_surface,
                              VAR_5->hotspot_x/VAR_3->scaling, VAR_5->hotspot_y/VAR_3->scaling);
        FUNC_6(VAR_3->cursor_surface, VAR_3->scaling);
        FUNC_3(VAR_3->cursor_surface, VAR_6, 0, 0);
        FUNC_5(VAR_3->cursor_surface, 0, 0, VAR_5->width, VAR_5->height);
        FUNC_4(VAR_3->cursor_surface);
    } else {
        FUNC_2(VAR_3->pointer, VAR_3->pointer_id, ((void*)0), 0, 0);
    }
    return VAR_2;
}
