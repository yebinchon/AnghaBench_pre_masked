
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {int dummy; } ;
struct wined3d_buffer {int buffer_object; int buffer_type_hint; } ;


 int FUNC_0 (struct wined3d_context*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_buffer *VAR_0, struct wined3d_context *VAR_1)
{
    FUNC_0(VAR_1, VAR_0->buffer_type_hint, VAR_0->buffer_object);
}
