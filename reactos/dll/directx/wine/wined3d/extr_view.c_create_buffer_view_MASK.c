
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_view_desc {int dummy; } ;
struct wined3d_gl_view {int dummy; } ;
struct wined3d_format {int dummy; } ;
struct wined3d_context {int dummy; } ;
struct wined3d_buffer {int dummy; } ;


 int FUNC_0 (struct wined3d_gl_view*,struct wined3d_context*,struct wined3d_buffer*,struct wined3d_format const*,unsigned int,unsigned int) ;
 int FUNC_1 (struct wined3d_buffer*,struct wined3d_view_desc const*,struct wined3d_format const*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_gl_view *VAR_0, struct wined3d_context *VAR_1,
        const struct wined3d_view_desc *VAR_2, struct wined3d_buffer *VAR_3,
        const struct wined3d_format *VAR_4)
{
    unsigned int VAR_5, VAR_6;

    FUNC_1(VAR_3, VAR_2, VAR_4, &VAR_5, &VAR_6);
    FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);
}
