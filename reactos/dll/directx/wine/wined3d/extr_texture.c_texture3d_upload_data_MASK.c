
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int format_flags; struct wined3d_format* format; } ;
struct wined3d_texture {unsigned int level_count; TYPE_1__ resource; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_format {int conv_byte_count; int glType; int glFormat; int (* upload ) (void*,void*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;} ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_const_bo_address {void* addr; scalar_t__ buffer_object; } ;
struct wined3d_box {unsigned int left; unsigned int top; unsigned int front; unsigned int right; unsigned int bottom; unsigned int back; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,struct wined3d_texture*,unsigned int,struct wined3d_context const*,int ,scalar_t__,void*,unsigned int,unsigned int) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wined3d_box const*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ,void const*) ;
 void* FUNC_8 (unsigned int,unsigned int) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,void*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_11 (struct wined3d_texture*,unsigned int) ;
 unsigned int FUNC_12 (struct wined3d_texture*,unsigned int) ;
 unsigned int FUNC_13 (struct wined3d_texture*,unsigned int) ;
 int FUNC_14 (struct wined3d_texture*,unsigned int,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_15(struct wined3d_texture *VAR_3, unsigned int VAR_4,
        const struct wined3d_context *VAR_5, const struct wined3d_box *VAR_6,
        const struct wined3d_const_bo_address *VAR_7, unsigned int VAR_8, unsigned int VAR_9)
{
    const struct wined3d_format *VAR_10 = VAR_3->resource.format;
    unsigned int VAR_11 = VAR_4 % VAR_3->level_count;
    const struct wined3d_gl_info *VAR_12 = VAR_5->gl_info;
    unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    unsigned int VAR_19, VAR_20;
    unsigned int VAR_21, VAR_22, VAR_23;
    const void *VAR_24 = VAR_7->addr;
    void *VAR_25 = ((void*)0);

    FUNC_3("texture %p, sub_resource_idx %u, context %p, box %s, data {%#x:%p}, row_pitch %#x, slice_pitch %#x.\n",
            VAR_3, VAR_4, VAR_5, FUNC_5(VAR_6),
            VAR_7->buffer_object, VAR_7->addr, VAR_8, VAR_9);

    VAR_21 = FUNC_13(VAR_3, VAR_11);
    VAR_22 = FUNC_12(VAR_3, VAR_11);
    VAR_23 = FUNC_11(VAR_3, VAR_11);

    if (!VAR_6)
    {
        VAR_13 = VAR_14 = VAR_15 = 0;
        VAR_16 = VAR_21;
        VAR_17 = VAR_22;
        VAR_18 = VAR_23;
    }
    else
    {
        VAR_13 = VAR_6->left;
        VAR_14 = VAR_6->top;
        VAR_15 = VAR_6->front;
        VAR_16 = VAR_6->right - VAR_6->left;
        VAR_17 = VAR_6->bottom - VAR_6->top;
        VAR_18 = VAR_6->back - VAR_6->front;
    }

    if (VAR_10->conv_byte_count)
    {
        if (VAR_7->buffer_object)
            FUNC_0("Loading a converted texture from a PBO.\n");
        if (VAR_3->resource.format_flags & VAR_2)
            FUNC_0("Converting a block-based format.\n");

        VAR_19 = VAR_16 * VAR_10->conv_byte_count;
        VAR_20 = VAR_19 * VAR_17;

        VAR_25 = FUNC_8(VAR_18, VAR_20);
        VAR_10->upload(VAR_7->addr, VAR_25, VAR_8, VAR_9,
                VAR_19, VAR_20, VAR_16, VAR_17, VAR_18);
        VAR_24 = VAR_25;
    }
    else
    {
        FUNC_14(VAR_3, VAR_4, &VAR_19, &VAR_20);
        if (VAR_8 != VAR_19 || VAR_9 != VAR_20)
            FUNC_1("Ignoring row/slice pitch (%u/%u).\n", VAR_8, VAR_9);
    }

    if (VAR_7->buffer_object)
    {
        FUNC_2(FUNC_6(VAR_0, VAR_7->buffer_object));
        FUNC_4("glBindBuffer");
    }

    FUNC_2(FUNC_7(VAR_1, VAR_11, VAR_13, VAR_14, VAR_15,
            VAR_16, VAR_17, VAR_18, VAR_10->glFormat, VAR_10->glType, VAR_24));
    FUNC_4("glTexSubImage3D");

    if (VAR_7->buffer_object)
    {
        FUNC_2(FUNC_6(VAR_0, 0));
        FUNC_4("glBindBuffer");
    }

    FUNC_9(VAR_25);
}
