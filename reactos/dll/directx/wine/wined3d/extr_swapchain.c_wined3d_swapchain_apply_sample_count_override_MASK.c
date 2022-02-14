
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_swapchain {TYPE_2__* device; } ;
struct TYPE_5__ {int samples; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct wined3d_format {unsigned int multisample_types; } ;
typedef enum wined3d_multisample_type { ____Placeholder_wined3d_multisample_type } wined3d_multisample_type ;
typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
struct TYPE_8__ {unsigned int sample_count; } ;
struct TYPE_7__ {struct wined3d_gl_info gl_info; } ;
struct TYPE_6__ {TYPE_3__* adapter; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int ) ;
 struct wined3d_format* FUNC_2 (struct wined3d_gl_info const*,int,int ) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_3(const struct wined3d_swapchain *VAR_2,
        enum wined3d_format_id VAR_3, enum wined3d_multisample_type *VAR_4, DWORD *VAR_5)
{
    const struct wined3d_gl_info *VAR_6;
    const struct wined3d_format *VAR_7;
    enum wined3d_multisample_type VAR_8;

    if (VAR_1.sample_count == ~0u)
        return;

    VAR_6 = &VAR_2->device->adapter->gl_info;
    if (!(VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_0)))
        return;

    if ((VAR_8 = FUNC_1(VAR_1.sample_count, VAR_6->limits.samples)))
        while (!(VAR_7->multisample_types & 1u << (VAR_8 - 1)))
            ++VAR_8;
    FUNC_0("Using sample count %u.\n", VAR_8);
    *VAR_4 = VAR_8;
    *VAR_5 = 0;
}
