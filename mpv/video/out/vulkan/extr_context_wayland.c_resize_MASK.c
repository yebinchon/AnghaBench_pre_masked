
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_wayland_state {int scaling; int surface; int geometry; } ;
struct ra_ctx {TYPE_1__* vo; } ;
typedef int int32_t ;
struct TYPE_2__ {struct vo_wayland_state* wl; } ;


 int FUNC_0 (struct vo_wayland_state*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ra_ctx*,int const,int const) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static bool FUNC_5(struct ra_ctx *VAR_0)
{
    struct vo_wayland_state *VAR_1 = VAR_0->vo->wl;

    FUNC_0(VAR_1, "Handling resize on the vk side\n");

    const int32_t VAR_2 = VAR_1->scaling*FUNC_2(VAR_1->geometry);
    const int32_t VAR_3 = VAR_1->scaling*FUNC_1(VAR_1->geometry);

    FUNC_4(VAR_1->surface, VAR_1->scaling);
    return FUNC_3(VAR_0, VAR_2, VAR_3);
}
