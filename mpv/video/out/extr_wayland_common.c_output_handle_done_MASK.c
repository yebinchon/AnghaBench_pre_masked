
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wl_output {int dummy; } ;
struct TYPE_3__ {scalar_t__ y0; scalar_t__ x0; int y1; int x1; } ;
struct vo_wayland_output {int refresh_rate; int scale; int phys_height; TYPE_1__ geometry; int phys_width; int id; int model; int make; int wl; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;

__attribute__((used)) static void FUNC_3(void* VAR_0, struct wl_output *VAR_1)
{
    struct vo_wayland_output *VAR_2 = VAR_0;

    VAR_2->geometry.x1 += VAR_2->geometry.x0;
    VAR_2->geometry.y1 += VAR_2->geometry.y0;

    FUNC_0(VAR_2->wl, "Registered output %s %s (0x%x):\n"
               "\tx: %dpx, y: %dpx\n"
               "\tw: %dpx (%dmm), h: %dpx (%dmm)\n"
               "\tscale: %d\n"
               "\tHz: %f\n", VAR_2->make, VAR_2->model, VAR_2->id, VAR_2->geometry.x0,
               VAR_2->geometry.y0, FUNC_2(VAR_2->geometry), VAR_2->phys_width,
               FUNC_1(VAR_2->geometry), VAR_2->phys_height, VAR_2->scale, VAR_2->refresh_rate);
}
