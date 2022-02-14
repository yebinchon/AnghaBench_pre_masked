
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct wined3d_fence {int dummy; } ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct wined3d_gl_info const*) ;

__attribute__((used)) static HRESULT FUNC_2(struct wined3d_fence *VAR_2, const struct wined3d_gl_info *VAR_3)
{
    if (!FUNC_1(VAR_3))
    {
        FUNC_0("Fences not supported.\n");
        return VAR_0;
    }

    return VAR_1;
}
