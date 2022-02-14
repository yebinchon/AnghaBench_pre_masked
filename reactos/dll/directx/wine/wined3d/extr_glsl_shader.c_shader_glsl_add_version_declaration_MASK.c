
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,int ) ;
 int FUNC_1 (struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_gl_info *VAR_1)
{
    FUNC_0(VAR_0, "#version %u\n", FUNC_1(VAR_1));
}
