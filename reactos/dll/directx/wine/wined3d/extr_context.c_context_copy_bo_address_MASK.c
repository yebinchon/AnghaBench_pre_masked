
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_bo_address {int * addr; scalar_t__ buffer_object; } ;
typedef int GLintptr ;
typedef int GLenum ;
typedef int BYTE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context*,int ,scalar_t__) ;
 int * FUNC_3 (struct wined3d_context*,struct wined3d_bo_address const*,size_t,int ,int ) ;
 int FUNC_4 (struct wined3d_context*,struct wined3d_bo_address const*,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ,size_t,int *) ;
 int FUNC_7 (int ,int ,int ,int ,size_t) ;
 int FUNC_8 (int ,int ,size_t,int *) ;
 int FUNC_9 (int *,int *,size_t) ;

void FUNC_10(struct wined3d_context *VAR_5,
        const struct wined3d_bo_address *VAR_6, GLenum VAR_7,
        const struct wined3d_bo_address *VAR_8, GLenum VAR_9, size_t VAR_10)
{
    const struct wined3d_gl_info *VAR_11;
    BYTE *VAR_12, *VAR_13;

    VAR_11 = VAR_5->gl_info;

    if (VAR_6->buffer_object && VAR_8->buffer_object)
    {
        if (VAR_11->supported[VAR_0])
        {
            FUNC_0(FUNC_5(VAR_1, VAR_8->buffer_object));
            FUNC_0(FUNC_5(VAR_2, VAR_6->buffer_object));
            FUNC_0(FUNC_7(VAR_1, VAR_2,
                    (GLintptr)VAR_8->addr, (GLintptr)VAR_6->addr, VAR_10));
            FUNC_1("direct buffer copy");
        }
        else
        {
            VAR_13 = FUNC_3(VAR_5, VAR_8, VAR_10, VAR_9, VAR_3);
            VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_10, VAR_7, VAR_4);

            FUNC_9(VAR_12, VAR_13, VAR_10);

            FUNC_4(VAR_5, VAR_6, VAR_7);
            FUNC_4(VAR_5, VAR_8, VAR_9);
        }
    }
    else if (!VAR_6->buffer_object && VAR_8->buffer_object)
    {
        FUNC_2(VAR_5, VAR_9, VAR_8->buffer_object);
        FUNC_0(FUNC_8(VAR_9, (GLintptr)VAR_8->addr, VAR_10, VAR_6->addr));
        FUNC_1("buffer download");
    }
    else if (VAR_6->buffer_object && !VAR_8->buffer_object)
    {
        FUNC_2(VAR_5, VAR_7, VAR_6->buffer_object);
        FUNC_0(FUNC_6(VAR_7, (GLintptr)VAR_6->addr, VAR_10, VAR_8->addr));
        FUNC_1("buffer upload");
    }
    else
    {
        FUNC_9(VAR_6->addr, VAR_8->addr, VAR_10);
    }
}
