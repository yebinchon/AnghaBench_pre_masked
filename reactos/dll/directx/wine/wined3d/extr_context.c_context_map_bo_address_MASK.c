
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_bo_address {void* addr; int buffer_object; } ;
typedef int INT_PTR ;
typedef int GLenum ;
typedef int GLbitfield ;
typedef int DWORD ;
typedef void BYTE ;


 size_t VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,size_t,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void *FUNC_7(struct wined3d_context *VAR_2,
        const struct wined3d_bo_address *VAR_3, size_t VAR_4, GLenum VAR_5, DWORD VAR_6)
{
    const struct wined3d_gl_info *VAR_7;
    BYTE *VAR_8;

    if (!VAR_3->buffer_object)
        return VAR_3->addr;

    VAR_7 = VAR_2->gl_info;
    FUNC_2(VAR_2, VAR_5, VAR_3->buffer_object);

    if (VAR_7->supported[VAR_0])
    {
        GLbitfield VAR_9 = FUNC_6(VAR_6) & ~VAR_1;
        VAR_8 = FUNC_0(FUNC_4(VAR_5, (INT_PTR)VAR_3->addr, VAR_4, VAR_9));
    }
    else
    {
        VAR_8 = FUNC_0(FUNC_3(VAR_5, FUNC_5(VAR_6)));
        VAR_8 += (INT_PTR)VAR_3->addr;
    }

    FUNC_2(VAR_2, VAR_5, 0);
    FUNC_1("Map buffer object");

    return VAR_8;
}
