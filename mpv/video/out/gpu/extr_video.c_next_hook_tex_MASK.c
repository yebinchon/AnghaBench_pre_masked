
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_tex {int dummy; } ;
struct gl_video {scalar_t__ idx_hook_textures; scalar_t__ num_hook_textures; struct ra_tex** hook_textures; } ;


 int FUNC_0 (struct gl_video*,struct ra_tex**,scalar_t__,int *) ;

__attribute__((used)) static struct ra_tex **FUNC_1(struct gl_video *VAR_0)
{
    if (VAR_0->idx_hook_textures == VAR_0->num_hook_textures)
        FUNC_0(VAR_0, VAR_0->hook_textures, VAR_0->num_hook_textures, ((void*)0));

    return &VAR_0->hook_textures[VAR_0->idx_hook_textures++];
}
