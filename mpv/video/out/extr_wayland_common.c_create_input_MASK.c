
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_state {int xkb_context; } ;


 int FUNC_0 (struct vo_wayland_state*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct vo_wayland_state *VAR_1)
{
    VAR_1->xkb_context = FUNC_1(VAR_0);

    if (!VAR_1->xkb_context) {
        FUNC_0(VAR_1, "failed to initialize input: check xkbcommon\n");
        return 1;
    }

    return 0;
}
