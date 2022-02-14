
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int gl_primitive_type; scalar_t__ index_offset; } ;
struct wined3d_indirect_draw_parameters {scalar_t__ offset; struct wined3d_buffer* buffer; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_buffer {int buffer_object; } ;
typedef scalar_t__ GLintptr ;
typedef int GLenum ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,void const*) ;
 int FUNC_5 (int ,int ,void const*) ;

__attribute__((used)) static void FUNC_6(struct wined3d_context *VAR_4, const struct wined3d_state *VAR_5,
        const struct wined3d_indirect_draw_parameters *VAR_6, unsigned int VAR_7)
{
    const struct wined3d_gl_info *VAR_8 = VAR_4->gl_info;
    struct wined3d_buffer *VAR_9 = VAR_6->buffer;
    const void *VAR_10;

    if (!VAR_8->supported[VAR_0])
    {
        FUNC_0("OpenGL implementation does not support indirect draws.\n");
        return;
    }

    FUNC_1(FUNC_3(VAR_1, VAR_9->buffer_object));

    VAR_10 = (void *)(GLintptr)VAR_6->offset;
    if (VAR_7)
    {
        GLenum VAR_11 = VAR_7 == 2 ? VAR_3 : VAR_2;
        if (VAR_5->index_offset)
            FUNC_0("Ignoring index offset %u.\n", VAR_5->index_offset);
        FUNC_1(FUNC_5(VAR_5->gl_primitive_type, VAR_11, VAR_10));
    }
    else
    {
        FUNC_1(FUNC_4(VAR_5->gl_primitive_type, VAR_10));
    }

    FUNC_1(FUNC_3(VAR_1, 0));

    FUNC_2("draw indirect");
}
