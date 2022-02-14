
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_texture {TYPE_2__* sub_resources; } ;
struct wined3d_context {int dummy; } ;
struct TYPE_3__ {int surface; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,struct wined3d_context*,int ) ;

__attribute__((used)) static BOOL FUNC_1(struct wined3d_texture *VAR_0, unsigned int VAR_1,
        struct wined3d_context *VAR_2, DWORD VAR_3)
{
    return FUNC_0(VAR_0->sub_resources[VAR_1].u.surface, VAR_2, VAR_3);
}
