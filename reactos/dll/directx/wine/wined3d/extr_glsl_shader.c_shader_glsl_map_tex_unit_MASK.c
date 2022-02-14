
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_version {int dummy; } ;
struct wined3d_context {int dummy; } ;
typedef unsigned int DWORD ;


 unsigned int VAR_0 ;
 unsigned int* FUNC_0 (struct wined3d_context const*,struct wined3d_shader_version const*,unsigned int*,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_1(const struct wined3d_context *VAR_1,
        const struct wined3d_shader_version *VAR_2, unsigned int VAR_3)
{
    const DWORD *VAR_4;
    unsigned int VAR_5, VAR_6;

    VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5, &VAR_6);
    if (VAR_3 >= VAR_6)
        return VAR_0;
    if (!VAR_4)
        return VAR_5 + VAR_3;
    return VAR_4[VAR_5 + VAR_3];
}
