
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_format {int color_fixup; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline BOOL FUNC_2(const struct wined3d_gl_info *VAR_1, const struct wined3d_format *VAR_2)
{
    return VAR_1->supported[VAR_0] && !FUNC_0(VAR_2->color_fixup)
            && !FUNC_1(VAR_2->color_fixup);
}
