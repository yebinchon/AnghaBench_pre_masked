
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_buffer_desc {int usage; int access; scalar_t__ structure_byte_stride; scalar_t__ misc_flags; int bind_flags; int byte_width; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct d3d8_indexbuffer {int * parent_device; int wined3d_buffer; int format; int resource; TYPE_1__ IDirect3DIndexBuffer8_iface; } ;
struct d3d8_device {int IDirect3DDevice8_iface; int wined3d_device; } ;
typedef int UINT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ D3DPOOL ;
typedef int D3DFORMAT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct wined3d_buffer_desc*,int *,struct d3d8_indexbuffer*,int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ) ;

HRESULT FUNC_9(struct d3d8_indexbuffer *VAR_10, struct d3d8_device *VAR_11,
        UINT VAR_12, DWORD VAR_13, D3DFORMAT VAR_14, D3DPOOL VAR_15)
{
    struct wined3d_buffer_desc VAR_16;
    HRESULT VAR_17;

    VAR_16.byte_width = VAR_12;
    VAR_16.usage = (VAR_13 & VAR_2) | VAR_4;
    if (VAR_15 == VAR_0)
        VAR_16.usage |= VAR_3;
    VAR_16.bind_flags = VAR_5;
    VAR_16.access = FUNC_7(VAR_15, VAR_13)
            | VAR_6 | VAR_7;
    VAR_16.misc_flags = 0;
    VAR_16.structure_byte_stride = 0;

    VAR_10->IDirect3DIndexBuffer8_iface.lpVtbl = &VAR_8;
    FUNC_3(&VAR_10->resource);
    VAR_10->format = FUNC_8(VAR_14);

    FUNC_5();
    VAR_17 = FUNC_4(VAR_11->wined3d_device, &VAR_16, ((void*)0), VAR_10,
            &VAR_9, &VAR_10->wined3d_buffer);
    FUNC_6();
    if (FUNC_0(VAR_17))
    {
        FUNC_2("Failed to create wined3d buffer, hr %#x.\n", VAR_17);
        return VAR_17;
    }

    VAR_10->parent_device = &VAR_11->IDirect3DDevice8_iface;
    FUNC_1(VAR_10->parent_device);

    return VAR_1;
}
