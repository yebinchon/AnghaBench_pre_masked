
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ draw_binding; TYPE_1__* format; struct wined3d_device* device; } ;
struct wined3d_texture {unsigned int level_count; TYPE_4__ resource; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct TYPE_6__ {int (* p_glPixelStorei ) (int ,unsigned int) ;int (* p_glReadPixels ) (int ,int ,unsigned int,unsigned int,int ,int ,int *) ;int (* p_glReadBuffer ) (int ) ;} ;
struct TYPE_7__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_bo_address {scalar_t__ buffer_object; int * addr; } ;
struct TYPE_5__ {unsigned int byte_count; int glType; int glFormat; } ;
typedef int GLenum ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 struct wined3d_context* FUNC_3 (struct wined3d_device*,struct wined3d_texture*,unsigned int) ;
 int FUNC_4 (struct wined3d_context*,struct wined3d_device*) ;
 int FUNC_5 (struct wined3d_context*,int ,struct wined3d_surface*,int *,scalar_t__) ;
 int FUNC_6 (struct wined3d_context*,int ) ;
 int FUNC_7 (struct wined3d_context*) ;
 struct wined3d_surface* FUNC_8 (struct wined3d_context*) ;
 int FUNC_9 (struct wined3d_context*,int ) ;
 int FUNC_10 (struct wined3d_context*,struct wined3d_surface*) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (unsigned int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,unsigned int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,unsigned int) ;
 int FUNC_20 (int ,int ,unsigned int,unsigned int,int ,int ,int *) ;
 int FUNC_21 (int ,unsigned int) ;
 unsigned int FUNC_22 (struct wined3d_surface*) ;
 scalar_t__ FUNC_23 (TYPE_4__*) ;
 int FUNC_24 (struct wined3d_texture*) ;
 unsigned int FUNC_25 (struct wined3d_texture*,unsigned int) ;
 unsigned int FUNC_26 (struct wined3d_texture*,unsigned int) ;
 int FUNC_27 (struct wined3d_texture*,unsigned int,struct wined3d_bo_address*,scalar_t__) ;
 int FUNC_28 (struct wined3d_texture*,unsigned int,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_29(struct wined3d_surface *VAR_8,
        struct wined3d_context *VAR_9, DWORD VAR_10, DWORD VAR_11)
{
    unsigned int VAR_12 = FUNC_22(VAR_8);
    struct wined3d_texture *VAR_13 = VAR_8->container;
    struct wined3d_device *VAR_14 = VAR_13->resource.device;
    struct wined3d_context *VAR_15 = VAR_9;
    struct wined3d_surface *VAR_16 = ((void*)0);
    const struct wined3d_gl_info *VAR_17;
    unsigned int VAR_18, VAR_19;
    unsigned int VAR_20, VAR_21, VAR_22;
    struct wined3d_bo_address VAR_23;
    BYTE *VAR_24, *VAR_25, *VAR_26;
    BOOL VAR_27;
    unsigned int VAR_28;
    BYTE *VAR_29;

    FUNC_27(VAR_13, VAR_12, &VAR_23, VAR_11);

    VAR_16 = FUNC_8(VAR_9);
    if (VAR_16 != VAR_8)
        VAR_15 = FUNC_3(VAR_14, VAR_13, VAR_12);
    else
        VAR_16 = ((void*)0);
    VAR_17 = VAR_15->gl_info;

    if (VAR_10 != VAR_13->resource.draw_binding)
    {
        FUNC_5(VAR_15, VAR_3, VAR_8, ((void*)0), VAR_10);
        FUNC_6(VAR_15, VAR_3);
        FUNC_9(VAR_15, VAR_5);
    }
    else
    {
        FUNC_4(VAR_15, VAR_14);
    }





    if (VAR_10 != VAR_7 || FUNC_23(&VAR_13->resource))
    {


        FUNC_1("Mapping offscreen render target.\n");
        VAR_17->gl_ops.gl.p_glReadBuffer(FUNC_7(VAR_15));
        VAR_27 = VAR_6;
    }
    else
    {

        GLenum VAR_30 = FUNC_24(VAR_13);
        FUNC_1("Mapping %#x buffer.\n", VAR_30);
        VAR_17->gl_ops.gl.p_glReadBuffer(VAR_30);
        VAR_27 = VAR_0;
    }
    FUNC_2("glReadBuffer");

    if (VAR_23.buffer_object)
    {
        FUNC_0(FUNC_11(VAR_2, VAR_23.buffer_object));
        FUNC_2("glBindBuffer");
    }

    VAR_22 = VAR_12 % VAR_13->level_count;
    FUNC_28(VAR_13, VAR_22, &VAR_18, &VAR_19);


    VAR_17->gl_ops.gl.p_glPixelStorei(VAR_1, VAR_18 / VAR_13->resource.format->byte_count);
    FUNC_2("glPixelStorei");

    VAR_20 = FUNC_26(VAR_13, VAR_22);
    VAR_21 = FUNC_25(VAR_13, VAR_22);
    VAR_17->gl_ops.gl.p_glReadPixels(0, 0, VAR_20, VAR_21,
            VAR_13->resource.format->glFormat,
            VAR_13->resource.format->glType, VAR_23.addr);
    FUNC_2("glReadPixels");


    VAR_17->gl_ops.gl.p_glPixelStorei(VAR_1, 0);
    FUNC_2("glPixelStorei");

    if (!VAR_27)
    {



        if (!(VAR_24 = FUNC_14(VAR_18)))
            goto error;

        if (VAR_23.buffer_object)
        {
            VAR_29 = FUNC_0(FUNC_12(VAR_2, VAR_4));
            FUNC_2("glMapBuffer");
        }
        else
            VAR_29 = VAR_23.addr;

        VAR_25 = VAR_29;
        VAR_26 = VAR_29 + VAR_18 * (VAR_21 - 1);
        for (VAR_28 = 0; VAR_28 < VAR_21 / 2; VAR_28++)
        {
            FUNC_16(VAR_24, VAR_25, VAR_18);
            FUNC_16(VAR_25, VAR_26, VAR_18);
            FUNC_16(VAR_26, VAR_24, VAR_18);
            VAR_25 += VAR_18;
            VAR_26 -= VAR_18;
        }
        FUNC_15(VAR_24);

        if (VAR_23.buffer_object)
            FUNC_0(FUNC_13(VAR_2));
    }

error:
    if (VAR_23.buffer_object)
    {
        FUNC_0(FUNC_11(VAR_2, 0));
        FUNC_2("glBindBuffer");
    }

    if (VAR_16)
        FUNC_10(VAR_15, VAR_16);
}
