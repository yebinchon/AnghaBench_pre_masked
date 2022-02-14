
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ra_tex_params {int dimensions; scalar_t__ storage_dst; scalar_t__ blit_dst; scalar_t__ render_dst; scalar_t__ src_repeat; scalar_t__ src_linear; scalar_t__ render_src; int format; scalar_t__ blit_src; } ;
struct ra_tex {struct ra_tex_params params; struct d3d_tex* priv; } ;
struct ra_d3d11 {scalar_t__ fl; int dev; } ;
struct ra {struct ra_d3d11* priv; } ;
struct d3d_tex {int uav; int res; int rtv; int sampler; int srv; int array_slice; } ;
struct TYPE_16__ {int MaxAnisotropy; int AddressW; int AddressV; int AddressU; int Filter; int MaxLOD; int MinLOD; int ComparisonFunc; } ;
struct TYPE_14__ {int MipLevels; } ;
struct TYPE_13__ {int MipLevels; } ;
struct TYPE_12__ {int MipLevels; int ArraySize; int FirstArraySlice; } ;
struct TYPE_11__ {int MipLevels; } ;
struct TYPE_10__ {int MipLevels; int ArraySize; int FirstArraySlice; } ;
struct TYPE_15__ {TYPE_5__ Texture3D; int ViewDimension; TYPE_4__ Texture2D; TYPE_3__ Texture2DArray; TYPE_2__ Texture1D; TYPE_1__ Texture1DArray; int Format; } ;
typedef int HRESULT ;
typedef TYPE_6__ D3D11_SHADER_RESOURCE_VIEW_DESC ;
typedef TYPE_7__ D3D11_SAMPLER_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,TYPE_7__*,int *) ;
 int FUNC_3 (int ,int ,TYPE_6__*,int *) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (struct ra*,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct ra *VAR_11, struct ra_tex *VAR_12)
{
    struct ra_d3d11 *VAR_13 = VAR_11->priv;
    struct d3d_tex *VAR_14 = VAR_12->priv;
    struct ra_tex_params *VAR_15 = &VAR_12->params;
    HRESULT VAR_16;



    if (VAR_15->render_src || VAR_15->blit_src) {



        D3D11_SHADER_RESOURCE_VIEW_DESC VAR_17 = {
            .Format = FUNC_6(VAR_15->format),
        };
        switch (VAR_15->dimensions) {
        case 1:
            if (VAR_14->array_slice >= 0) {
                VAR_17.ViewDimension = VAR_4;
                VAR_17.Texture1DArray.MipLevels = 1;
                VAR_17.Texture1DArray.FirstArraySlice = VAR_14->array_slice;
                VAR_17.Texture1DArray.ArraySize = 1;
            } else {
                VAR_17.ViewDimension = VAR_3;
                VAR_17.Texture1D.MipLevels = 1;
            }
            break;
        case 2:
            if (VAR_14->array_slice >= 0) {
                VAR_17.ViewDimension = VAR_6;
                VAR_17.Texture2DArray.MipLevels = 1;
                VAR_17.Texture2DArray.FirstArraySlice = VAR_14->array_slice;
                VAR_17.Texture2DArray.ArraySize = 1;
            } else {
                VAR_17.ViewDimension = VAR_5;
                VAR_17.Texture2D.MipLevels = 1;
            }
            break;
        case 3:

            VAR_17.ViewDimension = VAR_7;
            VAR_17.Texture3D.MipLevels = 1;
            break;
        }
        VAR_16 = FUNC_3(VAR_13->dev, VAR_14->res, &VAR_17,
                                                   &VAR_14->srv);
        if (FUNC_0(VAR_16)) {
            FUNC_5(VAR_11, "Failed to create SRV: %s\n", FUNC_7(VAR_16));
            goto error;
        }
    }



    if (VAR_15->render_src) {
        D3D11_SAMPLER_DESC VAR_18 = {
            .AddressU = VAR_8,
            .AddressV = VAR_8,
            .AddressW = VAR_8,
            .ComparisonFunc = VAR_0,
            .MinLOD = 0,
            .MaxLOD = VAR_2,
            .MaxAnisotropy = 1,
        };
        if (VAR_15->src_linear)
            VAR_18.Filter = VAR_1;
        if (VAR_15->src_repeat) {
            VAR_18.AddressU = VAR_18.AddressV = VAR_18.AddressW =
                VAR_9;
        }


        VAR_16 = FUNC_2(VAR_13->dev, &VAR_18, &VAR_14->sampler);
        if (FUNC_0(VAR_16)) {
            FUNC_5(VAR_11, "Failed to create sampler: %s\n", FUNC_7(VAR_16));
            goto error;
        }
    }


    if (VAR_15->render_dst || VAR_15->blit_dst) {
        VAR_16 = FUNC_1(VAR_13->dev, VAR_14->res, ((void*)0),
                                                 &VAR_14->rtv);
        if (FUNC_0(VAR_16)) {
            FUNC_5(VAR_11, "Failed to create RTV: %s\n", FUNC_7(VAR_16));
            goto error;
        }
    }

    if (VAR_13->fl >= VAR_10 && VAR_15->storage_dst) {
        VAR_16 = FUNC_4(VAR_13->dev, VAR_14->res, ((void*)0),
                                                    &VAR_14->uav);
        if (FUNC_0(VAR_16)) {
            FUNC_5(VAR_11, "Failed to create UAV: %s\n", FUNC_7(VAR_16));
            goto error;
        }
    }

    return 1;
error:
    return 0;
}
