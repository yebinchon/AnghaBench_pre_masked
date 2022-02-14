
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_output {int dummy; } ;
struct vo_wayland_output {scalar_t__ scale; int wl; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, struct wl_output *VAR_1,
                                int32_t VAR_2)
{
    struct vo_wayland_output *VAR_3 = VAR_0;
    if (!VAR_2) {
        FUNC_0(VAR_3->wl, "Invalid output scale given by the compositor!\n");
        return;
    }
    VAR_3->scale = VAR_2;
}
