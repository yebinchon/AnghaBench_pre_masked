
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_version {int dummy; } ;
struct wined3d_sm1_data {struct wined3d_shader_version shader_version; int * start; } ;
typedef int DWORD ;



__attribute__((used)) static void FUNC_0(void *VAR_0, const DWORD **VAR_1, struct wined3d_shader_version *VAR_2)
{
    struct wined3d_sm1_data *VAR_3 = VAR_0;

    *VAR_1 = VAR_3->start;
    *VAR_2 = VAR_3->shader_version;
}
