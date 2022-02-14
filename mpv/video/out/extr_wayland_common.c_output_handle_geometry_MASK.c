
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_output {int dummy; } ;
struct TYPE_2__ {void* y0; void* x0; } ;
struct vo_wayland_output {void* phys_height; void* phys_width; TYPE_1__ geometry; int wl; void* model; void* make; } ;
typedef void* int32_t ;


 void* FUNC_0 (int ,char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_output *VAR_1,
                                   int32_t VAR_2, int32_t VAR_3, int32_t VAR_4,
                                   int32_t VAR_5, int32_t VAR_6,
                                   const char *VAR_7, const char *VAR_8,
                                   int32_t VAR_9)
{
    struct vo_wayland_output *VAR_10 = VAR_0;
    VAR_10->make = FUNC_0(VAR_10->wl, VAR_7);
    VAR_10->model = FUNC_0(VAR_10->wl, VAR_8);
    VAR_10->geometry.x0 = VAR_2;
    VAR_10->geometry.y0 = VAR_3;
    VAR_10->phys_width = VAR_4;
    VAR_10->phys_height = VAR_5;
}
