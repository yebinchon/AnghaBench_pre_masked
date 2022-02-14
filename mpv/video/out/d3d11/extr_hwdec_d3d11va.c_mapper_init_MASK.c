
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ra_imgfmt_desc {int num_planes; int * planes; int member_0; } ;
struct TYPE_11__ {int imgfmt; int hw_subfmt; int h; int w; } ;
struct ra_hwdec_mapper {int * tex; int ra; TYPE_5__ dst_params; TYPE_5__ src_params; struct priv* priv; TYPE_1__* owner; } ;
struct priv_owner {int device1; int device; TYPE_2__* opts; } ;
struct priv {int num_planes; int ctx; int copy_tex; int * fmt; } ;
struct mp_image {int member_0; } ;
struct TYPE_9__ {int Count; } ;
struct TYPE_10__ {int MipLevels; int ArraySize; int BindFlags; int Format; TYPE_3__ SampleDesc; int Height; int Width; } ;
struct TYPE_8__ {scalar_t__ zero_copy; } ;
struct TYPE_7__ {struct priv_owner* priv; } ;
typedef int HRESULT ;
typedef int DXGI_FORMAT ;
typedef TYPE_4__ D3D11_TEXTURE2D_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_4__*,int *,int *) ;


 int FUNC_3 (struct ra_hwdec_mapper*,char*) ;
 int FUNC_4 (struct mp_image*,int) ;
 int FUNC_5 (struct mp_image*,int) ;
 int FUNC_6 (struct mp_image*,TYPE_5__*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int,struct ra_imgfmt_desc*) ;

__attribute__((used)) static int FUNC_9(struct ra_hwdec_mapper *VAR_3)
{
    struct priv_owner *VAR_4 = VAR_3->owner->priv;
    struct priv *VAR_5 = VAR_3->priv;
    HRESULT VAR_6;

    VAR_3->dst_params = VAR_3->src_params;
    VAR_3->dst_params.imgfmt = VAR_3->src_params.hw_subfmt;
    VAR_3->dst_params.hw_subfmt = 0;

    struct ra_imgfmt_desc VAR_7 = {0};

    if (!FUNC_8(VAR_3->ra, VAR_3->dst_params.imgfmt, &VAR_7))
        return -1;

    if (VAR_4->opts->zero_copy) {


        VAR_5->num_planes = VAR_7.num_planes;
        for (int VAR_8 = 0; VAR_8 < VAR_7.num_planes; VAR_8++)
            VAR_5->fmt[VAR_8] = VAR_7.planes[VAR_8];
    } else {
        struct mp_image VAR_9 = {0};
        FUNC_6(&VAR_9, &VAR_3->dst_params);

        DXGI_FORMAT VAR_10;
        switch (VAR_3->dst_params.imgfmt) {
        case 129: VAR_10 = VAR_1; break;
        case 128: VAR_10 = VAR_2; break;
        default: return -1;
        }

        D3D11_TEXTURE2D_DESC VAR_11 = {
            .Width = VAR_3->dst_params.w,
            .Height = VAR_3->dst_params.h,
            .MipLevels = 1,
            .ArraySize = 1,
            .SampleDesc.Count = 1,
            .Format = VAR_10,
            .BindFlags = VAR_0,
        };
        VAR_6 = FUNC_2(VAR_4->device, &VAR_11, ((void*)0),
                                          &VAR_5->copy_tex);
        if (FUNC_0(VAR_6)) {
            FUNC_3(VAR_3, "Could not create shader resource texture\n");
            return -1;
        }

        for (int VAR_12 = 0; VAR_12 < VAR_7.num_planes; VAR_12++) {
            VAR_3->tex[VAR_12] = FUNC_7(VAR_3->ra, VAR_5->copy_tex,
                FUNC_5(&VAR_9, VAR_12), FUNC_4(&VAR_9, VAR_12), 0,
                VAR_7.planes[VAR_12]);
            if (!VAR_3->tex[VAR_12]) {
                FUNC_3(VAR_3, "Could not create RA texture view\n");
                return -1;
            }
        }


        FUNC_1(VAR_4->device1, &VAR_5->ctx);
    }

    return 0;
}
