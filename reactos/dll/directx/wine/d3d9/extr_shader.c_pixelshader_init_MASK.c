
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ element_count; } ;
struct TYPE_7__ {scalar_t__ element_count; } ;
struct TYPE_6__ {scalar_t__ element_count; } ;
struct wined3d_shader_desc {size_t byte_code_size; int max_version; TYPE_4__ patch_constant_signature; TYPE_3__ output_signature; TYPE_2__ input_signature; int format; int const* byte_code; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct d3d9_pixelshader {int refcount; int * parent_device; int wined3d_shader; TYPE_1__ IDirect3DPixelShader9_iface; } ;
struct d3d9_device {int IDirect3DDevice9Ex_iface; int wined3d_device; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct wined3d_shader_desc*,struct d3d9_pixelshader*,int *,int *) ;

HRESULT FUNC_6(struct d3d9_pixelshader *VAR_4, struct d3d9_device *VAR_5, const DWORD *VAR_6)
{
    struct wined3d_shader_desc VAR_7;
    HRESULT VAR_8;

    VAR_4->refcount = 1;
    VAR_4->IDirect3DPixelShader9_iface.lpVtbl = &VAR_2;

    VAR_7.byte_code = VAR_6;
    VAR_7.byte_code_size = ~(size_t)0;
    VAR_7.format = VAR_1;
    VAR_7.input_signature.element_count = 0;
    VAR_7.output_signature.element_count = 0;
    VAR_7.patch_constant_signature.element_count = 0;
    VAR_7.max_version = 3;

    FUNC_3();
    VAR_8 = FUNC_5(VAR_5->wined3d_device, &VAR_7, VAR_4,
            &VAR_3, &VAR_4->wined3d_shader);
    FUNC_4();
    if (FUNC_0(VAR_8))
    {
        FUNC_2("Failed to created wined3d pixel shader, hr %#x.\n", VAR_8);
        return VAR_8;
    }

    VAR_4->parent_device = &VAR_5->IDirect3DDevice9Ex_iface;
    FUNC_1(VAR_4->parent_device);

    return VAR_0;
}
