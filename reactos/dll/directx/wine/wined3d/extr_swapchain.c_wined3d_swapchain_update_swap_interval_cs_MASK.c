
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swap_interval; } ;
struct wined3d_swapchain {TYPE_1__ desc; int front_buffer; int device; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;


 int FUNC_0 (char*,int,struct wined3d_context*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 size_t VAR_0 ;






 struct wined3d_context* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct wined3d_context*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
    struct wined3d_swapchain *VAR_2 = VAR_1;
    const struct wined3d_gl_info *VAR_3;
    struct wined3d_context *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_4(VAR_2->device, VAR_2->front_buffer, 0);
    VAR_3 = VAR_4->gl_info;

    switch (VAR_2->desc.swap_interval)
    {
        case 131:
            VAR_5 = 0;
            break;
        case 133:
        case 130:
            VAR_5 = 1;
            break;
        case 128:
            VAR_5 = 2;
            break;
        case 129:
            VAR_5 = 3;
            break;
        case 132:
            VAR_5 = 4;
            break;
        default:
            FUNC_1("Unhandled present interval %#x.\n", VAR_2->desc.swap_interval);
            VAR_5 = 1;
    }

    if (VAR_3->supported[VAR_0])
    {
        if (!FUNC_2(FUNC_6(VAR_5)))
            FUNC_0("wglSwapIntervalEXT failed to set swap interval %d for context %p, last error %#x\n",
                VAR_5, VAR_4, FUNC_3());
    }

    FUNC_5(VAR_4);
}
