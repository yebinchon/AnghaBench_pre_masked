
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct vo_wayland_state {TYPE_1__* vo; } ;
struct TYPE_2__ {int input_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, struct wl_pointer *VAR_2,
                                 uint32_t VAR_3, struct wl_surface *VAR_4)
{
    struct vo_wayland_state *VAR_5 = VAR_1;
    FUNC_0(VAR_5->vo->input_ctx, VAR_0);
}
