
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_texture {int dummy; } ;
struct wined3d_texture {struct gl_texture texture_rgb; struct gl_texture texture_srgb; } ;
typedef scalar_t__ BOOL ;



__attribute__((used)) static inline struct gl_texture *FUNC_0(struct wined3d_texture *VAR_0,
        BOOL VAR_1)
{
    return VAR_1 ? &VAR_0->texture_srgb : &VAR_0->texture_rgb;
}
