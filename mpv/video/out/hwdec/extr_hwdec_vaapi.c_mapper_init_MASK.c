
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_imgfmt_desc {int num_planes; int member_0; } ;
struct TYPE_6__ {scalar_t__ imgfmt; scalar_t__ hw_subfmt; } ;
struct ra_hwdec_mapper {TYPE_3__ dst_params; int ra; TYPE_3__ src_params; struct priv* priv; TYPE_1__* owner; } ;
struct priv_owner {int probing_formats; int (* interop_init ) (struct ra_hwdec_mapper*,struct ra_imgfmt_desc*) ;} ;
struct TYPE_5__ {int image_id; int buf; } ;
struct priv {int layout; int num_planes; TYPE_2__ current_image; } ;
struct TYPE_4__ {struct priv_owner* priv; } ;


 int FUNC_0 (struct ra_hwdec_mapper*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ra_hwdec_mapper*,scalar_t__) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,struct ra_imgfmt_desc*) ;
 int FUNC_5 (struct ra_hwdec_mapper*,struct ra_imgfmt_desc*) ;

__attribute__((used)) static int FUNC_6(struct ra_hwdec_mapper *VAR_1)
{
    struct priv_owner *VAR_2 = VAR_1->owner->priv;
    struct priv *VAR_3 = VAR_1->priv;

    VAR_3->current_image.buf = VAR_3->current_image.image_id = VAR_0;

    VAR_1->dst_params = VAR_1->src_params;
    VAR_1->dst_params.imgfmt = VAR_1->src_params.hw_subfmt;
    VAR_1->dst_params.hw_subfmt = 0;

    struct ra_imgfmt_desc VAR_4 = {0};

    if (!FUNC_4(VAR_1->ra, VAR_1->dst_params.imgfmt, &VAR_4))
        return -1;

    VAR_3->num_planes = VAR_4.num_planes;
    FUNC_2(&VAR_3->layout, &VAR_1->dst_params);

    if (VAR_2->interop_init)
        if (!VAR_2->interop_init(VAR_1, &VAR_4))
            return -1;

    if (!VAR_2->probing_formats && !FUNC_1(VAR_1, VAR_1->dst_params.imgfmt))
    {
        FUNC_0(VAR_1, "unsupported VA image format %s\n",
                 FUNC_3(VAR_1->dst_params.imgfmt));
        return -1;
    }

    return 0;
}
