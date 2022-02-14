
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;
struct wined3d_texture {TYPE_2__ texture_rgb; TYPE_1__ texture_srgb; } ;
struct wined3d_context {int dummy; } ;
typedef int GLuint ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (struct wined3d_context const*,struct wined3d_texture const*) ;

__attribute__((used)) static inline GLuint FUNC_1(const struct wined3d_texture *VAR_0,
        const struct wined3d_context *VAR_1, BOOL VAR_2)
{
    return VAR_2 && FUNC_0(VAR_1, VAR_0)
            ? VAR_0->texture_srgb.name : VAR_0->texture_rgb.name;
}
