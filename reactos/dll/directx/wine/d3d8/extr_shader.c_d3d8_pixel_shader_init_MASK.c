
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ element_count; } ;
struct TYPE_5__ {scalar_t__ element_count; } ;
struct TYPE_4__ {scalar_t__ element_count; } ;
struct wined3d_shader_desc {size_t byte_code_size; int max_version; TYPE_3__ patch_constant_signature; TYPE_2__ output_signature; TYPE_1__ input_signature; int format; int const* byte_code; } ;
struct d3d8_pixel_shader {int wined3d_shader; int handle; } ;
struct d3d8_device {int wined3d_device; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct wined3d_shader_desc*,struct d3d8_pixel_shader*,int *,int *) ;

HRESULT FUNC_5(struct d3d8_pixel_shader *VAR_3, struct d3d8_device *VAR_4,
        const DWORD *VAR_5, DWORD VAR_6)
{
    struct wined3d_shader_desc VAR_7;
    HRESULT VAR_8;

    VAR_3->handle = VAR_6;

    VAR_7.byte_code = VAR_5;
    VAR_7.byte_code_size = ~(size_t)0;
    VAR_7.format = VAR_1;
    VAR_7.input_signature.element_count = 0;
    VAR_7.output_signature.element_count = 0;
    VAR_7.patch_constant_signature.element_count = 0;
    VAR_7.max_version = 1;

    FUNC_2();
    VAR_8 = FUNC_4(VAR_4->wined3d_device, &VAR_7, VAR_3,
            &VAR_2, &VAR_3->wined3d_shader);
    FUNC_3();
    if (FUNC_0(VAR_8))
    {
        FUNC_1("Failed to create wined3d pixel shader, hr %#x.\n", VAR_8);
        return VAR_8;
    }

    return VAR_0;
}
