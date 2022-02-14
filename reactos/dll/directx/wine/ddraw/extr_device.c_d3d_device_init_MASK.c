
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ddraw_surface {int dummy; } ;
struct ddraw {int cooperative_level; int wined3d_device; struct d3d_device* d3ddevice; } ;
struct TYPE_15__ {float member_0; float member_1; float member_2; float member_3; float member_4; float member_5; float member_6; float member_7; float member_8; float member_9; float member_10; float member_11; float member_12; float member_13; float member_14; float member_15; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct d3d_device {int ref; int version; TYPE_5__* rt_iface; int handle_table; int wined3d_device; TYPE_6__ legacy_clipspace; TYPE_6__ legacy_projection; int legacyTextureBlending; int viewport_list; struct ddraw* ddraw; TYPE_5__ IUnknown_inner; TYPE_5__* outer_unknown; int hw; TYPE_4__ IDirect3DDevice_iface; TYPE_3__ IDirect3DDevice2_iface; TYPE_2__ IDirect3DDevice3_iface; TYPE_1__ IDirect3DDevice7_iface; } ;
typedef int UINT ;
typedef TYPE_5__ IUnknown ;
typedef int HRESULT ;
typedef TYPE_6__ D3DMATRIX ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct d3d_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct ddraw_surface*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_11(struct d3d_device *VAR_15, struct ddraw *VAR_16, BOOL VAR_17,
        struct ddraw_surface *VAR_18, IUnknown *VAR_19, UINT VAR_20, IUnknown *VAR_21)
{
    static const D3DMATRIX VAR_22 =
    {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f,
    };
    HRESULT VAR_23;

    if (VAR_16->cooperative_level & VAR_2)
        VAR_15->IDirect3DDevice7_iface.lpVtbl = &VAR_12;
    else
        VAR_15->IDirect3DDevice7_iface.lpVtbl = &VAR_13;

    VAR_15->IDirect3DDevice3_iface.lpVtbl = &VAR_11;
    VAR_15->IDirect3DDevice2_iface.lpVtbl = &VAR_10;
    VAR_15->IDirect3DDevice_iface.lpVtbl = &VAR_9;
    VAR_15->IUnknown_inner.lpVtbl = &VAR_14;
    VAR_15->ref = 1;
    VAR_15->version = VAR_20;
    VAR_15->hw = VAR_17;

    if (VAR_21)
        VAR_15->outer_unknown = VAR_21;
    else
        VAR_15->outer_unknown = &VAR_15->IUnknown_inner;

    VAR_15->ddraw = VAR_16;
    FUNC_7(&VAR_15->viewport_list);

    if (!FUNC_5(&VAR_15->handle_table, 64))
    {
        FUNC_0("Failed to initialize handle table.\n");
        return VAR_1;
    }

    VAR_15->legacyTextureBlending = VAR_3;
    VAR_15->legacy_projection = VAR_22;
    VAR_15->legacy_clipspace = VAR_22;


    VAR_15->wined3d_device = VAR_16->wined3d_device;
    FUNC_8(VAR_16->wined3d_device);


    if (FUNC_1(VAR_23 = FUNC_10(VAR_16->wined3d_device,
            0, FUNC_6(VAR_18), VAR_4)))
    {
        FUNC_0("Failed to set render target, hr %#x.\n", VAR_23);
        FUNC_4(&VAR_15->handle_table);
        return VAR_23;
    }

    VAR_15->rt_iface = VAR_19;
    if (VAR_20 != 1)
        FUNC_2(VAR_15->rt_iface);

    VAR_16->d3ddevice = VAR_15;

    FUNC_9(VAR_16->wined3d_device, VAR_8,
            FUNC_3(VAR_15));
    if (VAR_20 == 1)
        FUNC_9(VAR_16->wined3d_device, VAR_5, VAR_4);
    else if (VAR_20 == 2)
        FUNC_9(VAR_16->wined3d_device, VAR_7, VAR_4);
    if (VAR_20 < 7)
        FUNC_9(VAR_16->wined3d_device, VAR_6, VAR_4);

    return VAR_0;
}
