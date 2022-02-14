
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_state {int surface; int geometry; } ;
struct vo {struct vo_wayland_state* wl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct vo_wayland_state *VAR_1 = VAR_0->wl;

    FUNC_3(VAR_1->surface, 0, 0, FUNC_1(VAR_1->geometry),
                      FUNC_0(VAR_1->geometry));
    FUNC_2(VAR_1->surface);
}
