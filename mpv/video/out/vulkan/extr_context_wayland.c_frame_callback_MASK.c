
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_callback {int dummy; } ;
struct vo_wayland_state {int frame_wait; int frame_callback; int surface; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct vo_wayland_state*) ;
 int FUNC_1 (struct wl_callback*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, struct wl_callback *VAR_2, uint32_t VAR_3)
{
    struct vo_wayland_state *VAR_4 = VAR_1;

    if (VAR_2)
        FUNC_1(VAR_2);

    VAR_4->frame_callback = FUNC_2(VAR_4->surface);
    FUNC_0(VAR_4->frame_callback, &VAR_0, VAR_4);
    VAR_4->frame_wait = 0;
}
